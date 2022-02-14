
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union uu {unsigned long* ul; double uq; } ;
typedef double u_quad_t ;
typedef unsigned long u_long ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;

u_quad_t
FUNC_0(double VAR_6)
{
 double VAR_7;
 union uu VAR_8;

 if (VAR_6 < 0)
  return (VAR_5);




 if (VAR_6 >= 18446744073709551615.0)
  return (VAR_5);






 VAR_7 = (VAR_6 - VAR_3) / VAR_2;
 VAR_8.ul[VAR_0] = (unsigned long)VAR_7;
 VAR_8.ul[VAR_1] = 0;
 VAR_6 -= (double)VAR_8.uq;
 if (VAR_6 < 0) {
  VAR_8.ul[VAR_0]--;
  VAR_6 += VAR_4;
 }
 if (VAR_6 > VAR_4) {
  VAR_8.ul[VAR_0]++;
  VAR_6 -= VAR_4;
 }
 VAR_8.ul[VAR_1] = (u_long)VAR_6;
 return (VAR_8.uq);
}
