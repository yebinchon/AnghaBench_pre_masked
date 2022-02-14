
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,double) ;
 int FUNC_1 (scalar_t__,double) ;
 double* VAR_0 ;
 double* VAR_1 ;
 double* VAR_2 ;
 double FUNC_2 (double) ;
 double VAR_3 ;
 double VAR_4 ;

double
FUNC_3(double VAR_5)
{
 double VAR_6,VAR_7,VAR_8,VAR_9;
 int32_t VAR_10,VAR_11,VAR_12;

 FUNC_0(VAR_11,VAR_5);
 VAR_10 = VAR_11&0x7fffffff;
 if(VAR_10>=0x44100000) {
     u_int32_t VAR_13;
     FUNC_1(VAR_13,VAR_5);
     if(VAR_10>0x7ff00000||
  (VAR_10==0x7ff00000&&(VAR_13!=0)))
  return VAR_5+VAR_5;
     if(VAR_11>0) return VAR_1[3]+*(volatile double *)&VAR_2[3];
     else return -VAR_1[3]-*(volatile double *)&VAR_2[3];
 } if (VAR_10 < 0x3fdc0000) {
     if (VAR_10 < 0x3e400000) {
  if(VAR_3+VAR_5>VAR_4) return VAR_5;
     }
     VAR_12 = -1;
 } else {
 VAR_5 = FUNC_2(VAR_5);
 if (VAR_10 < 0x3ff30000) {
     if (VAR_10 < 0x3fe60000) {
  VAR_12 = 0; VAR_5 = (2.0*VAR_5-VAR_4)/(2.0+VAR_5);
     } else {
  VAR_12 = 1; VAR_5 = (VAR_5-VAR_4)/(VAR_5+VAR_4);
     }
 } else {
     if (VAR_10 < 0x40038000) {
  VAR_12 = 2; VAR_5 = (VAR_5-1.5)/(VAR_4+1.5*VAR_5);
     } else {
  VAR_12 = 3; VAR_5 = -1.0/VAR_5;
     }
 }}

 VAR_9 = VAR_5*VAR_5;
 VAR_6 = VAR_9*VAR_9;

 VAR_7 = VAR_9*(VAR_0[0]+VAR_6*(VAR_0[2]+VAR_6*(VAR_0[4]+VAR_6*(VAR_0[6]+VAR_6*(VAR_0[8]+VAR_6*VAR_0[10])))));
 VAR_8 = VAR_6*(VAR_0[1]+VAR_6*(VAR_0[3]+VAR_6*(VAR_0[5]+VAR_6*(VAR_0[7]+VAR_6*VAR_0[9]))));
 if (VAR_12<0) return VAR_5 - VAR_5*(VAR_7+VAR_8);
 else {
     VAR_9 = VAR_1[VAR_12] - ((VAR_5*(VAR_7+VAR_8) - VAR_2[VAR_12]) - VAR_5);
     return (VAR_11<0)? -VAR_9:VAR_9;
 }
}
