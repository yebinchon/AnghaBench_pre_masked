
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char**,int) ;

__attribute__((used)) static char *
FUNC_2(int *VAR_1, int *VAR_2, char *VAR_3)
{
 char *VAR_4;
 VAR_4 = VAR_3;
 *VAR_1 = FUNC_1(VAR_3, &VAR_3, 10);
 if (VAR_3 == VAR_4 && *VAR_3 != '.')
  return (((void*)0));


 *VAR_2 = 0;
 if (*VAR_3 == '.') {
  int VAR_5 = 0;
  VAR_3++;
  while (FUNC_0(*VAR_3)) {
   int VAR_6 = *VAR_3 - '0';
   if (VAR_5 < VAR_0 - 2)
    *VAR_2 = *VAR_2 * 10 + VAR_6;
   else if (VAR_5 == VAR_0 - 2 && VAR_6 >= 5)
    (*VAR_2)++;
   VAR_5++;
   VAR_3++;
  }
  if (!VAR_5)
   return (((void*)0));
  while (VAR_5++ < VAR_0 - 2)
   *VAR_2 *= 10;
 }

 return (VAR_3);
}
