
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char*,char const*) ;
 int FUNC_2 (char const*) ;

char *
FUNC_3 (char const *VAR_0, char const *VAR_1)
{
  char const *VAR_2 = FUNC_0 (VAR_0);
  bool VAR_3 = !*VAR_2 || VAR_2[FUNC_2 (VAR_2) - 1] == '/';
  return FUNC_1 (VAR_0, &"/" [ VAR_3], VAR_1);
}
