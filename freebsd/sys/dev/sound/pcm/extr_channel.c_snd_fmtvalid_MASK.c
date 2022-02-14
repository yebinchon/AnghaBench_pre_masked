
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;

int
FUNC_1(uint32_t VAR_1, uint32_t *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_2[VAR_3] != 0; VAR_3++) {
  if (VAR_1 == VAR_2[VAR_3] ||
      ((VAR_1 & VAR_0) &&
      (FUNC_0(VAR_1) & VAR_2[VAR_3])))
   return (1);
 }

 return (0);
}
