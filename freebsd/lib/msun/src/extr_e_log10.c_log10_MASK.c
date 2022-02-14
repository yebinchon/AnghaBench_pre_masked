
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
 double VAR_5 ;
 double VAR_6 ;

double
FUNC_5(double VAR_7)
{
 double VAR_8,VAR_9,VAR_10,VAR_11,VAR_12,VAR_13,VAR_14,VAR_15,VAR_16,VAR_17;
 int32_t VAR_18,VAR_19,VAR_20;
 u_int32_t VAR_21;

 FUNC_0(VAR_20,VAR_21,VAR_7);

 VAR_19=0;
 if (VAR_20 < 0x00100000) {
     if (((VAR_20&0x7fffffff)|VAR_21)==0)
  return -VAR_4/VAR_5;
     if (VAR_20<0) return (VAR_7-VAR_7)/VAR_6;
     VAR_19 -= 54; VAR_7 *= VAR_4;
     FUNC_1(VAR_20,VAR_7);
 }
 if (VAR_20 >= 0x7ff00000) return VAR_7+VAR_7;
 if (VAR_20 == 0x3ff00000 && VAR_21 == 0)
     return VAR_6;
 VAR_19 += (VAR_20>>20)-1023;
 VAR_20 &= 0x000fffff;
 VAR_18 = (VAR_20+0x95f64)&0x100000;
 FUNC_2(VAR_7,VAR_20|(VAR_18^0x3ff00000));
 VAR_19 += (VAR_18>>20);
 VAR_16 = (double)VAR_19;
 VAR_8 = VAR_7 - 1.0;
 VAR_9 = 0.5*VAR_8*VAR_8;
 VAR_12 = FUNC_4(VAR_8);


 VAR_10 = VAR_8 - VAR_9;
 FUNC_3(VAR_10,0);
 VAR_11 = (VAR_8 - VAR_10) - VAR_9 + VAR_12;
 VAR_13 = VAR_10*VAR_0;
 VAR_17 = VAR_16*VAR_2;
 VAR_14 = VAR_16*VAR_3 + (VAR_11+VAR_10)*VAR_1 + VAR_11*VAR_0;







 VAR_15 = VAR_17 + VAR_13;
 VAR_14 += (VAR_17 - VAR_15) + VAR_13;
 VAR_13 = VAR_15;

 return VAR_14 + VAR_13;
}
