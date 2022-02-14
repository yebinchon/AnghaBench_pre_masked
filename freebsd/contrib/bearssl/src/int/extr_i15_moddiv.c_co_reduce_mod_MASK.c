
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int*,size_t,int const*,int) ;

__attribute__((used)) static void
FUNC_1(uint16_t *VAR_1, uint16_t *VAR_2, size_t VAR_3,
 int32_t VAR_4, int32_t VAR_5, int32_t VAR_6, int32_t VAR_7,
 const uint16_t *VAR_8, uint16_t VAR_9)
{
 size_t VAR_10;
 int32_t VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_11 = 0;
 VAR_12 = 0;
 VAR_13 = ((VAR_1[0] * (uint32_t)VAR_4 + VAR_2[0] * (uint32_t)VAR_5) * VAR_9) & 0x7FFF;
 VAR_14 = ((VAR_1[0] * (uint32_t)VAR_6 + VAR_2[0] * (uint32_t)VAR_7) * VAR_9) & 0x7FFF;
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10 ++) {
  uint32_t VAR_15, VAR_16, VAR_17, VAR_18;
  uint32_t VAR_19, VAR_20;





  VAR_15 = VAR_1[VAR_10];
  VAR_16 = VAR_2[VAR_10];
  VAR_17 = VAR_15 * (uint32_t)VAR_4 + VAR_16 * (uint32_t)VAR_5
   + VAR_8[VAR_10] * (uint32_t)VAR_13 + (uint32_t)VAR_11;
  VAR_18 = VAR_15 * (uint32_t)VAR_6 + VAR_16 * (uint32_t)VAR_7
   + VAR_8[VAR_10] * (uint32_t)VAR_14 + (uint32_t)VAR_12;
  if (VAR_10 > 0) {
   VAR_1[VAR_10 - 1] = VAR_17 & 0x7FFF;
   VAR_2[VAR_10 - 1] = VAR_18 & 0x7FFF;
  }







  VAR_19 = VAR_17 >> 15;
  VAR_20 = VAR_18 >> 15;
  VAR_19 = (VAR_19 ^ ((uint32_t)1 << 16)) - ((uint32_t)1 << 16);
  VAR_20 = (VAR_20 ^ ((uint32_t)1 << 16)) - ((uint32_t)1 << 16);
  VAR_11 = *(int32_t *)&VAR_19;
  VAR_12 = *(int32_t *)&VAR_20;

 }
 VAR_1[VAR_3 - 1] = (uint32_t)VAR_11;
 VAR_2[VAR_3 - 1] = (uint32_t)VAR_12;
 FUNC_0(VAR_1, VAR_3, VAR_8, (uint32_t)VAR_11 >> 31);
 FUNC_0(VAR_2, VAR_3, VAR_8, (uint32_t)VAR_12 >> 31);
}
