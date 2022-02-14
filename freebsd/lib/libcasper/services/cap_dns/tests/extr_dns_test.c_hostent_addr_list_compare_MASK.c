
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*,int) ;

__attribute__((used)) static bool
FUNC_1(char **VAR_0, char **VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_0 == ((void*)0) && VAR_1 == ((void*)0))
  return (1);
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (0);

 for (VAR_3 = 0; VAR_0[VAR_3] != ((void*)0); VAR_3++) {
  for (VAR_4 = 0; VAR_1[VAR_4] != ((void*)0); VAR_4++) {
   if (FUNC_0(VAR_0[VAR_3], VAR_1[VAR_4], VAR_2) == 0)
    break;
  }
  if (VAR_1[VAR_4] == ((void*)0))
   return (0);
 }

 return (1);
}
