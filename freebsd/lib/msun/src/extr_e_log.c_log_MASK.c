
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,int,double) ;
 int FUNC_1 (int,double) ;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;
 int FUNC_2 (double,int) ;
 double VAR_7 ;
 double VAR_8 ;
 double VAR_9 ;
 double VAR_10 ;
 double VAR_11 ;

double
FUNC_3(double VAR_12)
{
 double VAR_13,VAR_14,VAR_15,VAR_16,VAR_17,VAR_18,VAR_19,VAR_20,VAR_21;
 int32_t VAR_22,VAR_23,VAR_24,VAR_25;
 u_int32_t VAR_26;

 FUNC_0(VAR_23,VAR_26,VAR_12);

 VAR_22=0;
 if (VAR_23 < 0x00100000) {
     if (((VAR_23&0x7fffffff)|VAR_26)==0)
  return -VAR_9/VAR_10;
     if (VAR_23<0) return (VAR_12-VAR_12)/VAR_11;
     VAR_22 -= 54; VAR_12 *= VAR_9;
     FUNC_1(VAR_23,VAR_12);
 }
 if (VAR_23 >= 0x7ff00000) return VAR_12+VAR_12;
 VAR_22 += (VAR_23>>20)-1023;
 VAR_23 &= 0x000fffff;
 VAR_24 = (VAR_23+0x95f64)&0x100000;
 FUNC_2(VAR_12,VAR_23|(VAR_24^0x3ff00000));
 VAR_22 += (VAR_24>>20);
 VAR_14 = VAR_12-1.0;
 if((0x000fffff&(2+VAR_23))<3) {
     if(VAR_14==VAR_11) {
  if(VAR_22==0) {
      return VAR_11;
  } else {
      VAR_21=(double)VAR_22;
      return VAR_21*VAR_7+VAR_21*VAR_8;
  }
     }
     VAR_17 = VAR_14*VAR_14*(0.5-0.33333333333333333*VAR_14);
     if(VAR_22==0) return VAR_14-VAR_17; else {VAR_21=(double)VAR_22;
           return VAR_21*VAR_7-((VAR_17-VAR_21*VAR_8)-VAR_14);}
 }
  VAR_15 = VAR_14/(2.0+VAR_14);
 VAR_21 = (double)VAR_22;
 VAR_16 = VAR_15*VAR_15;
 VAR_24 = VAR_23-0x6147a;
 VAR_18 = VAR_16*VAR_16;
 VAR_25 = 0x6b851-VAR_23;
 VAR_19= VAR_18*(VAR_1+VAR_18*(VAR_3+VAR_18*VAR_5));
 VAR_20= VAR_16*(VAR_0+VAR_18*(VAR_2+VAR_18*(VAR_4+VAR_18*VAR_6)));
 VAR_24 |= VAR_25;
 VAR_17 = VAR_20+VAR_19;
 if(VAR_24>0) {
     VAR_13=0.5*VAR_14*VAR_14;
     if(VAR_22==0) return VAR_14-(VAR_13-VAR_15*(VAR_13+VAR_17)); else
       return VAR_21*VAR_7-((VAR_13-(VAR_15*(VAR_13+VAR_17)+VAR_21*VAR_8))-VAR_14);
 } else {
     if(VAR_22==0) return VAR_14-VAR_15*(VAR_14-VAR_17); else
       return VAR_21*VAR_7-((VAR_15*(VAR_14-VAR_17)-VAR_21*VAR_8)-VAR_14);
 }
}
