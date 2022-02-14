
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,float) ;
 int FUNC_1 (float,int) ;
 float VAR_0 ;
 float FUNC_2 (float) ;
 float FUNC_3 (float) ;
 float VAR_1 ;
 float VAR_2 ;
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
 int32_t VAR_32,VAR_33;
 float VAR_34,VAR_35,VAR_36,VAR_37,VAR_38,VAR_39,VAR_40,VAR_41;
 FUNC_0(VAR_32,VAR_31);
 VAR_33 = VAR_32&0x7fffffff;
 if(VAR_33>=0x7f800000) {

     return (float)(((u_int32_t)VAR_32>>31)<<1)+VAR_2/VAR_31;
 }

 if(VAR_33 < 0x3f580000) {
     if(VAR_33 < 0x33800000)
  return VAR_2-VAR_31;
     VAR_40 = VAR_31*VAR_31;
     VAR_41 = VAR_7+VAR_40*(VAR_8+VAR_40*VAR_9);
     VAR_38 = VAR_2+VAR_40*(VAR_13+VAR_40*(VAR_14+VAR_40*VAR_15));
     VAR_39 = VAR_41/VAR_38;
     if(VAR_32 < 0x3e800000) {
  return VAR_2-(VAR_31+VAR_31*VAR_39);
     } else {
  VAR_41 = VAR_31*VAR_39;
  VAR_41 += (VAR_31-VAR_1);
         return VAR_1 - VAR_41 ;
     }
 }
 if(VAR_33 < 0x3fa00000) {
     VAR_38 = FUNC_3(VAR_31)-VAR_2;
     VAR_36 = VAR_3+VAR_38*(VAR_4+VAR_38*(VAR_5+VAR_38*VAR_6));
     VAR_37 = VAR_2+VAR_38*(VAR_10+VAR_38*(VAR_11+VAR_38*VAR_12));
     if(VAR_32>=0) {
         VAR_40 = VAR_2-VAR_0; return VAR_40 - VAR_36/VAR_37;
     } else {
  VAR_40 = VAR_0+VAR_36/VAR_37; return VAR_2+VAR_40;
     }
 }
 if (VAR_33 < 0x41300000) {
     VAR_31 = FUNC_3(VAR_31);
      VAR_38 = VAR_2/(VAR_31*VAR_31);
     if(VAR_33< 0x4036db8c) {
  VAR_34=VAR_16+VAR_38*(VAR_17+VAR_38*(VAR_18+VAR_38*VAR_19));
  VAR_35=VAR_2+VAR_38*(VAR_23+VAR_38*(VAR_24+VAR_38*VAR_25));
     } else {
  if(VAR_32<0&&VAR_33>=0x40a00000) return VAR_30-VAR_29;
  VAR_34=VAR_20+VAR_38*(VAR_21+VAR_38*VAR_22);
  VAR_35=VAR_2+VAR_38*(VAR_26+VAR_38*(VAR_27+VAR_38*VAR_28));
     }
     FUNC_1(VAR_40,VAR_32&0xffffe000);
     VAR_41 = FUNC_2(-VAR_40*VAR_40-0.5625F)*FUNC_2((VAR_40-VAR_31)*(VAR_40+VAR_31)+VAR_34/VAR_35);
     if(VAR_32>0) return VAR_41/VAR_31; else return VAR_30-VAR_41/VAR_31;
 } else {
     if(VAR_32>0) return VAR_29*VAR_29; else return VAR_30-VAR_29;
 }
}
