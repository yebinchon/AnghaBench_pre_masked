
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const) ;

char *
FUNC_2 (char const *VAR_0)
{
  char const *VAR_1 = VAR_0 + FUNC_0 (VAR_0);
  char const *VAR_2;

  for (VAR_2 = VAR_1; *VAR_2; VAR_2++)
    {
      if (FUNC_1 (*VAR_2))
 {

   do VAR_2++;
   while (FUNC_1 (*VAR_2));



   if (! *VAR_2)
     {
       if (FUNC_1 (*VAR_1))
  VAR_1 = VAR_2 - 1;
       break;
     }


   VAR_1 = VAR_2;
 }
    }

  return (char *) VAR_1;
}
