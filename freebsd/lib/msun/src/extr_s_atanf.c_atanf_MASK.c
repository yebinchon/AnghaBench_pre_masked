
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 float* VAR_0 ;
 float* VAR_1 ;
 float* VAR_2 ;
 float FUNC_1 (float) ;
 float VAR_3 ;
 float VAR_4 ;

float
FUNC_2(float VAR_5)
{
 float VAR_6,VAR_7,VAR_8,VAR_9;
 int32_t VAR_10,VAR_11,VAR_12;

 FUNC_0(VAR_11,VAR_5);
 VAR_10 = VAR_11&0x7fffffff;
 if(VAR_10>=0x4c800000) {
     if(VAR_10>0x7f800000)
  return VAR_5+VAR_5;
     if(VAR_11>0) return VAR_1[3]+*(volatile float *)&VAR_2[3];
     else return -VAR_1[3]-*(volatile float *)&VAR_2[3];
 } if (VAR_10 < 0x3ee00000) {
     if (VAR_10 < 0x39800000) {
  if(VAR_3+VAR_5>VAR_4) return VAR_5;
     }
     VAR_12 = -1;
 } else {
 VAR_5 = FUNC_1(VAR_5);
 if (VAR_10 < 0x3f980000) {
     if (VAR_10 < 0x3f300000) {
  VAR_12 = 0; VAR_5 = ((float)2.0*VAR_5-VAR_4)/((float)2.0+VAR_5);
     } else {
  VAR_12 = 1; VAR_5 = (VAR_5-VAR_4)/(VAR_5+VAR_4);
     }
 } else {
     if (VAR_10 < 0x401c0000) {
  VAR_12 = 2; VAR_5 = (VAR_5-(float)1.5)/(VAR_4+(float)1.5*VAR_5);
     } else {
  VAR_12 = 3; VAR_5 = -(float)1.0/VAR_5;
     }
 }}

 VAR_9 = VAR_5*VAR_5;
 VAR_6 = VAR_9*VAR_9;

 VAR_7 = VAR_9*(VAR_0[0]+VAR_6*(VAR_0[2]+VAR_6*VAR_0[4]));
 VAR_8 = VAR_6*(VAR_0[1]+VAR_6*VAR_0[3]);
 if (VAR_12<0) return VAR_5 - VAR_5*(VAR_7+VAR_8);
 else {
     VAR_9 = VAR_1[VAR_12] - ((VAR_5*(VAR_7+VAR_8) - VAR_2[VAR_12]) - VAR_5);
     return (VAR_11<0)? -VAR_9:VAR_9;
 }
}
