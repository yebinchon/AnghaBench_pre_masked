
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct umidi_sub_chan {int* temp_0; int* temp_cmd; int* temp_1; int state; } ;
 void* VAR_0 ;

__attribute__((used)) static uint8_t
FUNC_0(struct umidi_sub_chan *VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
 uint8_t VAR_4 = (VAR_2 << 4);

 if (VAR_3 >= 0xf8) {
  VAR_1->temp_0[0] = VAR_4 | 0x0f;
  VAR_1->temp_0[1] = VAR_3;
  VAR_1->temp_0[2] = 0;
  VAR_1->temp_0[3] = 0;
  VAR_1->temp_cmd = VAR_1->temp_0;
  return (1);

 } else if (VAR_3 >= 0xf0) {
  switch (VAR_3) {
  case 0xf0:
   VAR_1->temp_1[1] = VAR_3;
   VAR_1->state = 129;
   break;
  case 0xf1:
  case 0xf3:
   VAR_1->temp_1[1] = VAR_3;
   VAR_1->state = 133;
   break;
  case 0xf2:
   VAR_1->temp_1[1] = VAR_3;
   VAR_1->state = 132;
   break;
  case 0xf4:
  case 0xf5:
   VAR_1->state = VAR_0;
   break;
  case 0xf6:
   VAR_1->temp_1[0] = VAR_4 | 0x05;
   VAR_1->temp_1[1] = 0xf6;
   VAR_1->temp_1[2] = 0;
   VAR_1->temp_1[3] = 0;
   VAR_1->temp_cmd = VAR_1->temp_1;
   VAR_1->state = VAR_0;
   return (1);

  case 0xf7:
   switch (VAR_1->state) {
   case 130:
    VAR_1->temp_1[0] = VAR_4 | 0x05;
    VAR_1->temp_1[1] = 0xf7;
    VAR_1->temp_1[2] = 0;
    VAR_1->temp_1[3] = 0;
    VAR_1->temp_cmd = VAR_1->temp_1;
    VAR_1->state = VAR_0;
    return (1);
   case 129:
    VAR_1->temp_1[0] = VAR_4 | 0x06;
    VAR_1->temp_1[2] = 0xf7;
    VAR_1->temp_1[3] = 0;
    VAR_1->temp_cmd = VAR_1->temp_1;
    VAR_1->state = VAR_0;
    return (1);
   case 128:
    VAR_1->temp_1[0] = VAR_4 | 0x07;
    VAR_1->temp_1[3] = 0xf7;
    VAR_1->temp_cmd = VAR_1->temp_1;
    VAR_1->state = VAR_0;
    return (1);
   }
   VAR_1->state = VAR_0;
   break;
  }
 } else if (VAR_3 >= 0x80) {
  VAR_1->temp_1[1] = VAR_3;
  if ((VAR_3 >= 0xc0) && (VAR_3 <= 0xdf)) {
   VAR_1->state = 133;
  } else {
   VAR_1->state = 132;
  }
 } else {
  switch (VAR_1->state) {
  case 133:
   if (VAR_1->temp_1[1] < 0xf0) {
    VAR_4 |= VAR_1->temp_1[1] >> 4;
   } else {
    VAR_4 |= 0x02;
    VAR_1->state = VAR_0;
   }
   VAR_1->temp_1[0] = VAR_4;
   VAR_1->temp_1[2] = VAR_3;
   VAR_1->temp_1[3] = 0;
   VAR_1->temp_cmd = VAR_1->temp_1;
   return (1);
  case 132:
   VAR_1->temp_1[2] = VAR_3;
   VAR_1->state = 131;
   break;
  case 131:
   if (VAR_1->temp_1[1] < 0xf0) {
    VAR_4 |= VAR_1->temp_1[1] >> 4;
    VAR_1->state = 132;
   } else {
    VAR_4 |= 0x03;
    VAR_1->state = VAR_0;
   }
   VAR_1->temp_1[0] = VAR_4;
   VAR_1->temp_1[3] = VAR_3;
   VAR_1->temp_cmd = VAR_1->temp_1;
   return (1);
  case 130:
   VAR_1->temp_1[1] = VAR_3;
   VAR_1->state = 129;
   break;
  case 129:
   VAR_1->temp_1[2] = VAR_3;
   VAR_1->state = 128;
   break;
  case 128:
   VAR_1->temp_1[0] = VAR_4 | 0x04;
   VAR_1->temp_1[3] = VAR_3;
   VAR_1->temp_cmd = VAR_1->temp_1;
   VAR_1->state = 130;
   return (1);
  default:
   break;
  }
 }
 return (0);
}
