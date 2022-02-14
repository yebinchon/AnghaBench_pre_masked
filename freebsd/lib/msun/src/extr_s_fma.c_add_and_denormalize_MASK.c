
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct dd {scalar_t__ lo; scalar_t__ hi; } ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 struct dd FUNC_2 (double,double) ;
 double FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static inline double
FUNC_4(double VAR_0, double VAR_1, int VAR_2)
{
 struct dd VAR_3;
 uint64_t VAR_4, VAR_5;
 int VAR_6;

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_3.lo != 0) {
  FUNC_0(VAR_4, VAR_3.hi);
  VAR_6 = -((int)(VAR_4 >> 52) & 0x7ff) - VAR_2 + 1;
  if ((VAR_6 != 1) ^ (int)(VAR_4 & 1)) {

   FUNC_0(VAR_5, VAR_3.lo);
   VAR_4 += 1 - (((VAR_4 ^ VAR_5) >> 62) & 2);
   FUNC_1(VAR_3.hi, VAR_4);
  }
 }
 return (FUNC_3(VAR_3.hi, VAR_2));
}
