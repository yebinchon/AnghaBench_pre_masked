
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lin ;


 scalar_t__ FUNC_0 (char* const,char*,size_t const) ;

__attribute__((used)) static bool
FUNC_1 (char * const VAR_0[], size_t const VAR_1[],
   char *VAR_2[], size_t VAR_3[],
   lin VAR_4)
{
  register char * const *VAR_5 = VAR_0;
  register char **VAR_6 = VAR_2;
  register size_t const *VAR_7 = VAR_1;
  register size_t *VAR_8 = VAR_3;

  while (VAR_4--)
    {
      if (*VAR_6)
 {
   if (*VAR_7 != *VAR_8 || FUNC_0 (*VAR_5, *VAR_6, *VAR_7) != 0)
     return 0;
 }
      else
 {
   *VAR_6 = *VAR_5;
   *VAR_8 = *VAR_7;
 }

      VAR_6++; VAR_5++; VAR_8++; VAR_7++;
    }

  return 1;
}
