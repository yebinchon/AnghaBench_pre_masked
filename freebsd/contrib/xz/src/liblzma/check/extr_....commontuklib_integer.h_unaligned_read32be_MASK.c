
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static inline uint32_t
FUNC_0(const uint8_t *VAR_0)
{
 uint32_t VAR_1 = (uint32_t)VAR_0[0] << 24;
 VAR_1 |= (uint32_t)VAR_0[1] << 16;
 VAR_1 |= (uint32_t)VAR_0[2] << 8;
 VAR_1 |= (uint32_t)VAR_0[3];
 return VAR_1;
}
