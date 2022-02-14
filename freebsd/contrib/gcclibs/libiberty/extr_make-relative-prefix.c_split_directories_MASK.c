
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char**) ;
 scalar_t__ FUNC_3 (int) ;
 char* FUNC_4 (char const*,int) ;

__attribute__((used)) static char **
FUNC_5 (const char *VAR_0, int *VAR_1)
{
  int VAR_2 = 0;
  char **VAR_3;
  const char *VAR_4, *VAR_5;
  int VAR_6;



  VAR_4 = VAR_0;
  while ((VAR_6 = *VAR_4++) != '\0')
    {
      if (FUNC_0 (VAR_6))
 {
   VAR_2++;
   while (FUNC_0 (*VAR_4))
     VAR_4++;
 }
    }

  VAR_3 = (char **) FUNC_3 (sizeof (char *) * (VAR_2 + 2));
  if (VAR_3 == ((void*)0))
    return ((void*)0);


  VAR_2 = 0;
  VAR_4 = VAR_0;
  VAR_5 = VAR_4;
  while ((VAR_6 = *VAR_4++) != '\0')
    {
      if (FUNC_0 (VAR_6))
 {
   while (FUNC_0 (*VAR_4))
     VAR_4++;

   VAR_3[VAR_2++] = FUNC_4 (VAR_5, VAR_4 - VAR_5);
   if (VAR_3[VAR_2 - 1] == ((void*)0))
     {
       VAR_3[VAR_2] = ((void*)0);
       FUNC_2 (VAR_3);
       return ((void*)0);
     }
   VAR_5 = VAR_4;
 }
    }

  if (VAR_4 - 1 - VAR_5 > 0)
    VAR_3[VAR_2++] = FUNC_4 (VAR_5, VAR_4 - 1 - VAR_5);
  VAR_3[VAR_2] = ((void*)0);

  if (VAR_3[VAR_2 - 1] == ((void*)0))
    {
      FUNC_2 (VAR_3);
      return ((void*)0);
    }

  if (VAR_1)
    *VAR_1 = VAR_2;
  return VAR_3;
}
