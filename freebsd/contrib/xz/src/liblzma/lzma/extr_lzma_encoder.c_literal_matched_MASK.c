
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int probability ;
typedef int lzma_range_encoder ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int const) ;

__attribute__((used)) static inline void
FUNC_2(lzma_range_encoder *VAR_0, probability *VAR_1,
  uint32_t VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4 = 0x100;
 VAR_3 += FUNC_0(1) << 8;

 do {
  VAR_2 <<= 1;
  const uint32_t VAR_5 = VAR_2 & VAR_4;
  const uint32_t VAR_6
    = VAR_4 + VAR_5 + (VAR_3 >> 8);
  const uint32_t VAR_7 = (VAR_3 >> 7) & 1;
  FUNC_1(VAR_0, &VAR_1[VAR_6], VAR_7);

  VAR_3 <<= 1;
  VAR_4 &= ~(VAR_2 ^ VAR_3);

 } while (VAR_3 < (FUNC_0(1) << 16));
}
