
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(uint8_t VAR_2,
     uint8_t VAR_3,
     uint32_t *VAR_4)
{

 if ((VAR_2 & ~0x0000001F) || (VAR_3 & ~0x0000001F))
  return -VAR_0;

 *VAR_4 = (uint32_t) ((VAR_3 << VAR_1) | VAR_2);
 return 0;
}
