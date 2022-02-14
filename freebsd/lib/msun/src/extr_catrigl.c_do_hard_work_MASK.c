
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long double VAR_0 ;
 long double VAR_1 ;
 long double VAR_2 ;
 int VAR_3 ;
 long double FUNC_0 (long double,long double,long double) ;
 int FUNC_1 (long double) ;
 long double FUNC_2 (long double,long double) ;
 long double FUNC_3 (long double) ;
 long double FUNC_4 (long double) ;
 long double FUNC_5 (int) ;

__attribute__((used)) static inline void
FUNC_6(long double VAR_4, long double VAR_5, long double *VAR_6, int *VAR_7,
    long double *VAR_8, long double *VAR_9, long double *VAR_10)
{
 long double VAR_11, VAR_12, VAR_13;
 long double VAR_14, VAR_15;

 VAR_11 = FUNC_2(VAR_4, VAR_5 + 1);
 VAR_12 = FUNC_2(VAR_4, VAR_5 - 1);

 VAR_13 = (VAR_11 + VAR_12) / 2;
 if (VAR_13 < 1)
  VAR_13 = 1;

 if (VAR_13 < VAR_0) {
  if (VAR_5 == 1 && VAR_4 < VAR_3 * VAR_3 / 128) {
   *VAR_6 = FUNC_5(VAR_4);
  } else if (VAR_4 >= VAR_3 * FUNC_1(VAR_5 - 1)) {
   VAR_14 = FUNC_0(VAR_4, 1 + VAR_5, VAR_11) + FUNC_0(VAR_4, 1 - VAR_5, VAR_12);
   *VAR_6 = FUNC_3(VAR_14 + FUNC_5(VAR_14 * (VAR_13 + 1)));
  } else if (VAR_5 < 1) {
   *VAR_6 = VAR_4 / FUNC_5((1 - VAR_5) * (1 + VAR_5));
  } else {
   *VAR_6 = FUNC_3((VAR_5 - 1) + FUNC_5((VAR_5 - 1) * (VAR_5 + 1)));
  }
 } else {
  *VAR_6 = FUNC_4(VAR_13 + FUNC_5(VAR_13 * VAR_13 - 1));
 }

 *VAR_10 = VAR_5;

 if (VAR_5 < VAR_2) {
  *VAR_7 = 0;
  *VAR_9 = VAR_13 * (2 / VAR_3);
  *VAR_10 = VAR_5 * (2 / VAR_3);
  return;
 }

 *VAR_8 = VAR_5 / VAR_13;
 *VAR_7 = 1;

 if (*VAR_8 > VAR_1) {
  *VAR_7 = 0;
  if (VAR_5 == 1 && VAR_4 < VAR_3 / 128) {
   *VAR_9 = FUNC_5(VAR_4) * FUNC_5((VAR_13 + VAR_5) / 2);
  } else if (VAR_4 >= VAR_3 * FUNC_1(VAR_5 - 1)) {
   VAR_15 = FUNC_0(VAR_4, VAR_5 + 1, VAR_11) + FUNC_0(VAR_4, VAR_5 - 1, VAR_12);
   *VAR_9 = FUNC_5(VAR_15 * (VAR_13 + VAR_5));
  } else if (VAR_5 > 1) {
   *VAR_9 = VAR_4 * (4 / VAR_3 / VAR_3) * VAR_5 /
       FUNC_5((VAR_5 + 1) * (VAR_5 - 1));
   *VAR_10 = VAR_5 * (4 / VAR_3 / VAR_3);
  } else {
   *VAR_9 = FUNC_5((1 - VAR_5) * (1 + VAR_5));
  }
 }
}
