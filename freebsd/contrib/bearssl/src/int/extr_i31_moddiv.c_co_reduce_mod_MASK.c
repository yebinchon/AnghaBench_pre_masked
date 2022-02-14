
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int FUNC_0 (int*,size_t,int const*,int) ;

__attribute__((used)) static void
FUNC_1(uint32_t *VAR_1, uint32_t *VAR_2, size_t VAR_3,
 int64_t VAR_4, int64_t VAR_5, int64_t VAR_6, int64_t VAR_7,
 const uint32_t *VAR_8, uint32_t VAR_9)
{
 size_t VAR_10;
 int64_t VAR_11, VAR_12;
 uint32_t VAR_13, VAR_14;

 VAR_11 = 0;
 VAR_12 = 0;
 VAR_13 = ((VAR_1[0] * (uint32_t)VAR_4 + VAR_2[0] * (uint32_t)VAR_5) * VAR_9) & 0x7FFFFFFF;
 VAR_14 = ((VAR_1[0] * (uint32_t)VAR_6 + VAR_2[0] * (uint32_t)VAR_7) * VAR_9) & 0x7FFFFFFF;
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10 ++) {
  uint32_t VAR_15, VAR_16;
  uint64_t VAR_17, VAR_18;
  uint64_t VAR_19, VAR_20;





  VAR_15 = VAR_1[VAR_10];
  VAR_16 = VAR_2[VAR_10];
  VAR_17 = VAR_15 * (uint64_t)VAR_4 + VAR_16 * (uint64_t)VAR_5
   + VAR_8[VAR_10] * (uint64_t)VAR_13 + (uint64_t)VAR_11;
  VAR_18 = VAR_15 * (uint64_t)VAR_6 + VAR_16 * (uint64_t)VAR_7
   + VAR_8[VAR_10] * (uint64_t)VAR_14 + (uint64_t)VAR_12;
  if (VAR_10 > 0) {
   VAR_1[VAR_10 - 1] = (uint32_t)VAR_17 & 0x7FFFFFFF;
   VAR_2[VAR_10 - 1] = (uint32_t)VAR_18 & 0x7FFFFFFF;
  }


  VAR_19 = VAR_17 >> 31;
  VAR_20 = VAR_18 >> 31;
  VAR_19 = (VAR_19 ^ ((uint64_t)1 << 32)) - ((uint64_t)1 << 32);
  VAR_20 = (VAR_20 ^ ((uint64_t)1 << 32)) - ((uint64_t)1 << 32);
  VAR_11 = *(int64_t *)&VAR_19;
  VAR_12 = *(int64_t *)&VAR_20;

 }
 VAR_1[VAR_3 - 1] = (uint32_t)VAR_11;
 VAR_2[VAR_3 - 1] = (uint32_t)VAR_12;
 FUNC_0(VAR_1, VAR_3, VAR_8, (uint32_t)((uint64_t)VAR_11 >> 63));
 FUNC_0(VAR_2, VAR_3, VAR_8, (uint32_t)((uint64_t)VAR_12 >> 63));
}
