
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int const) ;
 int const FUNC_1 (int const,int const) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int*,int const*,int) ;
 int FUNC_5 (int*,int const) ;

void
FUNC_6(uint32_t *VAR_0, const uint32_t *VAR_1, const uint32_t *VAR_2,
 const uint32_t *VAR_3, uint32_t VAR_4)
{
 size_t VAR_5, VAR_6, VAR_7, VAR_8;
 uint32_t VAR_9;

 VAR_5 = (VAR_3[0] + 31) >> 5;
 VAR_6 = VAR_5 & ~(size_t)3;
 FUNC_5(VAR_0, VAR_3[0]);
 VAR_9 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7 ++) {
  uint32_t VAR_10, VAR_11;



  uint32_t VAR_12;


  VAR_11 = VAR_1[VAR_7 + 1];
  VAR_10 = FUNC_1((VAR_0[1] + FUNC_1(VAR_1[VAR_7 + 1], VAR_2[1])), VAR_4);

  VAR_12 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8 += 4) {
   uint64_t VAR_13;

   VAR_13 = (uint64_t)VAR_0[VAR_8 + 1] + FUNC_0(VAR_11, VAR_2[VAR_8 + 1])
    + FUNC_0(VAR_10, VAR_3[VAR_8 + 1]) + VAR_12;
   VAR_12 = VAR_13 >> 31;
   VAR_0[VAR_8 + 0] = (uint32_t)VAR_13 & 0x7FFFFFFF;
   VAR_13 = (uint64_t)VAR_0[VAR_8 + 2] + FUNC_0(VAR_11, VAR_2[VAR_8 + 2])
    + FUNC_0(VAR_10, VAR_3[VAR_8 + 2]) + VAR_12;
   VAR_12 = VAR_13 >> 31;
   VAR_0[VAR_8 + 1] = (uint32_t)VAR_13 & 0x7FFFFFFF;
   VAR_13 = (uint64_t)VAR_0[VAR_8 + 3] + FUNC_0(VAR_11, VAR_2[VAR_8 + 3])
    + FUNC_0(VAR_10, VAR_3[VAR_8 + 3]) + VAR_12;
   VAR_12 = VAR_13 >> 31;
   VAR_0[VAR_8 + 2] = (uint32_t)VAR_13 & 0x7FFFFFFF;
   VAR_13 = (uint64_t)VAR_0[VAR_8 + 4] + FUNC_0(VAR_11, VAR_2[VAR_8 + 4])
    + FUNC_0(VAR_10, VAR_3[VAR_8 + 4]) + VAR_12;
   VAR_12 = VAR_13 >> 31;
   VAR_0[VAR_8 + 3] = (uint32_t)VAR_13 & 0x7FFFFFFF;
  }
  for (; VAR_8 < VAR_5; VAR_8 ++) {
   uint64_t VAR_14;

   VAR_14 = (uint64_t)VAR_0[VAR_8 + 1] + FUNC_0(VAR_11, VAR_2[VAR_8 + 1])
    + FUNC_0(VAR_10, VAR_3[VAR_8 + 1]) + VAR_12;
   VAR_12 = VAR_14 >> 31;
   VAR_0[VAR_8] = (uint32_t)VAR_14 & 0x7FFFFFFF;
  }






  VAR_9 += VAR_12;
  VAR_0[VAR_5] = VAR_9 & 0x7FFFFFFF;
  VAR_9 >>= 31;
 }






 VAR_0[0] = VAR_3[0];





 FUNC_4(VAR_0, VAR_3, FUNC_2(VAR_9, 0) | FUNC_3(FUNC_4(VAR_0, VAR_3, 0)));
}
