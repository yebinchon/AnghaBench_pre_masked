
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;



__attribute__((used)) static uint16_t
FUNC_0(uint16_t *VAR_0, int VAR_1)
{
 uint32_t VAR_2 = 0;

 while (VAR_1-- > 0)
  VAR_2 += *VAR_0++;
 VAR_2 = (VAR_2 >> 16) + (VAR_2 & 0xffff);
 VAR_2 += (VAR_2 >> 16);
 return (~VAR_2);
}
