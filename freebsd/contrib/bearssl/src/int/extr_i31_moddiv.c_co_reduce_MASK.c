
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int FUNC_0 (int*,size_t,int) ;

__attribute__((used)) static uint32_t
FUNC_1(uint32_t *VAR_1, uint32_t *VAR_2, size_t VAR_3,
 int64_t VAR_4, int64_t VAR_5, int64_t VAR_6, int64_t VAR_7)
{
 size_t VAR_8;
 int64_t VAR_9, VAR_10;
 uint32_t VAR_11, VAR_12;

 VAR_9 = 0;
 VAR_10 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8 ++) {
  uint32_t VAR_13, VAR_14;
  uint64_t VAR_15, VAR_16;
  uint64_t VAR_17, VAR_18;
  VAR_13 = VAR_1[VAR_8];
  VAR_14 = VAR_2[VAR_8];
  VAR_15 = VAR_13 * (uint64_t)VAR_4 + VAR_14 * (uint64_t)VAR_5 + (uint64_t)VAR_9;
  VAR_16 = VAR_13 * (uint64_t)VAR_6 + VAR_14 * (uint64_t)VAR_7 + (uint64_t)VAR_10;
  if (VAR_8 > 0) {
   VAR_1[VAR_8 - 1] = VAR_15 & 0x7FFFFFFF;
   VAR_2[VAR_8 - 1] = VAR_16 & 0x7FFFFFFF;
  }
  VAR_17 = VAR_15 >> 31;
  VAR_18 = VAR_16 >> 31;
  VAR_17 = (VAR_17 ^ ((uint64_t)1 << 32)) - ((uint64_t)1 << 32);
  VAR_18 = (VAR_18 ^ ((uint64_t)1 << 32)) - ((uint64_t)1 << 32);
  VAR_9 = *(int64_t *)&VAR_17;
  VAR_10 = *(int64_t *)&VAR_18;

 }
 VAR_1[VAR_3 - 1] = (uint32_t)VAR_9;
 VAR_2[VAR_3 - 1] = (uint32_t)VAR_10;

 VAR_11 = (uint32_t)((uint64_t)VAR_9 >> 63);
 VAR_12 = (uint32_t)((uint64_t)VAR_10 >> 63);
 FUNC_0(VAR_1, VAR_3, VAR_11);
 FUNC_0(VAR_2, VAR_3, VAR_12);
 return VAR_11 | (VAR_12 << 1);
}
