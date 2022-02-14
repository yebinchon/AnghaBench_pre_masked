
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_mw_hardreg {scalar_t__ type; struct df_mw_hardreg* next; struct df_link* regs; } ;
struct df_link {struct df_link* next; int ref; } ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_2 (struct df_mw_hardreg *VAR_1, FILE *VAR_2)
{
  while (VAR_1)
    {
      struct df_link *VAR_3 = VAR_1->regs;
      FUNC_1 (VAR_2, "%c%d(",
        (VAR_1->type == VAR_0) ? 'd' : 'u',
        FUNC_0 (VAR_3->ref));
      while (VAR_3)
 {
   FUNC_1 (VAR_2, "%d ", FUNC_0 (VAR_3->ref));
   VAR_3 = VAR_3->next;
 }

      FUNC_1 (VAR_2, ") ");
      VAR_1 = VAR_1->next;
    }
}
