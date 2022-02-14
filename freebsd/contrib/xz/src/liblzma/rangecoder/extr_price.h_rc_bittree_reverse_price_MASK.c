
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int probability ;


 scalar_t__ FUNC_0 (int const,scalar_t__ const) ;

__attribute__((used)) static inline uint32_t
FUNC_1(const probability *const VAR_0,
  uint32_t VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3 = 0;
 uint32_t VAR_4 = 1;

 do {
  const uint32_t VAR_5 = VAR_2 & 1;
  VAR_2 >>= 1;
  VAR_3 += FUNC_0(VAR_0[VAR_4], VAR_5);
  VAR_4 = (VAR_4 << 1) + VAR_5;
 } while (--VAR_1 != 0);

 return VAR_3;
}
