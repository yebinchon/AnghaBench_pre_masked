
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 int FUNC_1 (float,int) ;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;
 float VAR_4 ;
 float VAR_5 ;
 float VAR_6 ;
 float VAR_7 ;
 float FUNC_2 (float) ;

float
FUNC_3(float VAR_8)
{
 float VAR_9,VAR_10,VAR_11,VAR_12,VAR_13,VAR_14,VAR_15,VAR_16;
 int32_t VAR_17,VAR_18;
 FUNC_0(VAR_17,VAR_8);
 VAR_18 = VAR_17&0x7fffffff;
 if(VAR_18>=0x3f800000) {
     if(VAR_18==0x3f800000) {
  if(VAR_17>0) return 0.0;
  else return VAR_4+(float)2.0*VAR_6;
     }
     return (VAR_8-VAR_8)/(VAR_8-VAR_8);
 }
 if(VAR_18<0x3f000000) {
     if(VAR_18<=0x32800000) return VAR_5+VAR_6;
     VAR_9 = VAR_8*VAR_8;
     VAR_10 = VAR_9*(VAR_1+VAR_9*(VAR_2+VAR_9*VAR_3));
     VAR_11 = VAR_0+VAR_9*VAR_7;
     VAR_12 = VAR_10/VAR_11;
     return VAR_5 - (VAR_8 - (VAR_6-VAR_8*VAR_12));
 } else if (VAR_17<0) {
     VAR_9 = (VAR_0+VAR_8)*(float)0.5;
     VAR_10 = VAR_9*(VAR_1+VAR_9*(VAR_2+VAR_9*VAR_3));
     VAR_11 = VAR_0+VAR_9*VAR_7;
     VAR_14 = FUNC_2(VAR_9);
     VAR_12 = VAR_10/VAR_11;
     VAR_13 = VAR_12*VAR_14-VAR_6;
     return VAR_4 - (float)2.0*(VAR_14+VAR_13);
 } else {
     int32_t VAR_19;
     VAR_9 = (VAR_0-VAR_8)*(float)0.5;
     VAR_14 = FUNC_2(VAR_9);
     VAR_16 = VAR_14;
     FUNC_0(VAR_19,VAR_16);
     FUNC_1(VAR_16,VAR_19&0xfffff000);
     VAR_15 = (VAR_9-VAR_16*VAR_16)/(VAR_14+VAR_16);
     VAR_10 = VAR_9*(VAR_1+VAR_9*(VAR_2+VAR_9*VAR_3));
     VAR_11 = VAR_0+VAR_9*VAR_7;
     VAR_12 = VAR_10/VAR_11;
     VAR_13 = VAR_12*VAR_14+VAR_15;
     return (float)2.0*(VAR_16+VAR_13);
 }
}
