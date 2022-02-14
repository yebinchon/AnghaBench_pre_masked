
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
 float VAR_5 ;
 float VAR_6 ;

float
FUNC_3(float VAR_7)
{
 float VAR_8,VAR_9,VAR_10,VAR_11,VAR_12,VAR_13;
 int32_t VAR_14,VAR_15,VAR_16;

 FUNC_0(VAR_16,VAR_7);

 VAR_15=0;
 if (VAR_16 < 0x00800000) {
     if ((VAR_16&0x7fffffff)==0)
  return -VAR_4/VAR_5;
     if (VAR_16<0) return (VAR_7-VAR_7)/VAR_6;
     VAR_15 -= 25; VAR_7 *= VAR_4;
     FUNC_0(VAR_16,VAR_7);
 }
 if (VAR_16 >= 0x7f800000) return VAR_7+VAR_7;
 if (VAR_16 == 0x3f800000)
     return VAR_6;
 VAR_15 += (VAR_16>>23)-127;
 VAR_16 &= 0x007fffff;
 VAR_14 = (VAR_16+(0x4afb0d))&0x800000;
 FUNC_1(VAR_7,VAR_16|(VAR_14^0x3f800000));
 VAR_15 += (VAR_14>>23);
 VAR_13 = (float)VAR_15;
 VAR_8 = VAR_7 - (float)1.0;
 VAR_9 = (float)0.5*VAR_8*VAR_8;
 VAR_12 = FUNC_2(VAR_8);


 if (sizeof(float_t) > sizeof(float))
  return (VAR_12 - VAR_9 + VAR_8) * ((float_t)VAR_1 + VAR_0) +
      VAR_13 * ((float_t)VAR_3 + VAR_2);
 VAR_10 = VAR_8 - VAR_9;
 FUNC_0(VAR_16,VAR_10);
 FUNC_1(VAR_10,VAR_16&0xfffff000);
 VAR_11 = (VAR_8 - VAR_10) - VAR_9 + VAR_12;
 return VAR_13*VAR_3 + (VAR_11+VAR_10)*VAR_1 + VAR_11*VAR_0 + VAR_10*VAR_0 +
     VAR_13*VAR_2;
}
