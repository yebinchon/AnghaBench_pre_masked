
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;

uint16_t
FUNC_0(int *VAR_3, int VAR_4)
{
 uint16_t VAR_5;


 VAR_5 = VAR_2[VAR_4 & 0x7f];
 switch (*VAR_3) {
 case 0x00:
  switch(VAR_4) {
  case 0xE0:
  case 0xE1:
   *VAR_3 = VAR_4;
   return (VAR_1);
  }
  break;
 case 0xE0:
  *VAR_3 = 0;
  VAR_5 = VAR_2[0x80 + (VAR_4 & 0x7f)];
  break;
 case 0xE1:






  *VAR_3 = 0;
  if ((VAR_4 & 0x7f) == 0x1D)
   *VAR_3 = VAR_4;
  return (VAR_1);

 case 0x1D:
 case 0x9D:
  if ((*VAR_3 ^ VAR_4) & 0x80)
   return (VAR_1);
  *VAR_3 = 0;
  if ((VAR_4 & 0x7f) != 0x45)
   return (VAR_1);
  VAR_5 = VAR_0;
  break;
 }

 return (VAR_5);
}
