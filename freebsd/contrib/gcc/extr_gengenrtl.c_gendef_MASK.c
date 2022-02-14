
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const) ;

__attribute__((used)) static void
FUNC_4 (const char *VAR_0)
{
  const char *VAR_1;
  int VAR_2, VAR_3;




  FUNC_1 ("rtx\ngen_rtx_fmt_%s (RTX_CODE code, enum machine_mode mode", VAR_0);
  for (VAR_1 = VAR_0, VAR_2 = 0; *VAR_1 != 0; VAR_1++)
    if (*VAR_1 != '0')
      FUNC_1 (",\n\t%sarg%d", FUNC_3 (*VAR_1), VAR_2++);

  FUNC_2 (")");



  FUNC_2 ("{");
  FUNC_2 ("  rtx rt;");
  FUNC_2 ("  rt = rtx_alloc (code);\n");

  FUNC_2 ("  PUT_MODE (rt, mode);");

  for (VAR_1 = VAR_0, VAR_2 = VAR_3 = 0; *VAR_1 ; ++VAR_1, ++VAR_2)
    if (*VAR_1 != '0')
      FUNC_1 ("  %s (rt, %d) = arg%d;\n", FUNC_0 (*VAR_1), VAR_2, VAR_3++);
    else
      FUNC_1 ("  X0EXP (rt, %d) = NULL_RTX;\n", VAR_2);

  FUNC_2 ("\n  return rt;\n}\n");
}
