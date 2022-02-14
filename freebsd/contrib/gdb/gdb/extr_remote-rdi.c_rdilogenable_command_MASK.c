
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_1, int VAR_2)
{
  if (!VAR_1 || FUNC_3 (VAR_1) == 0)
    {
      FUNC_1 ("rdi log is %s\n", VAR_0 ? "enabled" : "disabled");
      return;
    }

  if (!FUNC_2 (VAR_1, "1") ||
      !FUNC_2 (VAR_1, "y") ||
      !FUNC_2 (VAR_1, "yes") ||
      !FUNC_2 (VAR_1, "on") ||
      !FUNC_2 (VAR_1, "t") ||
      !FUNC_2 (VAR_1, "true"))
    FUNC_0 (VAR_0 = 1);
  else if (!FUNC_2 (VAR_1, "0") ||
    !FUNC_2 (VAR_1, "n") ||
    !FUNC_2 (VAR_1, "no") ||
    !FUNC_2 (VAR_1, "off") ||
    !FUNC_2 (VAR_1, "f") ||
    !FUNC_2 (VAR_1, "false"))
    FUNC_0 (VAR_0 = 0);
  else
    FUNC_1 ("rdilogenable: unrecognized argument '%s'\n"
       "              try y or n\n", VAR_1);
}
