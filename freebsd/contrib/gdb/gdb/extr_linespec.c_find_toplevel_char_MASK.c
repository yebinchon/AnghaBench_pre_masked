
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *
FUNC_0 (char *VAR_0, char VAR_1)
{
  int VAR_2 = 0;


  int VAR_3 = 0;
  char *VAR_4;

  for (VAR_4 = VAR_0; *VAR_4; VAR_4++)
    {
      if (VAR_2)
 {
   if (*VAR_4 == VAR_2)
     VAR_2 = 0;
   else if (*VAR_4 == '\\' && *(VAR_4 + 1))
     VAR_4++;
 }
      else if (*VAR_4 == VAR_1 && ! VAR_2 && VAR_3 == 0)
 return VAR_4;
      else if (*VAR_4 == '"' || *VAR_4 == '\'')
 VAR_2 = *VAR_4;
      else if (*VAR_4 == '(' || *VAR_4 == '<')
 VAR_3++;
      else if ((*VAR_4 == ')' || *VAR_4 == '>') && VAR_3 > 0)
 VAR_3--;
    }

  return 0;
}
