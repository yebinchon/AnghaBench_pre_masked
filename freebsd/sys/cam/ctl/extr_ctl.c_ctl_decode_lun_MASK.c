
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;




 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int*,int ) ;

uint32_t
FUNC_1(uint64_t VAR_3)
{
 uint8_t VAR_4[8];
 uint32_t VAR_5 = 0xffffffff;

 FUNC_0(VAR_4, VAR_3);
 switch (VAR_4[0] & VAR_0) {
 case 129:
  if ((VAR_4[0] & 0x3f) == 0 && VAR_4[2] == 0 && VAR_4[3] == 0 &&
      VAR_4[4] == 0 && VAR_4[5] == 0 && VAR_4[6] == 0 && VAR_4[7] == 0)
   VAR_5 = VAR_4[1];
  break;
 case 130:
  if (VAR_4[2] == 0 && VAR_4[3] == 0 && VAR_4[4] == 0 && VAR_4[5] == 0 &&
      VAR_4[6] == 0 && VAR_4[7] == 0)
   VAR_5 = ((VAR_4[0] & 0x3f) << 8) + VAR_4[1];
  break;
 case 131:
  switch (VAR_4[0] & VAR_1) {
  case 0x02:
   switch (VAR_4[0] & VAR_2) {
   case 0x00:
    VAR_5 = VAR_4[1];
    break;
   case 0x10:
    VAR_5 = (VAR_4[1] << 16) + (VAR_4[2] << 8) +
        VAR_4[3];
    break;
   case 0x20:
    if (VAR_4[1] == 0 && VAR_4[6] == 0 && VAR_4[7] == 0)
     VAR_5 = (VAR_4[2] << 24) +
         (VAR_4[3] << 16) + (VAR_4[4] << 8) +
         VAR_4[5];
    break;
   }
   break;
  case 128:
   VAR_5 = 0xffffffff;
   break;
  }
  break;
 }
 return (VAR_5);
}
