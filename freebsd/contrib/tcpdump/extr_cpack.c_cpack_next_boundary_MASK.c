
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



const uint8_t *
FUNC_0(const uint8_t *VAR_0, const uint8_t *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = (size_t)(VAR_1 - VAR_0) % VAR_2;

 if (VAR_3 == 0)
  return VAR_1;

 return VAR_1 + (VAR_2 - VAR_3);
}
