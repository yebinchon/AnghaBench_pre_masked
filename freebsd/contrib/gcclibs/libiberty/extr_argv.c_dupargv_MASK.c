
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

char **
FUNC_4 (char **VAR_0)
{
  int VAR_1;
  char **VAR_2;

  if (VAR_0 == ((void*)0))
    return ((void*)0);


  for (VAR_1 = 0; VAR_0[VAR_1] != ((void*)0); VAR_1++);
  VAR_2 = (char **) FUNC_1 ((VAR_1 + 1) * sizeof (char *));
  if (VAR_2 == ((void*)0))
    return ((void*)0);


  for (VAR_1 = 0; VAR_0[VAR_1] != ((void*)0); VAR_1++)
    {
      int VAR_3 = FUNC_3 (VAR_0[VAR_1]);
      VAR_2[VAR_1] = (char *) FUNC_1 (VAR_3 + 1);
      if (VAR_2[VAR_1] == ((void*)0))
 {
   FUNC_0 (VAR_2);
   return ((void*)0);
 }
      FUNC_2 (VAR_2[VAR_1], VAR_0[VAR_1]);
    }
  VAR_2[VAR_1] = ((void*)0);
  return VAR_2;
}
