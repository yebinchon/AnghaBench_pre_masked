
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,double) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;

double
FUNC_3(double VAR_4)
{
 double VAR_5,VAR_6;
 int32_t VAR_7,VAR_8;

 FUNC_0(VAR_7,VAR_4);
 VAR_8 = VAR_7&0x7fffffff;


 if(VAR_8>=0x7ff00000) {
     if (VAR_7>=0) return VAR_1/VAR_4+VAR_1;
     else return VAR_1/VAR_4-VAR_1;
 }


 if (VAR_8 < 0x40360000) {
     if (VAR_8<0x3e300000) {
  if(VAR_0+VAR_4>VAR_1) return VAR_4;
     }
     if (VAR_8>=0x3ff00000) {
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
