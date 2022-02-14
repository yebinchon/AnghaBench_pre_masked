
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int*) ;

char *
FUNC_3 (int *VAR_0)
{
  register char *VAR_1;

  if ((VAR_1 = FUNC_2 (VAR_0)) != 0)
    {
      register int VAR_2;

      for (VAR_2 = *VAR_0; VAR_2 > 0; VAR_2--)
 {
   if (*VAR_1 == 0)
     {
       VAR_1 = 0;
       VAR_2 = 1;
       *VAR_0 = 0;
       FUNC_1 (FUNC_0("this string may not contain \'\\0\'"));
     }
 }
    }

  return VAR_1;
}
