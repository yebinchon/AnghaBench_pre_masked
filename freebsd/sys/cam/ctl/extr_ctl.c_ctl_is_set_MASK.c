
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



int
FUNC_0(uint32_t *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2, VAR_3;

 VAR_2 = VAR_1 >> 5;
 VAR_3 = VAR_1 % (sizeof(uint32_t) * 8);

 if ((VAR_0[VAR_2] & (1 << VAR_3)) == 0)
  return (0);
 else
  return (1);
}
