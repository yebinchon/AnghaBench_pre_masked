
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_3 (char *VAR_0)
{
  int VAR_1;

  if (!VAR_0 || !*VAR_0)
    return 1;

  VAR_1 = FUNC_1 (VAR_0);

  while (VAR_0[VAR_1 - 1] == ' ' || VAR_0[VAR_1 - 1] == '\t')
    VAR_1--;

  if (FUNC_2 (VAR_0, "on", VAR_1) == 0
      || FUNC_2 (VAR_0, "1", VAR_1) == 0
      || FUNC_2 (VAR_0, "yes", VAR_1) == 0
      || FUNC_2 (VAR_0, "enable", VAR_1) == 0)
    return 1;
  else if (FUNC_2 (VAR_0, "off", VAR_1) == 0
    || FUNC_2 (VAR_0, "0", VAR_1) == 0
    || FUNC_2 (VAR_0, "no", VAR_1) == 0
    || FUNC_2 (VAR_0, "disable", VAR_1) == 0)
    return 0;
  else
    {
      FUNC_0 ("\"on\" or \"off\" expected.");
      return 0;
    }
}
