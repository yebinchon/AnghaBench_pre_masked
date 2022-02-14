
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
 long double VAR_3 ;
 long double VAR_4 ;
 long double VAR_5 ;
 double VAR_6 ;
 long double FUNC_2 (long double) ;

long double
FUNC_3(long double VAR_7)
{
 union IEEEl2bits VAR_8;
 long double VAR_9,VAR_10,VAR_11,VAR_12,VAR_13,VAR_14,VAR_15,VAR_16;
 int16_t VAR_17, VAR_18;
 VAR_8.e = VAR_7;
 VAR_17 = VAR_8.xbits.expsign;
 VAR_18 = VAR_17 & 0x7fff;
 if(VAR_18 >= VAR_1) {
     if(VAR_18==VAR_1 && ((VAR_8.bits.manh&~VAR_2)|VAR_8.bits.manl)==0) {
  if (VAR_17>0) return 0.0;
  else return VAR_4+2.0*VAR_6;
     }
     return (VAR_7-VAR_7)/(VAR_7-VAR_7);
 }
 if(VAR_18<VAR_1-1) {
     if(VAR_18<VAR_0) return VAR_5+VAR_6;
     VAR_9 = VAR_7*VAR_7;
     VAR_10 = FUNC_0(VAR_9);
     VAR_11 = FUNC_1(VAR_9);
     VAR_12 = VAR_10/VAR_11;
     return VAR_5 - (VAR_7 - (VAR_6-VAR_7*VAR_12));
 } else if (VAR_17<0) {
     VAR_9 = (VAR_3+VAR_7)*0.5;
     VAR_10 = FUNC_0(VAR_9);
     VAR_11 = FUNC_1(VAR_9);
     VAR_14 = FUNC_2(VAR_9);
     VAR_12 = VAR_10/VAR_11;
     VAR_13 = VAR_12*VAR_14-VAR_6;
     return VAR_4 - 2.0*(VAR_14+VAR_13);
 } else {
     VAR_9 = (VAR_3-VAR_7)*0.5;
     VAR_14 = FUNC_2(VAR_9);
     VAR_8.e = VAR_14;
     VAR_8.bits.manl = 0;
     VAR_16 = VAR_8.e;
     VAR_15 = (VAR_9-VAR_16*VAR_16)/(VAR_14+VAR_16);
     VAR_10 = FUNC_0(VAR_9);
     VAR_11 = FUNC_1(VAR_9);
     VAR_12 = VAR_10/VAR_11;
     VAR_13 = VAR_12*VAR_14+VAR_15;
     return 2.0*(VAR_16+VAR_13);
 }
}
