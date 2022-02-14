
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_scan_problem_data {int insn_pool; int mw_reg_pool; int mw_link_pool; } ;
struct df_ref {int dummy; } ;
struct df_mw_hardreg {struct df_ref* uses; struct df_ref* defs; struct df_mw_hardreg* next; struct df_mw_hardreg* regs; struct df_mw_hardreg* mw_hardregs; } ;
struct df_link {struct df_ref* uses; struct df_ref* defs; struct df_link* next; struct df_link* regs; struct df_link* mw_hardregs; } ;
struct df_insn_info {struct df_ref* uses; struct df_ref* defs; struct df_insn_info* next; struct df_insn_info* regs; struct df_insn_info* mw_hardregs; } ;
struct df {unsigned int insns_size; } ;
struct dataflow {scalar_t__ problem_data; struct df* df; } ;
typedef int rtx ;


 int FUNC_0 (struct df*,int ,int *) ;
 struct df_mw_hardreg* FUNC_1 (struct df*,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 struct df_ref* FUNC_3 (struct dataflow*,struct df_ref*) ;
 int FUNC_4 (int ,struct df_mw_hardreg*) ;

void
FUNC_5 (struct dataflow *VAR_0, rtx VAR_1)
{
  struct df *VAR_2 = VAR_0->df;
  unsigned int VAR_3 = FUNC_2 (VAR_1);
  struct df_insn_info *VAR_4 = ((void*)0);
  struct df_ref *VAR_5;
  struct df_scan_problem_data *VAR_6
    = (struct df_scan_problem_data *) VAR_0->problem_data;

  if (VAR_3 < VAR_2->insns_size)
    VAR_4 = FUNC_1 (VAR_2, VAR_3);

  if (VAR_4)
    {
      struct df_mw_hardreg *VAR_7 = VAR_4->mw_hardregs;

      while (VAR_7)
 {
   struct df_mw_hardreg *VAR_8 = VAR_7->next;
   struct df_link *VAR_9 = VAR_7->regs;
   while (VAR_9)
     {
       struct df_link *VAR_10 = VAR_9->next;
       FUNC_4 (VAR_6->mw_link_pool, VAR_9);
       VAR_9 = VAR_10;
     }

   FUNC_4 (VAR_6->mw_reg_pool, VAR_7);
   VAR_7 = VAR_8;
 }

      VAR_5 = VAR_4->defs;
      while (VAR_5)
 VAR_5 = FUNC_3 (VAR_0, VAR_5);

      VAR_5 = VAR_4->uses;
      while (VAR_5)
 VAR_5 = FUNC_3 (VAR_0, VAR_5);

      FUNC_4 (VAR_6->insn_pool, VAR_4);
      FUNC_0 (VAR_2, VAR_1, ((void*)0));
    }
}
