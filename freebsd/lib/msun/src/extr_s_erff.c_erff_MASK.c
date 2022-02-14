
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,float) ;
 int FUNC_1 (float,int) ;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float FUNC_2 (float) ;
 float FUNC_3 (float) ;
 float VAR_3 ;
 float VAR_4 ;
 float VAR_5 ;
 float VAR_6 ;
 float VAR_7 ;
 float VAR_8 ;
 float VAR_9 ;
 float VAR_10 ;
 float VAR_11 ;
 float VAR_12 ;
 float VAR_13 ;
 float VAR_14 ;
 float VAR_15 ;
 float VAR_16 ;
 float VAR_17 ;
 float VAR_18 ;
 float VAR_19 ;
 float VAR_20 ;
 float VAR_21 ;
 float VAR_22 ;
 float VAR_23 ;
 float VAR_24 ;
 float VAR_25 ;
 float VAR_26 ;
 float VAR_27 ;
 float VAR_28 ;
 float VAR_29 ;
 float VAR_30 ;

float
FUNC_4(float VAR_31)
{
 int32_t VAR_32,VAR_33,VAR_34;
 float VAR_35,VAR_36,VAR_37,VAR_38,VAR_39,VAR_40,VAR_41,VAR_42;
 FUNC_0(VAR_32,VAR_31);
 VAR_33 = VAR_32&0x7fffffff;
 if(VAR_33>=0x7f800000) {
     VAR_34 = ((u_int32_t)VAR_32>>31)<<1;
     return (float)(1-VAR_34)+VAR_3/VAR_31;
 }

 if(VAR_33 < 0x3f580000) {
     if(VAR_33 < 0x38800000) {
         if (VAR_33 < 0x04000000)
      return (8*VAR_31+VAR_1*VAR_31)/8;
  return VAR_31 + VAR_0*VAR_31;
     }
     VAR_41 = VAR_31*VAR_31;
     VAR_42 = VAR_8+VAR_41*(VAR_9+VAR_41*VAR_10);
     VAR_39 = VAR_3+VAR_41*(VAR_14+VAR_41*(VAR_15+VAR_41*VAR_16));
     VAR_40 = VAR_42/VAR_39;
     return VAR_31 + VAR_31*VAR_40;
 }
 if(VAR_33 < 0x3fa00000) {
     VAR_39 = FUNC_3(VAR_31)-VAR_3;
     VAR_37 = VAR_4+VAR_39*(VAR_5+VAR_39*(VAR_6+VAR_39*VAR_7));
     VAR_38 = VAR_3+VAR_39*(VAR_11+VAR_39*(VAR_12+VAR_39*VAR_13));
     if(VAR_32>=0) return VAR_2 + VAR_37/VAR_38; else return -VAR_2 - VAR_37/VAR_38;
 }
 if (VAR_33 >= 0x40800000) {
     if(VAR_32>=0) return VAR_3-VAR_30; else return VAR_30-VAR_3;
 }
 VAR_31 = FUNC_3(VAR_31);
  VAR_39 = VAR_3/(VAR_31*VAR_31);
 if(VAR_33< 0x4036db8c) {
     VAR_35=VAR_17+VAR_39*(VAR_18+VAR_39*(VAR_19+VAR_39*VAR_20));
     VAR_36=VAR_3+VAR_39*(VAR_24+VAR_39*(VAR_25+VAR_39*VAR_26));
 } else {
     VAR_35=VAR_21+VAR_39*(VAR_22+VAR_39*VAR_23);
     VAR_36=VAR_3+VAR_39*(VAR_27+VAR_39*(VAR_28+VAR_39*VAR_29));
 }
 FUNC_1(VAR_41,VAR_32&0xffffe000);
 VAR_42 = FUNC_2(-VAR_41*VAR_41-0.5625F)*FUNC_2((VAR_41-VAR_31)*(VAR_41+VAR_31)+VAR_35/VAR_36);
 if(VAR_32>=0) return VAR_3-VAR_42/VAR_31; else return VAR_42/VAR_31-VAR_3;
}
