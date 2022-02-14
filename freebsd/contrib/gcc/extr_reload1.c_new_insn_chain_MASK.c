
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insn_chain {scalar_t__ need_elim; scalar_t__ need_reload; scalar_t__ need_operand_change; scalar_t__ is_caller_save_insn; struct insn_chain* next; int dead_or_set; int live_throughout; } ;


 int FUNC_0 (int *) ;
 struct insn_chain* FUNC_1 (int *,int) ;
 int VAR_0 ;
 struct insn_chain* VAR_1 ;

struct insn_chain *
FUNC_2 (void)
{
  struct insn_chain *VAR_2;

  if (VAR_1 == 0)
    {
      VAR_2 = FUNC_1 (&VAR_0, sizeof (struct insn_chain));
      FUNC_0 (&VAR_2->live_throughout);
      FUNC_0 (&VAR_2->dead_or_set);
    }
  else
    {
      VAR_2 = VAR_1;
      VAR_1 = VAR_2->next;
    }
  VAR_2->is_caller_save_insn = 0;
  VAR_2->need_operand_change = 0;
  VAR_2->need_reload = 0;
  VAR_2->need_elim = 0;
  return VAR_2;
}
