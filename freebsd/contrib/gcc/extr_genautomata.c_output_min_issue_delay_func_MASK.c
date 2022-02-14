
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  FUNC_0 (VAR_8, "int\n%s (%s %s, rtx %s)\n",
    VAR_5, VAR_7, VAR_6,
    VAR_2);
  FUNC_0 (VAR_8, "{\n  int %s;\n", VAR_3);
  FUNC_0 (VAR_8, "\n  if (%s != 0)\n    {\n", VAR_2);
  FUNC_0 (VAR_8, "      %s = %s (%s);\n", VAR_3,
    VAR_1, VAR_2);
  FUNC_0 (VAR_8, "      if (%s > %s)\n        return 0;\n",
    VAR_3, VAR_0);
  FUNC_0 (VAR_8, "    }\n  else\n    %s = %s;\n",
    VAR_3, VAR_0);
  FUNC_0 (VAR_8, "\n  return %s (%s, %s);\n",
    VAR_4, VAR_3,
    VAR_6);
  FUNC_0 (VAR_8, "}\n\n");
}
