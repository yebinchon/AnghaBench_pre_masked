
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ exp; int manh; int manl; int sign; } ;
union IEEEl2bits {long double e; TYPE_1__ bits; } ;
typedef int int32_t ;


 int FUNC_0 (int,float) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (float,int) ;

float
FUNC_2(float VAR_2, long double VAR_3)
{
 union IEEEl2bits VAR_4;
 volatile float VAR_5;
 int32_t VAR_6,VAR_7;

 FUNC_0(VAR_6,VAR_2);
 VAR_7 = VAR_6&0x7fffffff;
 VAR_4.e = VAR_3;

 if((VAR_7>0x7f800000) ||
    (VAR_4.bits.exp == VAR_0 &&
     ((VAR_4.bits.manh&~VAR_1)|VAR_4.bits.manl) != 0))
    return VAR_2+VAR_3;
 if(VAR_2==VAR_3) return (float)VAR_3;
 if(VAR_7==0) {
     FUNC_1(VAR_2,(VAR_4.bits.sign<<31)|1);
     VAR_5 = VAR_2*VAR_2;
     if(VAR_5==VAR_2) return VAR_5; else return VAR_2;
 }
 if(VAR_6>=0 ^ VAR_2 < VAR_3)
     VAR_6 -= 1;
 else
     VAR_6 += 1;
 VAR_7 = VAR_6&0x7f800000;
 if(VAR_7>=0x7f800000) return VAR_2+VAR_2;
 if(VAR_7<0x00800000) {
     VAR_5 = VAR_2*VAR_2;
     if(VAR_5!=VAR_2) {
         FUNC_1(VAR_2,VAR_6);
  return VAR_2;
     }
 }
 FUNC_1(VAR_2,VAR_6);
 return VAR_2;
}
