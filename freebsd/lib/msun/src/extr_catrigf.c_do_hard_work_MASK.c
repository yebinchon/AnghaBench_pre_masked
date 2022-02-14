
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float VAR_1 ;
 int VAR_2 ;
 float VAR_3 ;
 float FUNC_0 (float,float,float) ;
 int FUNC_1 (float) ;
 float FUNC_2 (float,float) ;
 float FUNC_3 (float) ;
 float FUNC_4 (float) ;
 float FUNC_5 (int) ;

__attribute__((used)) static inline void
FUNC_6(float VAR_4, float VAR_5, float *VAR_6, int *VAR_7, float *VAR_8,
    float *VAR_9, float *VAR_10)
{
 float VAR_11, VAR_12, VAR_13;
 float VAR_14, VAR_15;

 VAR_11 = FUNC_2(VAR_4, VAR_5 + 1);
 VAR_12 = FUNC_2(VAR_4, VAR_5 - 1);

 VAR_13 = (VAR_11 + VAR_12) / 2;
 if (VAR_13 < 1)
  VAR_13 = 1;

 if (VAR_13 < VAR_0) {
  if (VAR_5 == 1 && VAR_4 < VAR_2 * VAR_2 / 128) {
   *VAR_6 = FUNC_5(VAR_4);
  } else if (VAR_4 >= VAR_2 * FUNC_1(VAR_5 - 1)) {
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

 if (VAR_5 < VAR_3) {
  *VAR_7 = 0;
  *VAR_9 = VAR_13 * (2 / VAR_2);
  *VAR_10 = VAR_5 * (2 / VAR_2);
  return;
 }

 *VAR_8 = VAR_5 / VAR_13;
 *VAR_7 = 1;

 if (*VAR_8 > VAR_1) {
  *VAR_7 = 0;
  if (VAR_5 == 1 && VAR_4 < VAR_2 / 128) {
   *VAR_9 = FUNC_5(VAR_4) * FUNC_5((VAR_13 + VAR_5) / 2);
  } else if (VAR_4 >= VAR_2 * FUNC_1(VAR_5 - 1)) {
   VAR_15 = FUNC_0(VAR_4, VAR_5 + 1, VAR_11) + FUNC_0(VAR_4, VAR_5 - 1, VAR_12);
   *VAR_9 = FUNC_5(VAR_15 * (VAR_13 + VAR_5));
  } else if (VAR_5 > 1) {
   *VAR_9 = VAR_4 * (4 / VAR_2 / VAR_2) * VAR_5 /
       FUNC_5((VAR_5 + 1) * (VAR_5 - 1));
   *VAR_10 = VAR_5 * (4 / VAR_2 / VAR_2);
  } else {
   *VAR_9 = FUNC_5((1 - VAR_5) * (1 + VAR_5));
  }
 }
}
