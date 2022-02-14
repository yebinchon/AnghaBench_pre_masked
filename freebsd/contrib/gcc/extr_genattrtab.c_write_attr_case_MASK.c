
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct attr_value {int num_insns; int value; TYPE_2__* first_insn; scalar_t__ has_asm_insn; } ;
struct attr_desc {int dummy; } ;
typedef int rtx ;
struct TYPE_4__ {TYPE_1__* def; } ;
struct TYPE_3__ {int insn_code; int insn_index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct attr_desc*,int,int ,char const*,char const*,int ,int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_6 (struct attr_desc *VAR_3, struct attr_value *VAR_4,
   int VAR_5, const char *VAR_6, const char *VAR_7,
   int VAR_8, rtx VAR_9)
{
  if (VAR_4->num_insns == 0)
    return;

  if (VAR_4->has_asm_insn)
    {
      FUNC_4 (VAR_8);
      FUNC_0 ("case -1:\n");
      FUNC_4 (VAR_8 + 2);
      FUNC_0 ("if (GET_CODE (PATTERN (insn)) != ASM_INPUT\n");
      FUNC_4 (VAR_8 + 2);
      FUNC_0 ("    && asm_noperands (PATTERN (insn)) < 0)\n");
      FUNC_4 (VAR_8 + 2);
      FUNC_0 ("  fatal_insn_not_found (insn);\n");
    }

  if (VAR_5)
    FUNC_5 (VAR_4->first_insn, VAR_8);
  else
    {
      FUNC_4 (VAR_8);
      FUNC_0 ("default:\n");
    }


  VAR_2 = VAR_1 = VAR_0 = 0;
  FUNC_2 (VAR_4->value);

  if (VAR_1)
    {
      FUNC_4 (VAR_8 + 2);
      FUNC_0 ("extract_constrain_insn_cached (insn);\n");
    }
  else if (VAR_2)
    {
      FUNC_4 (VAR_8 + 2);
      FUNC_0 ("extract_insn_cached (insn);\n");
    }

  if (VAR_4->num_insns == 1)
    FUNC_3 (VAR_3, VAR_8 + 2, VAR_4->value, VAR_6, VAR_7,
      VAR_9, VAR_4->first_insn->def->insn_code,
      VAR_4->first_insn->def->insn_index);
  else
    FUNC_3 (VAR_3, VAR_8 + 2, VAR_4->value, VAR_6, VAR_7,
      VAR_9, -2, 0);

  if (FUNC_1 (VAR_6, "return", 6))
    {
      FUNC_4 (VAR_8 + 2);
      FUNC_0 ("break;\n");
    }
  FUNC_0 ("\n");
}
