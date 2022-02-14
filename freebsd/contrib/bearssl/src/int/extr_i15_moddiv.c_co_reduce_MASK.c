
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ int16_t ;


 int FUNC_0 (int*,size_t,int) ;

__attribute__((used)) static uint32_t
FUNC_1(uint16_t *VAR_0, uint16_t *VAR_1, size_t VAR_2,
 int32_t VAR_3, int32_t VAR_4, int32_t VAR_5, int32_t VAR_6)
{
 size_t VAR_7;
 int32_t VAR_8, VAR_9;
 uint32_t VAR_10, VAR_11;

 VAR_8 = 0;
 VAR_9 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7 ++) {
  uint32_t VAR_12, VAR_13, VAR_14, VAR_15;
  uint16_t VAR_16, VAR_17;
  VAR_12 = VAR_0[VAR_7];
  VAR_13 = VAR_1[VAR_7];
  VAR_14 = VAR_12 * (uint32_t)VAR_3 + VAR_13 * (uint32_t)VAR_4 + (uint32_t)VAR_8;
  VAR_15 = VAR_12 * (uint32_t)VAR_5 + VAR_13 * (uint32_t)VAR_6 + (uint32_t)VAR_9;
  if (VAR_7 > 0) {
   VAR_0[VAR_7 - 1] = VAR_14 & 0x7FFF;
   VAR_1[VAR_7 - 1] = VAR_15 & 0x7FFF;
  }
  VAR_16 = VAR_14 >> 15;
  VAR_17 = VAR_15 >> 15;
  VAR_8 = *(int16_t *)&VAR_16;
  VAR_9 = *(int16_t *)&VAR_17;
 }
 VAR_0[VAR_2 - 1] = (uint16_t)VAR_8;
 VAR_1[VAR_2 - 1] = (uint16_t)VAR_9;
 VAR_10 = (uint32_t)VAR_8 >> 31;
 VAR_11 = (uint32_t)VAR_9 >> 31;
 FUNC_0(VAR_0, VAR_2, VAR_10);
 FUNC_0(VAR_1, VAR_2, VAR_11);
 return VAR_10 | (VAR_11 << 1);
}
