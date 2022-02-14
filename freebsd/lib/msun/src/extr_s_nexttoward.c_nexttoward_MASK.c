
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exp; int manh; int manl; int sign; } ;
union IEEEl2bits {long double e; TYPE_1__ bits; } ;
typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,int,double) ;
 int FUNC_1 (double,int,int) ;
 int VAR_0 ;

double
FUNC_2(double VAR_1, long double VAR_2)
{
 union IEEEl2bits VAR_3;
 volatile double VAR_4;
 int32_t VAR_5,VAR_6;
 u_int32_t VAR_7;

 FUNC_0(VAR_5,VAR_7,VAR_1);
 VAR_6 = VAR_5&0x7fffffff;
 VAR_3.e = VAR_2;

 if(((VAR_6>=0x7ff00000)&&((VAR_6-0x7ff00000)|VAR_7)!=0) ||
     (VAR_3.bits.exp == 0x7fff &&
      ((VAR_3.bits.manh&~VAR_0)|VAR_3.bits.manl) != 0))
    return VAR_1+VAR_2;
 if(VAR_1==VAR_2) return (double)VAR_2;
 if(VAR_1==0.0) {
     FUNC_1(VAR_1,VAR_3.bits.sign<<31,1);
     VAR_4 = VAR_1*VAR_1;
     if(VAR_4==VAR_1) return VAR_4; else return VAR_1;
 }
 if(VAR_5>0.0 ^ VAR_1 < VAR_2) {
     if(VAR_7==0) VAR_5 -= 1;
     VAR_7 -= 1;
 } else {
     VAR_7 += 1;
     if(VAR_7==0) VAR_5 += 1;
 }
 VAR_6 = VAR_5&0x7ff00000;
 if(VAR_6>=0x7ff00000) return VAR_1+VAR_1;
 if(VAR_6<0x00100000) {
     VAR_4 = VAR_1*VAR_1;
     if(VAR_4!=VAR_1) {
         FUNC_1(VAR_1,VAR_5,VAR_7);
  return VAR_1;
     }
 }
 FUNC_1(VAR_1,VAR_5,VAR_7);
 return VAR_1;
}
