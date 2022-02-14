
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(uint16_t VAR_1, uint8_t VAR_2,
    uint8_t VAR_3)
{






 if (VAR_1 != VAR_0)
  goto done;

 switch (VAR_2) {
 case 0x02:
  switch (VAR_3) {
  case 0x16:
  case 0x46:
  case 0x76:
   return (1);
  default:
   break;
  }
  break;
 case 0x03:
  switch (VAR_3) {
  case 0x16:
   return (1);
  default:
   break;
  }
  break;
 default:
  break;
 }
done:
 return (0);
}
