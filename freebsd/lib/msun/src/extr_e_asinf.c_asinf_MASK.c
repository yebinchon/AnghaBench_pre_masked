
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 float FUNC_1 (float) ;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;
 float VAR_4 ;
 float VAR_5 ;
 float VAR_6 ;
 double FUNC_2 (float) ;

float
FUNC_3(float VAR_7)
{
 double VAR_8;
 float VAR_9,VAR_10,VAR_11,VAR_12;
 int32_t VAR_13,VAR_14;
 FUNC_0(VAR_13,VAR_7);
 VAR_14 = VAR_13&0x7fffffff;
 if(VAR_14>=0x3f800000) {
     if(VAR_14==0x3f800000)
  return VAR_7*VAR_5;
     return (VAR_7-VAR_7)/(VAR_7-VAR_7);
 } else if (VAR_14<0x3f000000) {
     if(VAR_14<0x39800000) {
  if(VAR_0+VAR_7>VAR_1) return VAR_7;
     }
     VAR_9 = VAR_7*VAR_7;
     VAR_11 = VAR_9*(VAR_2+VAR_9*(VAR_3+VAR_9*VAR_4));
     VAR_12 = VAR_1+VAR_9*VAR_6;
     VAR_10 = VAR_11/VAR_12;
     return VAR_7+VAR_7*VAR_10;
 }

 VAR_10 = VAR_1-FUNC_1(VAR_7);
 VAR_9 = VAR_10*(float)0.5;
 VAR_11 = VAR_9*(VAR_2+VAR_9*(VAR_3+VAR_9*VAR_4));
 VAR_12 = VAR_1+VAR_9*VAR_6;
 VAR_8 = FUNC_2(VAR_9);
 VAR_10 = VAR_11/VAR_12;
 VAR_9 = VAR_5-2.0*(VAR_8+VAR_8*VAR_10);
 if(VAR_13>0) return VAR_9; else return -VAR_9;
}
