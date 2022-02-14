
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  FUNC_0 ("const char *\n");
  FUNC_0 ("get_insn_name (int code)\n");
  FUNC_0 ("{\n");
  FUNC_0 ("  if (code == NOOP_MOVE_INSN_CODE)\n");
  FUNC_0 ("    return \"NOOP_MOVE\";\n");
  FUNC_0 ("  else\n");
  FUNC_0 ("    return insn_data[code].name;\n");
  FUNC_0 ("}\n");
}
