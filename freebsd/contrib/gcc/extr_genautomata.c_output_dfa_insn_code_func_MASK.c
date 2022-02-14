
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
 int FUNC_0 (int ,char*,char*,...) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_1 (void)
{


  FUNC_0 (VAR_6, "static void\ndfa_insn_code_enlarge (int uid)\n{\n  int i = %s;\n  %s = 2 * uid;\n  %s = xrealloc (%s,\n                 %s * sizeof(int));\n  for (; i < %s; i++)\n    %s[i] = -1;\n}\n\n",
    VAR_0,
    VAR_0,
    VAR_1, VAR_1,
    VAR_0,
    VAR_0,
    VAR_1);
  FUNC_0 (VAR_6, "static inline int\n%s (rtx %s)\n{\n  int uid = INSN_UID (%s);\n  int %s;\n\n",




    VAR_2, VAR_3,
    VAR_3, VAR_5);

  FUNC_0 (VAR_6,
    "  if (uid >= %s)\n    dfa_insn_code_enlarge (uid);\n\n",
    VAR_0);
  FUNC_0 (VAR_6, "  %s = %s[uid];\n",
    VAR_5, VAR_1);
  FUNC_0 (VAR_6, "  if (%s < 0)\n    {\n      %s = %s (%s);\n      %s[uid] = %s;\n    }\n",





    VAR_5,
    VAR_5,
    VAR_4, VAR_3,
    VAR_1, VAR_5);
  FUNC_0 (VAR_6, "  return %s;\n}\n\n", VAR_5);
}
