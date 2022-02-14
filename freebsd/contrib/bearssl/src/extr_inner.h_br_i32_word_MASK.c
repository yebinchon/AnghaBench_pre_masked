
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline uint32_t
FUNC_0(const uint32_t *VAR_0, uint32_t VAR_1)
{
 size_t VAR_2;
 unsigned VAR_3;

 VAR_2 = (size_t)(VAR_1 >> 5) + 1;
 VAR_3 = (unsigned)VAR_1 & 31;
 if (VAR_3 == 0) {
  return VAR_0[VAR_2];
 } else {
  return (VAR_0[VAR_2] >> VAR_3) | (VAR_0[VAR_2 + 1] << (32 - VAR_3));
 }
}
