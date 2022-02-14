
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline uint32_t
FUNC_0(uint32_t VAR_0, uint32_t VAR_1)
{
 VAR_0 -= 0xD800;
 VAR_0 *= 0x400;
 VAR_0 += VAR_1 - 0xDC00;
 VAR_0 += 0x10000;
 return (VAR_0);
}
