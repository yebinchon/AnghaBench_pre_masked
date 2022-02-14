
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int manh; int manl; } ;
struct TYPE_3__ {int expsign; } ;
union IEEEl2bits {long double e; TYPE_2__ bits; TYPE_1__ xbits; } ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long double FUNC_0 (long double) ;
 long double FUNC_1 (long double) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (long double) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 long double VAR_6 ;
 long double VAR_7 ;
 double VAR_8 ;
 long double FUNC_3 (long double) ;

long double
FUNC_4(long double VAR_9)
{
 union IEEEl2bits VAR_10;
 long double VAR_11=0.0,VAR_12,VAR_13,VAR_14,VAR_15,VAR_16,VAR_17;
 int16_t VAR_18, VAR_19;
 VAR_10.e = VAR_9;
 VAR_18 = VAR_10.xbits.expsign;
 VAR_19 = VAR_18 & 0x7fff;
 if(VAR_19 >= VAR_1) {
  if(VAR_19==VAR_1 && ((VAR_10.bits.manh&~VAR_2)|VAR_10.bits.manl)==0)

      return VAR_9*VAR_6+VAR_9*VAR_7;
     return (VAR_9-VAR_9)/(VAR_9-VAR_9);
 } else if (VAR_19<VAR_1-1) {
     if(VAR_19<VAR_0) {
  if(VAR_4+VAR_9>VAR_5) return VAR_9;
     }
     VAR_11 = VAR_9*VAR_9;
     VAR_13 = FUNC_0(VAR_11);
     VAR_14 = FUNC_1(VAR_11);
     VAR_12 = VAR_13/VAR_14;
     return VAR_9+VAR_9*VAR_12;
 }

 VAR_12 = VAR_5-FUNC_2(VAR_9);
 VAR_11 = VAR_12*0.5;
 VAR_13 = FUNC_0(VAR_11);
 VAR_14 = FUNC_1(VAR_11);
 VAR_17 = FUNC_3(VAR_11);
 if(VAR_10.bits.manh>=VAR_3) {
     VAR_12 = VAR_13/VAR_14;
     VAR_11 = VAR_6-(2.0*(VAR_17+VAR_17*VAR_12)-VAR_7);
 } else {
     VAR_10.e = VAR_17;
     VAR_10.bits.manl = 0;
     VAR_12 = VAR_10.e;
     VAR_15 = (VAR_11-VAR_12*VAR_12)/(VAR_17+VAR_12);
     VAR_16 = VAR_13/VAR_14;
     VAR_13 = 2.0*VAR_17*VAR_16-(VAR_7-2.0*VAR_15);
     VAR_14 = VAR_8-2.0*VAR_12;
     VAR_11 = VAR_8-(VAR_13-VAR_14);
 }
 if(VAR_18>0) return VAR_11; else return -VAR_11;
}
