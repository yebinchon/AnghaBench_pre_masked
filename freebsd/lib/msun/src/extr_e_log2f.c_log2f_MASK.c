
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef float float_t ;


 int FUNC_0 (int,float) ;
 int FUNC_1 (float,int) ;
 float VAR_0 ;
 float VAR_1 ;
 float FUNC_2 (float) ;
 float VAR_2 ;
 float VAR_3 ;
 float VAR_4 ;

float
FUNC_3(float VAR_5)
{
 float VAR_6,VAR_7,VAR_8,VAR_9,VAR_10,VAR_11;
 int32_t VAR_12,VAR_13,VAR_14;

 FUNC_0(VAR_14,VAR_5);

 VAR_13=0;
 if (VAR_14 < 0x00800000) {
     if ((VAR_14&0x7fffffff)==0)
  return -VAR_2/VAR_3;
     if (VAR_14<0) return (VAR_5-VAR_5)/VAR_4;
     VAR_13 -= 25; VAR_5 *= VAR_2;
     FUNC_0(VAR_14,VAR_5);
 }
 if (VAR_14 >= 0x7f800000) return VAR_5+VAR_5;
 if (VAR_14 == 0x3f800000)
     return VAR_4;
 VAR_13 += (VAR_14>>23)-127;
 VAR_14 &= 0x007fffff;
 VAR_12 = (VAR_14+(0x4afb0d))&0x800000;
 FUNC_1(VAR_5,VAR_14|(VAR_12^0x3f800000));
 VAR_13 += (VAR_12>>23);
 VAR_11 = (float)VAR_13;
 VAR_6 = VAR_5 - (float)1.0;
 VAR_7 = (float)0.5*VAR_6*VAR_6;
 VAR_10 = FUNC_2(VAR_6);
 if (sizeof(float_t) > sizeof(float))
  return (VAR_10 - VAR_7 + VAR_6) * ((float_t)VAR_1 + VAR_0) + VAR_11;

 VAR_8 = VAR_6 - VAR_7;
 FUNC_0(VAR_14,VAR_8);
 FUNC_1(VAR_8,VAR_14&0xfffff000);
 VAR_9 = (VAR_6 - VAR_8) - VAR_7 + VAR_10;
 return (VAR_9+VAR_8)*VAR_1 + VAR_9*VAR_0 + VAR_8*VAR_0 + VAR_11;
}
