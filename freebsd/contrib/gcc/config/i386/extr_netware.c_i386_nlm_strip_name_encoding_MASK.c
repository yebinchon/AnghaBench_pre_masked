
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (char const*,int) ;
 char* FUNC_4 (char const*,char) ;

const char *
FUNC_5 (const char *VAR_0)
{
  const char *VAR_1 = FUNC_1 (VAR_0);

  if (*VAR_0 != '*' && (*VAR_1 == '_' || *VAR_1 == '@'))
    {
      const char *VAR_2 = FUNC_4 (VAR_1 + 1, '@');

      if (VAR_2)
 {
   ++VAR_1;
   if (FUNC_0 (VAR_2[1]))
     VAR_1 = FUNC_3 (VAR_1, VAR_2 - VAR_1);
   else
     {
       FUNC_2 (FUNC_0 (*VAR_1));
       VAR_1++;
       FUNC_2 (VAR_1 == VAR_2);
     }
 }
    }
  return VAR_1;
}
