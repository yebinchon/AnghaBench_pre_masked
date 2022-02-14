
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct dd {scalar_t__ lo; double hi; } ;


 int FUNC_0 (int,double) ;
 int FUNC_1 (double,int) ;
 struct dd FUNC_2 (double,double) ;

__attribute__((used)) static inline double
FUNC_3(double VAR_0, double VAR_1)
{
 struct dd VAR_2;
 uint64_t VAR_3, VAR_4;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2.lo != 0) {
  FUNC_0(VAR_3, VAR_2.hi);
  if ((VAR_3 & 1) == 0) {

   FUNC_0(VAR_4, VAR_2.lo);
   VAR_3 += 1 - ((VAR_3 ^ VAR_4) >> 62);
   FUNC_1(VAR_2.hi, VAR_3);
  }
 }
 return (VAR_2.hi);
}
