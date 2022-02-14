
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



  case 0x80:
  case 0x83:
  VAR_2 = (1 << 0);
  break;

 default:
  VAR_2 = ~0;
 }

 return (VAR_2 & (1 << VAR_1));
}
