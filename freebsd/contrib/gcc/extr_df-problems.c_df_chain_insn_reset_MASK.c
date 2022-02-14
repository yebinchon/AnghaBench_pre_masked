
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_ref {struct df_ref* next_ref; int * chain; } ;
struct df_insn_info {struct df_ref* uses; struct df_ref* defs; } ;
struct df {unsigned int insns_size; } ;
struct dataflow {int flags; struct df* df; } ;
typedef int rtx ;


 int VAR_0 ;
 struct df_insn_info* FUNC_0 (struct df*,unsigned int) ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (struct dataflow *VAR_2, rtx VAR_3)
{
  struct df *VAR_4 = VAR_2->df;
  unsigned int VAR_5 = FUNC_1 (VAR_3);
  struct df_insn_info *VAR_6 = ((void*)0);
  struct df_ref *VAR_7;

  if (VAR_5 < VAR_4->insns_size)
    VAR_6 = FUNC_0 (VAR_4, VAR_5);

  if (VAR_6)
    {
      if (VAR_2->flags & VAR_0)
 {
   VAR_7 = VAR_6->defs;
   while (VAR_7)
     {
       VAR_7->chain = ((void*)0);
       VAR_7 = VAR_7->next_ref;
     }
 }

      if (VAR_2->flags & VAR_1)
 {
   VAR_7 = VAR_6->uses;
   while (VAR_7)
     {
       VAR_7->chain = ((void*)0);
       VAR_7 = VAR_7->next_ref;
     }
 }
    }
}
