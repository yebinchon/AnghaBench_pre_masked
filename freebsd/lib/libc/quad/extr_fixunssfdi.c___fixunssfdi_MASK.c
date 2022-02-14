
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union uu {unsigned long* ul; float uq; } ;
typedef float u_quad_t ;
typedef unsigned long u_long ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 float VAR_5 ;

u_quad_t
FUNC_0(float VAR_6)
{
 double VAR_7, VAR_8;
 union uu VAR_9;

 if (VAR_6 < 0)
  return (VAR_5);




 if (VAR_6 >= 18446744073709551615.0)
  return (VAR_5);

 VAR_7 = VAR_6;





 VAR_8 = (VAR_7 - VAR_3) / VAR_2;
 VAR_9.ul[VAR_0] = (unsigned long)VAR_8;
 VAR_9.ul[VAR_1] = 0;
 VAR_7 -= (double)VAR_9.uq;
 if (VAR_7 < 0) {
  VAR_9.ul[VAR_0]--;
  VAR_7 += VAR_4;
 }
 if (VAR_7 > VAR_4) {
  VAR_9.ul[VAR_0]++;
  VAR_7 -= VAR_4;
 }
 VAR_9.ul[VAR_1] = (u_long)VAR_7;
 return (VAR_9.uq);
}
