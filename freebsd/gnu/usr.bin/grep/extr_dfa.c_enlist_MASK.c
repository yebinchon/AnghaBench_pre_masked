
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char**) ;
 char* FUNC_2 (char*) ;
 int * FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,int) ;

__attribute__((used)) static char **
FUNC_5 (char **VAR_0, char *VAR_1, size_t VAR_2)
{
  int VAR_3, VAR_4;

  if (VAR_0 == ((void*)0))
    return ((void*)0);
  if ((VAR_1 = FUNC_2(VAR_1)) == ((void*)0))
    {
      FUNC_1(VAR_0);
      return ((void*)0);
    }
  VAR_1[VAR_2] = '\0';

  for (VAR_3 = 0; VAR_0[VAR_3] != ((void*)0); ++VAR_3)
    if (FUNC_3(VAR_0[VAR_3], VAR_1) != ((void*)0))
      {
 FUNC_0(VAR_1);
 return VAR_0;
      }

  VAR_4 = 0;
  while (VAR_0[VAR_4] != ((void*)0))
    if (FUNC_3(VAR_1, VAR_0[VAR_4]) == ((void*)0))
      ++VAR_4;
    else
      {
 FUNC_0(VAR_0[VAR_4]);
 if (--VAR_3 == VAR_4)
   break;
 VAR_0[VAR_4] = VAR_0[VAR_3];
 VAR_0[VAR_3] = ((void*)0);
      }

  VAR_0 = (char **) FUNC_4((char *) VAR_0, (VAR_3 + 2) * sizeof *VAR_0);
  if (VAR_0 == ((void*)0))
    return ((void*)0);
  VAR_0[VAR_3] = VAR_1;
  VAR_0[VAR_3 + 1] = ((void*)0);
  return VAR_0;
}
