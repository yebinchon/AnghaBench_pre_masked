
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 float FUNC_1 (float) ;
 float VAR_0 ;

float
FUNC_2(float VAR_1)
{
 int32_t VAR_2;
 FUNC_0(VAR_2,VAR_1);
 VAR_2 &= 0x7fffffff;
 if(VAR_2==0) return (float)-1.0/FUNC_1(VAR_1);
 if(VAR_2>=0x7f800000) return VAR_1*VAR_1;
 if(VAR_2<0x00800000) {
  VAR_1 *= VAR_0;
  FUNC_0(VAR_2,VAR_1);
  VAR_2 &= 0x7fffffff;
  return (float) ((VAR_2>>23)-127-25);
 } else
  return (float) ((VAR_2>>23)-127);
}
