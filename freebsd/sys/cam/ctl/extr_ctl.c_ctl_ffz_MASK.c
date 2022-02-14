
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



int
FUNC_0(uint32_t *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_1; VAR_3 < VAR_2; VAR_3++) {
  if ((VAR_0[VAR_3 / 32] & (1 << (VAR_3 % 32))) == 0)
   return (VAR_3);
 }
 return (-1);
}
