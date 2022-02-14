
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insn_def {int lineno; int insn_code; int insn_index; int num_alternatives; int vec_idx; int def; struct insn_def* next; } ;
typedef int rtx ;





 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 struct insn_def* VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 struct insn_def* FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (rtx VAR_4, int VAR_5)
{
  struct insn_def *VAR_6;

  VAR_6 = FUNC_3 (sizeof (struct insn_def));
  VAR_6->next = VAR_0;
  VAR_0 = VAR_6;
  VAR_6->def = VAR_4;
  VAR_6->lineno = VAR_5;

  switch (FUNC_0 (VAR_4))
    {
    case 129:
      VAR_6->insn_code = VAR_2;
      VAR_6->insn_index = VAR_3;
      VAR_6->num_alternatives = FUNC_1 (VAR_4);
      if (VAR_6->num_alternatives == 0)
 VAR_6->num_alternatives = 1;
      VAR_6->vec_idx = 4;
      break;

    case 128:
      VAR_6->insn_code = VAR_2;
      VAR_6->insn_index = VAR_3;
      VAR_6->num_alternatives = FUNC_1 (VAR_4);
      if (VAR_6->num_alternatives == 0)
 VAR_6->num_alternatives = 1;
      VAR_6->vec_idx = 3;
      break;

    case 130:
      VAR_6->insn_code = -1;
      VAR_6->insn_index = -1;
      VAR_6->num_alternatives = 1;
      VAR_6->vec_idx = 0;
      VAR_1 = 1;
      break;

    default:
      FUNC_2 ();
    }
}
