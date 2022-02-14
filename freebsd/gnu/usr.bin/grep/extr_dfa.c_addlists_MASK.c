
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (char**,char*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char **
FUNC_2 (char **VAR_0, char **VAR_1)
{
  int VAR_2;

  if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
    return ((void*)0);
  for (VAR_2 = 0; VAR_1[VAR_2] != ((void*)0); ++VAR_2)
    {
      VAR_0 = FUNC_0(VAR_0, VAR_1[VAR_2], FUNC_1(VAR_1[VAR_2]));
      if (VAR_0 == ((void*)0))
 break;
    }
  return VAR_0;
}
