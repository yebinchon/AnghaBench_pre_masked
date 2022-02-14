
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



int
FUNC_0(uint8_t VAR_0[], size_t VAR_1)
{




 return (int) (VAR_0[VAR_1 / 8] & (1 << (7 - VAR_1 % 8)));
}
