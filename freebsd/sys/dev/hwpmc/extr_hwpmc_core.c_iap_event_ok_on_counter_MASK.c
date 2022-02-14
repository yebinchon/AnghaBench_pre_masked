
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static int
FUNC_0(uint8_t VAR_0, int VAR_1)
{
 uint32_t VAR_2;

 switch (VAR_0) {



 case 0x10:
 case 0x14:
 case 0x18:
 case 0xB3:
 case 0xC1:
 case 0xCB:
  VAR_2 = (1 << 0);
  break;




 case 0x11:
 case 0x12:
 case 0x13:
  VAR_2 = (1 << 1);
  break;

 default:
  VAR_2 = ~0;
 }

 return (VAR_2 & (1 << VAR_1));
}
