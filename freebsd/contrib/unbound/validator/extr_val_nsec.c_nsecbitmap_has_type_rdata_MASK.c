
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



int
FUNC_0(uint8_t* VAR_0, size_t VAR_1, uint16_t VAR_2)
{


 uint8_t VAR_3[8] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01};
 uint8_t VAR_4 = VAR_2>>8;
 uint8_t VAR_5 = VAR_2&0xff;
 uint8_t VAR_6, VAR_7;


 while(VAR_1 > 0) {
  if(VAR_1 < 3)
   return 0;
  VAR_6 = *VAR_0++;
  VAR_7 = *VAR_0++;
  VAR_1 -= 2;
  if(VAR_1 < VAR_7 || VAR_7 < 1 || VAR_7 > 32)
   return 0;
  if(VAR_6 == VAR_4) {


   size_t VAR_8 = VAR_5>>3;
   if(VAR_7 <= VAR_8)
    return 0;
   return (int)(VAR_0[VAR_8] & VAR_3[VAR_5&0x7]);
  } else {

   VAR_0 += VAR_7;
   VAR_1 -= VAR_7;
  }
 }

 return 0;
}
