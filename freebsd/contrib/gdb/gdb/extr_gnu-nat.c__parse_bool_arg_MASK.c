
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2 (char *VAR_0, char *VAR_1, char *VAR_2, char *VAR_3)
{
  if (!VAR_0 || FUNC_1 (VAR_0, VAR_1) == 0)
    return 1;
  else if (FUNC_1 (VAR_0, VAR_2) == 0)
    return 0;
  else
    FUNC_0 ("Illegal argument for \"%s\" command, should be \"%s\" or \"%s\".",
    VAR_3, VAR_1, VAR_2);
}
