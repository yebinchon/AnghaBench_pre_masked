
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,int,double) ;
 int FUNC_1 (double,int,int) ;

double
FUNC_2(double VAR_0, double VAR_1)
{
 volatile double VAR_2;
 int32_t VAR_3,VAR_4,VAR_5,VAR_6;
 u_int32_t VAR_7,VAR_8;

 FUNC_0(VAR_3,VAR_7,VAR_0);
 FUNC_0(VAR_4,VAR_8,VAR_1);
 VAR_5 = VAR_3&0x7fffffff;
 VAR_6 = VAR_4&0x7fffffff;

 if(((VAR_5>=0x7ff00000)&&((VAR_5-0x7ff00000)|VAR_7)!=0) ||
    ((VAR_6>=0x7ff00000)&&((VAR_6-0x7ff00000)|VAR_8)!=0))
    return VAR_0+VAR_1;
 if(VAR_0==VAR_1) return VAR_1;
 if((VAR_5|VAR_7)==0) {
     FUNC_1(VAR_0,VAR_4&0x80000000,1);
     VAR_2 = VAR_0*VAR_0;
     if(VAR_2==VAR_0) return VAR_2; else return VAR_0;
 }
 if(VAR_3>=0) {
     if(VAR_3>VAR_4||((VAR_3==VAR_4)&&(VAR_7>VAR_8))) {
  if(VAR_7==0) VAR_3 -= 1;
  VAR_7 -= 1;
     } else {
  VAR_7 += 1;
  if(VAR_7==0) VAR_3 += 1;
     }
 } else {
     if(VAR_4>=0||VAR_3>VAR_4||((VAR_3==VAR_4)&&(VAR_7>VAR_8))){
  if(VAR_7==0) VAR_3 -= 1;
  VAR_7 -= 1;
     } else {
  VAR_7 += 1;
  if(VAR_7==0) VAR_3 += 1;
     }
 }
 VAR_4 = VAR_3&0x7ff00000;
 if(VAR_4>=0x7ff00000) return VAR_0+VAR_0;
 if(VAR_4<0x00100000) {
     VAR_2 = VAR_0*VAR_0;
     if(VAR_2!=VAR_0) {
         FUNC_1(VAR_1,VAR_3,VAR_7);
  return VAR_1;
     }
 }
 FUNC_1(VAR_0,VAR_3,VAR_7);
 return VAR_0;
}
