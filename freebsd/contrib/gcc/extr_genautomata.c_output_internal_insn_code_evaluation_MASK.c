
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,char*,char const*,...) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1 (const char *VAR_3,
          const char *VAR_4,
          int VAR_5)
{
  FUNC_0 (VAR_2, "\n  if (%s != 0)\n    {\n", VAR_3);
  FUNC_0 (VAR_2, "      %s = %s (%s);\n", VAR_4,
    VAR_1, VAR_3);
  FUNC_0 (VAR_2, "      if (%s > %s)\n        return %d;\n",
    VAR_4, VAR_0, VAR_5);
  FUNC_0 (VAR_2, "    }\n  else\n    %s = %s;\n\n",
    VAR_4, VAR_0);
}
