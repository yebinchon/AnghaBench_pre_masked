
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,float) ;
 int FUNC_1 (float,int) ;
 float VAR_0 ;

float
FUNC_2(float VAR_1, float *VAR_2)
{
 int32_t VAR_3,VAR_4;
 u_int32_t VAR_5;
 FUNC_0(VAR_3,VAR_1);
 VAR_4 = ((VAR_3>>23)&0xff)-0x7f;
 if(VAR_4<23) {
     if(VAR_4<0) {
         FUNC_1(*VAR_2,VAR_3&0x80000000);
  return VAR_1;
     } else {
  VAR_5 = (0x007fffff)>>VAR_4;
  if((VAR_3&VAR_5)==0) {
      u_int32_t VAR_6;
      *VAR_2 = VAR_1;
      FUNC_0(VAR_6,VAR_1);
      FUNC_1(VAR_1,VAR_6&0x80000000);
      return VAR_1;
  } else {
      FUNC_1(*VAR_2,VAR_3&(~VAR_5));
      return VAR_1 - *VAR_2;
  }
     }
 } else {
     u_int32_t VAR_7;
     *VAR_2 = VAR_1*VAR_0;
     if (VAR_1 != VAR_1)
  return VAR_1;
     FUNC_0(VAR_7,VAR_1);
     FUNC_1(VAR_1,VAR_7&0x80000000);
     return VAR_1;
 }
}
