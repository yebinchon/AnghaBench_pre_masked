
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int const) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int const*,int) ;
 int FUNC_4 (int*,int const) ;

void
FUNC_5(uint32_t *VAR_0, const uint32_t *VAR_1, const uint32_t *VAR_2,
 const uint32_t *VAR_3, uint32_t VAR_4)
{
 size_t VAR_5, VAR_6, VAR_7;
 uint64_t VAR_8;

 VAR_5 = (VAR_3[0] + 31) >> 5;
 FUNC_4(VAR_0, VAR_3[0]);
 VAR_8 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6 ++) {
  uint32_t VAR_9, VAR_10;
  uint64_t VAR_11, VAR_12, VAR_13;

  VAR_10 = VAR_1[VAR_6 + 1];
  VAR_9 = (VAR_0[1] + VAR_1[VAR_6 + 1] * VAR_2[1]) * VAR_4;
  VAR_11 = 0;
  VAR_12 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7 ++) {
   uint64_t VAR_14;
   uint32_t VAR_15;

   VAR_14 = (uint64_t)VAR_0[VAR_7 + 1] + FUNC_0(VAR_10, VAR_2[VAR_7 + 1]) + VAR_11;
   VAR_11 = VAR_14 >> 32;
   VAR_15 = (uint32_t)VAR_14;
   VAR_14 = (uint64_t)VAR_15 + FUNC_0(VAR_9, VAR_3[VAR_7 + 1]) + VAR_12;
   VAR_12 = VAR_14 >> 32;
   if (VAR_7 != 0) {
    VAR_0[VAR_7] = (uint32_t)VAR_14;
   }
  }
  VAR_13 = VAR_8 + VAR_11 + VAR_12;
  VAR_0[VAR_5] = (uint32_t)VAR_13;
  VAR_8 = VAR_13 >> 32;
 }





 FUNC_3(VAR_0, VAR_3, FUNC_1(VAR_8, 0) | FUNC_2(FUNC_3(VAR_0, VAR_3, 0)));
}
