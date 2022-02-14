
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union uu {scalar_t__ q; scalar_t__* ul; } ;
typedef scalar_t__ u_long ;
typedef scalar_t__ quad_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static quad_t
FUNC_3(u_long VAR_2, u_long VAR_3)
{
 u_long VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 u_long VAR_13, VAR_14, VAR_15;
 union uu VAR_16;
 int VAR_17;

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = FUNC_1(VAR_2);
 VAR_6 = FUNC_0(VAR_3);
 VAR_7 = FUNC_1(VAR_3);

 VAR_12 = VAR_5 * VAR_7;


 if (VAR_4 == 0 && VAR_6 == 0)
  return (VAR_12);

 if (VAR_4 >= VAR_5)
  VAR_8 = VAR_4 - VAR_5, VAR_17 = 0;
 else
  VAR_8 = VAR_5 - VAR_4, VAR_17 = 1;
 if (VAR_7 >= VAR_6)
  VAR_9 = VAR_7 - VAR_6;
 else
  VAR_9 = VAR_6 - VAR_7, VAR_17 ^= 1;
 VAR_11 = VAR_8 * VAR_9;

 VAR_10 = VAR_4 * VAR_6;


 VAR_13 = VAR_10 + FUNC_0(VAR_10);
 VAR_14 = FUNC_2(VAR_10);


 if (VAR_17) {
  VAR_15 = VAR_14;
  VAR_14 -= FUNC_2(VAR_11);
  VAR_13 -= FUNC_0(VAR_11) + (VAR_14 > VAR_15);
 } else {
  VAR_15 = VAR_14;
  VAR_14 += FUNC_2(VAR_11);
  VAR_13 += FUNC_0(VAR_11) + (VAR_14 < VAR_15);
 }


 VAR_15 = VAR_14;
 VAR_14 += FUNC_2(VAR_12);
 VAR_13 += FUNC_0(VAR_12) + (VAR_14 < VAR_15);

 if ((VAR_14 += VAR_12) < VAR_12)
  VAR_13++;


 VAR_16.ul[VAR_0] = VAR_13;
 VAR_16.ul[VAR_1] = VAR_14;
 return (VAR_16.q);
}
