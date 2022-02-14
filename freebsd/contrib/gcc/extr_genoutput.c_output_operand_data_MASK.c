
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct operand_data {char* predicate; char* constraint; int strict_low; int eliminable; int mode; struct operand_data* next; } ;


 char* FUNC_0 (int ) ;
 struct operand_data* VAR_0 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  struct operand_data *VAR_1;

  FUNC_1 ("\nstatic const struct insn_operand_data operand_data[] = \n{\n");

  for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
    {
      FUNC_1 ("  {\n");

      FUNC_1 ("    %s,\n",
       VAR_1->predicate && VAR_1->predicate[0] ? VAR_1->predicate : "0");

      FUNC_1 ("    \"%s\",\n", VAR_1->constraint ? VAR_1->constraint : "");

      FUNC_1 ("    %smode,\n", FUNC_0 (VAR_1->mode));

      FUNC_1 ("    %d,\n", VAR_1->strict_low);

      FUNC_1 ("    %d\n", VAR_1->eliminable);

      FUNC_1("  },\n");
    }
  FUNC_1("};\n\n\n");
}
