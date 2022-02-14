
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int manl; } ;
union IEEEl2bits {long double e; TYPE_1__ bits; } ;
struct dd {int lo; long double hi; } ;


 int VAR_0 ;
 struct dd FUNC_0 (long double,long double) ;
 long double FUNC_1 (long double,int) ;

__attribute__((used)) static inline long double
FUNC_2(long double VAR_1, long double VAR_2)
{
 struct dd VAR_3;
 union IEEEl2bits VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3.lo != 0) {
  VAR_4.e = VAR_3.hi;
  if ((VAR_4.bits.manl & 1) == 0)
   VAR_3.hi = FUNC_1(VAR_3.hi, VAR_0 * VAR_3.lo);
 }
 return (VAR_3.hi);
}
