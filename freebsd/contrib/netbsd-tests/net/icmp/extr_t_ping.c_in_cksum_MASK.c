
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef unsigned int uint16_t ;



__attribute__((used)) static uint16_t
FUNC_0(void *VAR_0, size_t VAR_1)
{
 uint16_t *VAR_2 = VAR_0;
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_1 > 1; VAR_1 -= 2)
  VAR_3 += *VAR_2++;
 if (VAR_1)
  VAR_3 += *(uint8_t *)VAR_2;

 VAR_3 = (VAR_3 >> 16) + (VAR_3 & 0xffff);
 VAR_3 += (VAR_3 >> 16);

 return ~VAR_3;
}
