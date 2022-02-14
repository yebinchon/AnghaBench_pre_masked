
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (char**,char*,size_t) ;
 scalar_t__ FUNC_1 (int) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static char **
FUNC_3 (char *VAR_0, char *VAR_1)
{
  char **VAR_2;
  char *VAR_3;
  char *VAR_4;
  size_t VAR_5, VAR_6;

  if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
    return ((void*)0);
  VAR_2 = (char **) FUNC_1(sizeof *VAR_2);
  if (VAR_2 == ((void*)0))
    return ((void*)0);
  VAR_2[0] = ((void*)0);
  for (VAR_3 = VAR_0; *VAR_3 != '\0'; ++VAR_3)
    {
      VAR_6 = 0;
      VAR_4 = FUNC_2 (VAR_1, *VAR_3);
      while (VAR_4 != ((void*)0))
 {
   for (VAR_5 = 1; VAR_3[VAR_5] != '\0' && VAR_3[VAR_5] == VAR_4[VAR_5]; ++VAR_5)
     continue;
   if (VAR_5 > VAR_6)
     VAR_6 = VAR_5;
   VAR_4 = FUNC_2 (VAR_4 + 1, *VAR_3);
 }
      if (VAR_6 == 0)
 continue;
      if ((VAR_2 = FUNC_0(VAR_2, VAR_3, VAR_6)) == ((void*)0))
 break;
    }
  return VAR_2;
}
