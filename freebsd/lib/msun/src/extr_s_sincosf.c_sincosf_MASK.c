
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 int FUNC_1 (float,double*) ;
 int FUNC_2 (double,float*,float*) ;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;

void
FUNC_3(float VAR_4, float *VAR_5, float *VAR_6)
{
 float VAR_7, VAR_8;
 double VAR_9;
 int32_t VAR_10, VAR_11, VAR_12;

 FUNC_0(VAR_11, VAR_4);
 VAR_12 = VAR_11 & 0x7fffffff;

 if (VAR_12 <= 0x3f490fda) {
  if (VAR_12 < 0x39800000) {
   if ((int)VAR_4 == 0) {
    *VAR_5 = VAR_4;
    *VAR_6 = 1;
    return;
   }
  }
  FUNC_2(VAR_4, VAR_5, VAR_6);
  return;
 }

 if (VAR_12 <= 0x407b53d1) {
  if (VAR_12 <= 0x4016cbe3) {
   if (VAR_11 > 0) {
    FUNC_2(VAR_4 - VAR_0, VAR_6, VAR_5);
    *VAR_6 = -*VAR_6;
   } else {
    FUNC_2(VAR_4 + VAR_0, VAR_6, VAR_5);
    *VAR_5 = -*VAR_5;
   }
  } else {
   if (VAR_11 > 0)
    FUNC_2(VAR_4 - VAR_1, VAR_5, VAR_6);
   else
    FUNC_2(VAR_4 + VAR_1, VAR_5, VAR_6);
   *VAR_5 = -*VAR_5;
   *VAR_6 = -*VAR_6;
  }
  return;
 }

 if (VAR_12 <= 0x40e231d5) {
  if (VAR_12 <= 0x40afeddf) {
   if (VAR_11 > 0) {
    FUNC_2(VAR_4 - VAR_2, VAR_6, VAR_5);
    *VAR_5 = -*VAR_5;
   } else {
    FUNC_2(VAR_4 + VAR_2, VAR_6, VAR_5);
    *VAR_6 = -*VAR_6;
   }
  } else {
   if (VAR_11 > 0)
    FUNC_2(VAR_4 - VAR_3, VAR_5, VAR_6);
   else
    FUNC_2(VAR_4 + VAR_3, VAR_5, VAR_6);
  }
  return;
 }


 if (VAR_12 >= 0x7f800000) {
  *VAR_5 = VAR_4 - VAR_4;
  *VAR_6 = VAR_4 - VAR_4;
  return;
 }


 VAR_10 = FUNC_1(VAR_4, &VAR_9);
 FUNC_2(VAR_9, &VAR_8, &VAR_7);

 switch(VAR_10 & 3) {
 case 0:
  *VAR_5 = VAR_8;
  *VAR_6 = VAR_7;
  break;
 case 1:
  *VAR_5 = VAR_7;
  *VAR_6 = -VAR_8;
  break;
 case 2:
  *VAR_5 = -VAR_8;
  *VAR_6 = -VAR_7;
  break;
 default:
  *VAR_5 = -VAR_7;
  *VAR_6 = VAR_8;
 }
}
