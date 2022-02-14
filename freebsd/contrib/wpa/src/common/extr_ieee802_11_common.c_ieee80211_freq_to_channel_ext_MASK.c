
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum hostapd_hw_mode { ____Placeholder_hostapd_hw_mode } hostapd_hw_mode ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

enum hostapd_hw_mode FUNC_0(unsigned int VAR_5,
         int VAR_6, int VAR_7,
         u8 *VAR_8, u8 *VAR_9)
{
 u8 VAR_10;



 if (VAR_6 > 1 || VAR_6 < -1)
  return VAR_4;

 if (VAR_5 >= 2412 && VAR_5 <= 2472) {
  if ((VAR_5 - 2407) % 5)
   return VAR_4;

  if (VAR_7)
   return VAR_4;


  if (VAR_6 == 1)
   *VAR_8 = 83;
  else if (VAR_6 == -1)
   *VAR_8 = 84;
  else
   *VAR_8 = 81;

  *VAR_9 = (VAR_5 - 2407) / 5;

  return VAR_3;
 }

 if (VAR_5 == 2484) {
  if (VAR_6 || VAR_7)
   return VAR_4;

  *VAR_8 = 82;
  *VAR_9 = 14;

  return VAR_2;
 }

 if (VAR_5 >= 4900 && VAR_5 < 5000) {
  if ((VAR_5 - 4000) % 5)
   return VAR_4;
  *VAR_9 = (VAR_5 - 4000) / 5;
  *VAR_8 = 0;
  return VAR_0;
 }

 switch (VAR_7) {
 case 129:
  VAR_10 = 128;
  break;
 case 130:
  VAR_10 = 129;
  break;
 case 128:
  VAR_10 = 130;
  break;
 default:
  VAR_10 = 0;
  break;
 }


 if (VAR_5 >= 5180 && VAR_5 <= 5240) {
  if ((VAR_5 - 5000) % 5)
   return VAR_4;

  if (VAR_10)
   *VAR_8 = VAR_10;
  else if (VAR_6 == 1)
   *VAR_8 = 116;
  else if (VAR_6 == -1)
   *VAR_8 = 117;
  else
   *VAR_8 = 115;

  *VAR_9 = (VAR_5 - 5000) / 5;

  return VAR_0;
 }


 if (VAR_5 >= 5260 && VAR_5 <= 5320) {
  if ((VAR_5 - 5000) % 5)
   return VAR_4;

  if (VAR_10)
   *VAR_8 = VAR_10;
  else if (VAR_6 == 1)
   *VAR_8 = 119;
  else if (VAR_6 == -1)
   *VAR_8 = 120;
  else
   *VAR_8 = 118;

  *VAR_9 = (VAR_5 - 5000) / 5;

  return VAR_0;
 }


 if (VAR_5 >= 5745 && VAR_5 <= 5845) {
  if ((VAR_5 - 5000) % 5)
   return VAR_4;

  if (VAR_10)
   *VAR_8 = VAR_10;
  else if (VAR_6 == 1)
   *VAR_8 = 126;
  else if (VAR_6 == -1)
   *VAR_8 = 127;
  else if (VAR_5 <= 5805)
   *VAR_8 = 124;
  else
   *VAR_8 = 125;

  *VAR_9 = (VAR_5 - 5000) / 5;

  return VAR_0;
 }


 if (VAR_5 >= 5000 && VAR_5 <= 5700) {
  if ((VAR_5 - 5000) % 5)
   return VAR_4;

  if (VAR_10)
   *VAR_8 = VAR_10;
  else if (VAR_6 == 1)
   *VAR_8 = 122;
  else if (VAR_6 == -1)
   *VAR_8 = 123;
  else
   *VAR_8 = 121;

  *VAR_9 = (VAR_5 - 5000) / 5;

  return VAR_0;
 }

 if (VAR_5 >= 5000 && VAR_5 < 5900) {
  if ((VAR_5 - 5000) % 5)
   return VAR_4;
  *VAR_9 = (VAR_5 - 5000) / 5;
  *VAR_8 = 0;
  return VAR_0;
 }


 if (VAR_5 >= 56160 + 2160 * 1 && VAR_5 <= 56160 + 2160 * 4) {
  if (VAR_6 || VAR_7)
   return VAR_4;

  *VAR_9 = (VAR_5 - 56160) / 2160;
  *VAR_8 = 180;

  return VAR_1;
 }

 return VAR_4;
}
