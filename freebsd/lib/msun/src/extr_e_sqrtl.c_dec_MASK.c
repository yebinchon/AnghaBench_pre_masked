
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int manh; int exp; int manl; } ;
union IEEEl2bits {long double e; TYPE_1__ bits; } ;


 int VAR_0 ;

__attribute__((used)) static inline long double
FUNC_0(long double VAR_1)
{
 union IEEEl2bits VAR_2;

 VAR_2.e = VAR_1;
 if (VAR_2.bits.manl-- == 0) {
  if (VAR_2.bits.manh-- == VAR_0) {
   VAR_2.bits.exp--;
   VAR_2.bits.manh |= VAR_0;
  }
 }
 return (VAR_2.e);
}
