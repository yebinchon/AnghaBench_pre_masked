
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;
 float VAR_0 ;
 float FUNC_3 (float) ;
 float VAR_1 ;

float
FUNC_4(float VAR_2)
{
 float VAR_3;
 int32_t VAR_4;
 FUNC_0(VAR_4,VAR_2);
 if(VAR_4<0x3f800000) {
     return (VAR_2-VAR_2)/(VAR_2-VAR_2);
 } else if(VAR_4 >=0x4d800000) {
     if(VAR_4 >=0x7f800000) {
         return VAR_2+VAR_2;
     } else
  return FUNC_1(VAR_2)+VAR_0;
 } else if (VAR_4==0x3f800000) {
     return 0.0;
 } else if (VAR_4 > 0x40000000) {
     VAR_3=VAR_2*VAR_2;
     return FUNC_1((float)2.0*VAR_2-VAR_1/(VAR_2+FUNC_2(VAR_3-VAR_1)));
 } else {
     VAR_3 = VAR_2-VAR_1;
     return FUNC_3(VAR_3+FUNC_2((float)2.0*VAR_3+VAR_3*VAR_3));
 }
}
