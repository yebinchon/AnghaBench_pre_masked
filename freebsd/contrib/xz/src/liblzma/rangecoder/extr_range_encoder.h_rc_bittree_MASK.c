
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int probability ;
typedef int lzma_range_encoder ;


 int FUNC_0 (int *,int *,int const) ;

__attribute__((used)) static inline void
FUNC_1(lzma_range_encoder *VAR_0, probability *VAR_1,
  uint32_t VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4 = 1;

 do {
  const uint32_t VAR_5 = (VAR_3 >> --VAR_2) & 1;
  FUNC_0(VAR_0, &VAR_1[VAR_4], VAR_5);
  VAR_4 = (VAR_4 << 1) + VAR_5;
 } while (VAR_2 != 0);
}
