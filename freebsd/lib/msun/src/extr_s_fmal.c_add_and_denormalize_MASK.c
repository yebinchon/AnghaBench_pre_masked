
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exp; int manl; } ;
union IEEEl2bits {TYPE_1__ bits; int e; } ;
struct dd {int lo; int hi; } ;


 int VAR_0 ;
 struct dd FUNC_0 (long double,long double) ;
 long double FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static inline long double
FUNC_3(long double VAR_1, long double VAR_2, int VAR_3)
{
 struct dd VAR_4;
 int VAR_5;
 union IEEEl2bits VAR_6;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4.lo != 0) {
  VAR_6.e = VAR_4.hi;
  VAR_5 = -VAR_6.bits.exp - VAR_3 + 1;
  if ((VAR_5 != 1) ^ (int)(VAR_6.bits.manl & 1))
   VAR_4.hi = FUNC_2(VAR_4.hi, VAR_0 * VAR_4.lo);
 }
 return (FUNC_1(VAR_4.hi, VAR_3));
}
