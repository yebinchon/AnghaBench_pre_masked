
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,int,double) ;
 int FUNC_1 (int,double) ;
 int FUNC_2 (double,int) ;
 int FUNC_3 (double,int ) ;
 double VAR_0 ;
 double VAR_1 ;
 double FUNC_4 (double) ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;

double
FUNC_5(double VAR_5)
{
 double VAR_6,VAR_7,VAR_8,VAR_9,VAR_10,VAR_11,VAR_12,VAR_13,VAR_14;
 int32_t VAR_15,VAR_16,VAR_17;
 u_int32_t VAR_18;

 FUNC_0(VAR_17,VAR_18,VAR_5);

 VAR_16=0;
 if (VAR_17 < 0x00100000) {
     if (((VAR_17&0x7fffffff)|VAR_18)==0)
  return -VAR_2/VAR_3;
     if (VAR_17<0) return (VAR_5-VAR_5)/VAR_4;
     VAR_16 -= 54; VAR_5 *= VAR_2;
     FUNC_1(VAR_17,VAR_5);
 }
 if (VAR_17 >= 0x7ff00000) return VAR_5+VAR_5;
 if (VAR_17 == 0x3ff00000 && VAR_18 == 0)
     return VAR_4;
 VAR_16 += (VAR_17>>20)-1023;
 VAR_17 &= 0x000fffff;
 VAR_15 = (VAR_17+0x95f64)&0x100000;
 FUNC_2(VAR_5,VAR_17|(VAR_15^0x3ff00000));
 VAR_16 += (VAR_15>>20);
 VAR_14 = (double)VAR_16;
 VAR_6 = VAR_5 - 1.0;
 VAR_7 = 0.5*VAR_6*VAR_6;
 VAR_10 = FUNC_4(VAR_6);
 VAR_8 = VAR_6 - VAR_7;
 FUNC_3(VAR_8,0);
 VAR_9 = (VAR_6 - VAR_8) - VAR_7 + VAR_10;
 VAR_11 = VAR_8*VAR_0;
 VAR_12 = (VAR_9+VAR_8)*VAR_1 + VAR_9*VAR_0;


 VAR_13 = VAR_14 + VAR_11;
 VAR_12 += (VAR_14 - VAR_13) + VAR_11;
 VAR_11 = VAR_13;

 return VAR_12 + VAR_11;
}
