
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clobber_pat {int first_clobber; int pattern; struct clobber_ent* insns; struct clobber_pat* next; } ;
struct clobber_ent {int code_number; struct clobber_ent* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int) ;
 struct clobber_pat* VAR_0 ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void
FUNC_5 (void)
{
  struct clobber_pat *VAR_1;
  struct clobber_ent *VAR_2;
  int VAR_3;

  FUNC_4 ("\n\nvoid\nadd_clobbers (rtx pattern ATTRIBUTE_UNUSED, int insn_code_number)\n");
  FUNC_4 ("{\n");
  FUNC_4 ("  switch (insn_code_number)\n");
  FUNC_4 ("    {\n");

  for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
    {
      for (VAR_2 = VAR_1->insns; VAR_2; VAR_2 = VAR_2->next)
 FUNC_4 ("    case %d:\n", VAR_2->code_number);

      for (VAR_3 = VAR_1->first_clobber; VAR_3 < FUNC_2 (VAR_1->pattern, 1); VAR_3++)
 {
   FUNC_4 ("      XVECEXP (pattern, 0, %d) = ", VAR_3);
   FUNC_3 (FUNC_1 (VAR_1->pattern, 1, VAR_3),
     FUNC_0 (VAR_1->pattern), ((void*)0));
   FUNC_4 (";\n");
 }

      FUNC_4 ("      break;\n\n");
    }

  FUNC_4 ("    default:\n");
  FUNC_4 ("      gcc_unreachable ();\n");
  FUNC_4 ("    }\n");
  FUNC_4 ("}\n");
}
