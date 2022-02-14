
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 float VAR_0 ;
 float* VAR_1 ;
 float* VAR_2 ;
 float* VAR_3 ;
 float* VAR_4 ;
 float* VAR_5 ;
 float* VAR_6 ;
 float* VAR_7 ;
 float* VAR_8 ;

__attribute__((used)) static __inline float
FUNC_1(float VAR_9)
{
 const float *VAR_10,*VAR_11;
 float VAR_12,VAR_13,VAR_14;
 int32_t VAR_15;
 FUNC_0(VAR_15,VAR_9);
 VAR_15 &= 0x7fffffff;
 if(VAR_15>=0x41000000) {VAR_10 = VAR_4; VAR_11= VAR_8;}
 else if(VAR_15>=0x409173eb){VAR_10 = VAR_3; VAR_11= VAR_7;}
 else if(VAR_15>=0x4036d917){VAR_10 = VAR_2; VAR_11= VAR_6;}
 else {VAR_10 = VAR_1; VAR_11= VAR_5;}
 VAR_12 = VAR_0/(VAR_9*VAR_9);
 VAR_13 = VAR_10[0]+VAR_12*(VAR_10[1]+VAR_12*(VAR_10[2]+VAR_12*(VAR_10[3]+VAR_12*(VAR_10[4]+VAR_12*VAR_10[5]))));
 VAR_14 = VAR_0+VAR_12*(VAR_11[0]+VAR_12*(VAR_11[1]+VAR_12*(VAR_11[2]+VAR_12*(VAR_11[3]+VAR_12*VAR_11[4]))));
 return VAR_0+ VAR_13/VAR_14;
}
