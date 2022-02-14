
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 scalar_t__ FUNC_0 (int) ;

uint16_t
FUNC_1(uint16_t VAR_0, uint16_t VAR_1)
{
 uint32_t VAR_2;
 VAR_2 = VAR_0;
 VAR_2 += FUNC_0(VAR_1);
 VAR_2 = (VAR_2 & 0xFFFF) + (VAR_2 >> 16);
 VAR_2 = (VAR_2 & 0xFFFF) + (VAR_2 >> 16);
 return VAR_2;
}
