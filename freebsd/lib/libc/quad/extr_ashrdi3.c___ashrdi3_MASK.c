
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union uu {int* sl; long* ul; int q; } ;
typedef int quad_t ;
typedef int qshift_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

quad_t
FUNC_0(quad_t VAR_4, qshift_t VAR_5)
{
 union uu VAR_6;

 VAR_6.q = VAR_4;
 if (VAR_5 >= VAR_2) {
  long VAR_7;
  VAR_7 = (VAR_6.sl[VAR_0] >> (VAR_2 - 1)) >> 1;
  VAR_6.ul[VAR_1] = VAR_5 >= VAR_3 ? VAR_7 :
      VAR_6.sl[VAR_0] >> (VAR_5 - VAR_2);
  VAR_6.ul[VAR_0] = VAR_7;
 } else if (VAR_5 > 0) {
  VAR_6.ul[VAR_1] = (VAR_6.ul[VAR_1] >> VAR_5) |
      (VAR_6.ul[VAR_0] << (VAR_2 - VAR_5));
  VAR_6.sl[VAR_0] >>= VAR_5;
 }
 return (VAR_6.q);
}
