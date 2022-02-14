
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *
FUNC_0(char **VAR_0)
{
  char *VAR_1 = *VAR_0;
  char *VAR_2 = VAR_1;
  char *VAR_3 = VAR_1;

top:
  while (*VAR_1 && *VAR_1 != ';') {
    if (*VAR_1 == '\"') {



      VAR_1++;
      while (*VAR_1 && *VAR_1 != '\"')
 *VAR_2++ = *VAR_1++;
      if (*VAR_1)
 VAR_1++;
    } else {
      *VAR_2++ = *VAR_1++;
    }
  }




  while (*VAR_1 == ';')
    VAR_1++;







  if (*VAR_1 && VAR_2 == VAR_3)
    goto top;

  *VAR_0 = VAR_1;
  return VAR_3;
}
