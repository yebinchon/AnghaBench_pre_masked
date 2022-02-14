
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;

float
FUNC_3(float VAR_4)
{
 float VAR_5,VAR_6;
 int32_t VAR_7,VAR_8;

 FUNC_0(VAR_7,VAR_4);
 VAR_8 = VAR_7&0x7fffffff;


 if(VAR_8>=0x7f800000) {
     if (VAR_7>=0) return VAR_1/VAR_4+VAR_1;
     else return VAR_1/VAR_4-VAR_1;
 }


 if (VAR_8 < 0x41100000) {
     if (VAR_8<0x39800000) {
  if(VAR_0+VAR_4>VAR_1) return VAR_4;
     }
     if (VAR_8>=0x3f800000) {
  VAR_5 = FUNC_1(VAR_3*FUNC_2(VAR_4));
  VAR_6 = VAR_1 - VAR_3/(VAR_5+VAR_3);
     } else {
         VAR_5 = FUNC_1(-VAR_3*FUNC_2(VAR_4));
         VAR_6= -VAR_5/(VAR_5+VAR_3);
     }

 } else {
     VAR_6 = VAR_1 - VAR_2;
 }
 return (VAR_7>=0)? VAR_6: -VAR_6;
}
