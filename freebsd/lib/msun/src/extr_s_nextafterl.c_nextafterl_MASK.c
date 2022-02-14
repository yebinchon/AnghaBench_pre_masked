
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exp; int manh; int manl; int sign; } ;
union IEEEl2bits {long double e; TYPE_1__ bits; } ;


 int VAR_0 ;
 int FUNC_0 (union IEEEl2bits) ;

long double
FUNC_1(long double VAR_1, long double VAR_2)
{
 volatile long double VAR_3;
 union IEEEl2bits VAR_4, VAR_5;

 VAR_4.e = VAR_1;
 VAR_5.e = VAR_2;

 if ((VAR_4.bits.exp == 0x7fff &&
      ((VAR_4.bits.manh&~VAR_0)|VAR_4.bits.manl) != 0) ||
     (VAR_5.bits.exp == 0x7fff &&
      ((VAR_5.bits.manh&~VAR_0)|VAR_5.bits.manl) != 0))
    return VAR_1+VAR_2;
 if(VAR_1==VAR_2) return VAR_2;
 if(VAR_1==0.0) {
     VAR_4.bits.manh = 0;
     VAR_4.bits.manl = 1;
     VAR_4.bits.sign = VAR_5.bits.sign;
     VAR_3 = VAR_4.e*VAR_4.e;
     if(VAR_3==VAR_4.e) return VAR_3; else return VAR_4.e;
 }
 if(VAR_1>0.0 ^ VAR_1<VAR_2) {
     if(VAR_4.bits.manl==0) {
  if ((VAR_4.bits.manh&~VAR_0)==0)
      VAR_4.bits.exp -= 1;
  VAR_4.bits.manh = (VAR_4.bits.manh - 1) | (VAR_4.bits.manh & VAR_0);
     }
     VAR_4.bits.manl -= 1;
 } else {
     VAR_4.bits.manl += 1;
     if(VAR_4.bits.manl==0) {
  VAR_4.bits.manh = (VAR_4.bits.manh + 1) | (VAR_4.bits.manh & VAR_0);
  if ((VAR_4.bits.manh&~VAR_0)==0)
      VAR_4.bits.exp += 1;
     }
 }
 if(VAR_4.bits.exp==0x7fff) return VAR_1+VAR_1;
 if(VAR_4.bits.exp==0) {
     FUNC_0(VAR_4);
     VAR_3 = VAR_4.e * VAR_4.e;
     if(VAR_3!=VAR_4.e)
  return VAR_4.e;
 }
 return VAR_4.e;
}
