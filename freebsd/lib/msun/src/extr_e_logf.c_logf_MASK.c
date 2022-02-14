
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;
 int FUNC_1 (float,int) ;
 float VAR_4 ;
 float VAR_5 ;
 float VAR_6 ;
 float VAR_7 ;
 float VAR_8 ;

float
FUNC_2(float VAR_9)
{
 float VAR_10,VAR_11,VAR_12,VAR_13,VAR_14,VAR_15,VAR_16,VAR_17,VAR_18;
 int32_t VAR_19,VAR_20,VAR_21,VAR_22;

 FUNC_0(VAR_20,VAR_9);

 VAR_19=0;
 if (VAR_20 < 0x00800000) {
     if ((VAR_20&0x7fffffff)==0)
  return -VAR_6/VAR_7;
     if (VAR_20<0) return (VAR_9-VAR_9)/VAR_8;
     VAR_19 -= 25; VAR_9 *= VAR_6;
     FUNC_0(VAR_20,VAR_9);
 }
 if (VAR_20 >= 0x7f800000) return VAR_9+VAR_9;
 VAR_19 += (VAR_20>>23)-127;
 VAR_20 &= 0x007fffff;
 VAR_21 = (VAR_20+(0x95f64<<3))&0x800000;
 FUNC_1(VAR_9,VAR_20|(VAR_21^0x3f800000));
 VAR_19 += (VAR_21>>23);
 VAR_11 = VAR_9-(float)1.0;
 if((0x007fffff&(0x8000+VAR_20))<0xc000) {
     if(VAR_11==VAR_8) {
  if(VAR_19==0) {
      return VAR_8;
  } else {
      VAR_18=(float)VAR_19;
      return VAR_18*VAR_4+VAR_18*VAR_5;
  }
     }
     VAR_14 = VAR_11*VAR_11*((float)0.5-(float)0.33333333333333333*VAR_11);
     if(VAR_19==0) return VAR_11-VAR_14; else {VAR_18=(float)VAR_19;
           return VAR_18*VAR_4-((VAR_14-VAR_18*VAR_5)-VAR_11);}
 }
  VAR_12 = VAR_11/((float)2.0+VAR_11);
 VAR_18 = (float)VAR_19;
 VAR_13 = VAR_12*VAR_12;
 VAR_21 = VAR_20-(0x6147a<<3);
 VAR_15 = VAR_13*VAR_13;
 VAR_22 = (0x6b851<<3)-VAR_20;
 VAR_16= VAR_15*(VAR_1+VAR_15*VAR_3);
 VAR_17= VAR_13*(VAR_0+VAR_15*VAR_2);
 VAR_21 |= VAR_22;
 VAR_14 = VAR_17+VAR_16;
 if(VAR_21>0) {
     VAR_10=(float)0.5*VAR_11*VAR_11;
     if(VAR_19==0) return VAR_11-(VAR_10-VAR_12*(VAR_10+VAR_14)); else
       return VAR_18*VAR_4-((VAR_10-(VAR_12*(VAR_10+VAR_14)+VAR_18*VAR_5))-VAR_11);
 } else {
     if(VAR_19==0) return VAR_11-VAR_12*(VAR_11-VAR_14); else
       return VAR_18*VAR_4-((VAR_12*(VAR_11-VAR_14)-VAR_18*VAR_5)-VAR_11);
 }
}
