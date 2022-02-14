
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int rawsum_t ;


 int FUNC_0 (int) ;

uint16_t
FUNC_1(rawsum_t VAR_0)
{

 while (VAR_0 >> 16)
  VAR_0 = (VAR_0 & 0xFFFF) + (VAR_0 >> 16);

 return FUNC_0((~VAR_0) & 0xFFFF);
}
