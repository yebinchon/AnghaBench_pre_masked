
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dd {long double hi; long double lo; } ;



__attribute__((used)) static inline struct dd
FUNC_0(long double VAR_0, long double VAR_1)
{
 struct dd VAR_2;
 long double VAR_3;

 VAR_2.hi = VAR_0 + VAR_1;
 VAR_3 = VAR_2.hi - VAR_0;
 VAR_2.lo = (VAR_0 - (VAR_2.hi - VAR_3)) + (VAR_1 - VAR_3);
 return (VAR_2);
}
