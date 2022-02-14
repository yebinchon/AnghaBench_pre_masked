
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,char) ;

void
FUNC_2(char *VAR_0, char *VAR_1)
{
  char *VAR_2, *VAR_3;

  if ((VAR_2 = FUNC_1(VAR_0, '.')) &&
      (VAR_3 = FUNC_1(VAR_1, '.')) &&
      FUNC_0(VAR_2 + 1, VAR_3 + 1))
    *VAR_2 = '\0';
}
