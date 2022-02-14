
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,int,double) ;
 double FUNC_1 (double) ;
 double VAR_0 ;
 double FUNC_2 (double) ;
 double VAR_1 ;
 double FUNC_3 (double) ;

double
FUNC_4(double VAR_2)
{
 double VAR_3;
 int32_t VAR_4;
 u_int32_t VAR_5;
 FUNC_0(VAR_4,VAR_5,VAR_2);
 if(VAR_4<0x3ff00000) {
     return (VAR_2-VAR_2)/(VAR_2-VAR_2);
 } else if(VAR_4 >=0x41b00000) {
     if(VAR_4 >=0x7ff00000) {
         return VAR_2+VAR_2;
     } else
  return FUNC_1(VAR_2)+VAR_0;
 } else if(((VAR_4-0x3ff00000)|VAR_5)==0) {
     return 0.0;
 } else if (VAR_4 > 0x40000000) {
     VAR_3=VAR_2*VAR_2;
     return FUNC_1(2.0*VAR_2-VAR_1/(VAR_2+FUNC_3(VAR_3-VAR_1)));
 } else {
     VAR_3 = VAR_2-VAR_1;
     return FUNC_2(VAR_3+FUNC_3(2.0*VAR_3+VAR_3*VAR_3));
 }
}
