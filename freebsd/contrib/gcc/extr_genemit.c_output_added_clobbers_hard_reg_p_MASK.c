
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clobber_pat {int has_hard_reg; struct clobber_ent* insns; struct clobber_pat* next; } ;
struct clobber_ent {int code_number; struct clobber_ent* next; } ;


 struct clobber_pat* VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  struct clobber_pat *VAR_1;
  struct clobber_ent *VAR_2;
  int VAR_3, VAR_4;

  FUNC_0 ("\n\nint\nadded_clobbers_hard_reg_p (int insn_code_number)\n");
  FUNC_0 ("{\n");
  FUNC_0 ("  switch (insn_code_number)\n");
  FUNC_0 ("    {\n");

  for (VAR_3 = 0; VAR_3 <= 1; VAR_3++)
    {
      VAR_4 = 0;
      for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
 if (VAR_1->has_hard_reg == VAR_3)
   for (VAR_2 = VAR_1->insns; VAR_2; VAR_2 = VAR_2->next)
     {
       FUNC_0 ("    case %d:\n", VAR_2->code_number);
       VAR_4++;
     }

      if (VAR_4)
 FUNC_0 ("      return %d;\n\n", VAR_3);
    }

  FUNC_0 ("    default:\n");
  FUNC_0 ("      gcc_unreachable ();\n");
  FUNC_0 ("    }\n");
  FUNC_0 ("}\n");
}
