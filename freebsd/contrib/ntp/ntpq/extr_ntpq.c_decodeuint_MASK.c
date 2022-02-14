
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int *) ;

int
FUNC_3(
 char *VAR_0,
 u_long *VAR_1
 )
{
 if (*VAR_0 == '0') {
  if (*(VAR_0 + 1) == 'x' || *(VAR_0 + 1) == 'X')
   return (FUNC_1(VAR_0 + 2, VAR_1));
  return (FUNC_2(VAR_0, VAR_1));
 }
 return (FUNC_0(VAR_0, VAR_1));
}
