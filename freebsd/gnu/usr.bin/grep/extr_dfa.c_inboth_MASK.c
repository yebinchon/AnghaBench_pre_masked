
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (char**,char**) ;
 char** FUNC_1 (char*,char*) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (char**) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static char **
FUNC_5 (char **VAR_0, char **VAR_1)
{
  char **VAR_2;
  char **VAR_3;
  int VAR_4, VAR_5;

  if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
    return ((void*)0);
  VAR_2 = (char **) FUNC_4(sizeof *VAR_2);
  if (VAR_2 == ((void*)0))
    return ((void*)0);
  VAR_2[0] = ((void*)0);
  for (VAR_4 = 0; VAR_0[VAR_4] != ((void*)0); ++VAR_4)
    {
      for (VAR_5 = 0; VAR_1[VAR_5] != ((void*)0); ++VAR_5)
 {
   VAR_3 = FUNC_1(VAR_0[VAR_4], VAR_1[VAR_5]);
   if (VAR_3 == ((void*)0))
     {
       FUNC_3(VAR_2);
       return ((void*)0);
     }
   VAR_2 = FUNC_0(VAR_2, VAR_3);
   FUNC_3(VAR_3);
   FUNC_2(VAR_3);
   if (VAR_2 == ((void*)0))
     return ((void*)0);
 }
    }
  return VAR_2;
}
