
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct decision_head {TYPE_1__* first; } ;
typedef enum routine_type { ____Placeholder_routine_type } routine_type ;
struct TYPE_2__ {int subroutine_number; } ;


 scalar_t__ FUNC_0 (int) ;



 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (struct decision_head*,char*,int,int) ;

__attribute__((used)) static void
FUNC_5 (struct decision_head *VAR_1, enum routine_type VAR_2)
{
  int VAR_3 = VAR_1->first ? VAR_1->first->subroutine_number : 0;
  const char *VAR_4;
  char VAR_5[32];
  int VAR_6;

  VAR_4 = VAR_3 ? "static " : "";

  if (VAR_3)
    FUNC_2 (VAR_5, "_%d", VAR_3);
  else if (VAR_2 == 129)
    VAR_5[0] = '\0';
  else
    FUNC_3 (VAR_5, "_insns");

  switch (VAR_2)
    {
    case 129:
      FUNC_1 ("%sint\nrecog%s (rtx x0 ATTRIBUTE_UNUSED,\n\trtx insn ATTRIBUTE_UNUSED,\n\tint *pnum_clobbers ATTRIBUTE_UNUSED)\n", VAR_4, VAR_5);

      break;
    case 128:
      FUNC_1 ("%srtx\nsplit%s (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)\n",

       VAR_4, VAR_5);
      break;
    case 130:
      FUNC_1 ("%srtx\npeephole2%s (rtx x0 ATTRIBUTE_UNUSED,\n\trtx insn ATTRIBUTE_UNUSED,\n\tint *_pmatch_len ATTRIBUTE_UNUSED)\n",

       VAR_4, VAR_5);
      break;
    }

  FUNC_1 ("{\n  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];\n");
  for (VAR_6 = 1; VAR_6 <= VAR_0; VAR_6++)
    FUNC_1 ("  rtx x%d ATTRIBUTE_UNUSED;\n", VAR_6);

  FUNC_1 ("  %s tem ATTRIBUTE_UNUSED;\n", FUNC_0 (VAR_2) ? "rtx" : "int");

  if (!VAR_3)
    FUNC_1 ("  recog_data.insn = NULL_RTX;\n");

  if (VAR_1->first)
    FUNC_4 (VAR_1, "", VAR_2, 1);
  else
    FUNC_1 ("  goto ret0;\n");

  FUNC_1 (" ret0:\n  return %d;\n}\n\n", FUNC_0 (VAR_2) ? 0 : -1);
}
