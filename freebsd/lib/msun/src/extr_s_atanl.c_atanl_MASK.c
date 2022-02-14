
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int manh; int manl; } ;
struct TYPE_3__ {int expsign; } ;
union IEEEl2bits {long double e; TYPE_2__ bits; TYPE_1__ xbits; } ;
typedef int int32_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long double FUNC_0 (long double) ;
 long double FUNC_1 (long double) ;
 long double* VAR_6 ;
 long double* VAR_7 ;
 long double FUNC_2 (long double) ;
 double VAR_8 ;
 double VAR_9 ;

long double
FUNC_3(long double VAR_10)
{
 union IEEEl2bits VAR_11;
 long double VAR_12,VAR_13,VAR_14,VAR_15;
 int VAR_16;
 int16_t VAR_17, VAR_18;
 int32_t VAR_19;

 VAR_11.e = VAR_10;
 VAR_17 = VAR_11.xbits.expsign;
 VAR_18 = VAR_17 & 0x7fff;
 if(VAR_18 >= VAR_0) {
     if(VAR_18 == VAR_2 + VAR_3 &&
        ((VAR_11.bits.manh&~VAR_4)|VAR_11.bits.manl)!=0)
  return VAR_10+VAR_10;
     if(VAR_17>0) return VAR_6[3]+VAR_7[3];
     else return -VAR_6[3]-VAR_7[3];
 }


 VAR_19 = (VAR_18 << 8) | ((VAR_11.bits.manh >> (VAR_5 - 9)) & 0xff);
 if (VAR_19 < ((VAR_2 - 2) << 8) + 0xc0) {
     if (VAR_18 < VAR_1) {
  if(VAR_8+VAR_10>VAR_9) return VAR_10;
     }
     VAR_16 = -1;
 } else {
 VAR_10 = FUNC_2(VAR_10);
 if (VAR_19 < (VAR_2 << 8) + 0x30) {
     if (VAR_19 < ((VAR_2 - 1) << 8) + 0x60) {
  VAR_16 = 0; VAR_10 = (2.0*VAR_10-VAR_9)/(2.0+VAR_10);
     } else {
  VAR_16 = 1; VAR_10 = (VAR_10-VAR_9)/(VAR_10+VAR_9);
     }
 } else {
     if (VAR_19 < ((VAR_2 + 1) << 8) + 0x38) {
  VAR_16 = 2; VAR_10 = (VAR_10-1.5)/(VAR_9+1.5*VAR_10);
     } else {
  VAR_16 = 3; VAR_10 = -1.0/VAR_10;
     }
 }}

 VAR_15 = VAR_10*VAR_10;
 VAR_12 = VAR_15*VAR_15;

 VAR_13 = VAR_15*FUNC_0(VAR_12);
 VAR_14 = VAR_12*FUNC_1(VAR_12);
 if (VAR_16<0) return VAR_10 - VAR_10*(VAR_13+VAR_14);
 else {
     VAR_15 = VAR_6[VAR_16] - ((VAR_10*(VAR_13+VAR_14) - VAR_7[VAR_16]) - VAR_10);
     return (VAR_17<0)? -VAR_15:VAR_15;
 }
}
