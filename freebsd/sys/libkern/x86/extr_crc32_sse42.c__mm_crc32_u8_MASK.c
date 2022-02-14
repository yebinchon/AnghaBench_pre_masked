
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static __inline uint32_t
FUNC_0(uint32_t VAR_0, uint8_t VAR_1)
{







 __asm("crc32b %1,%0" : "+r" (VAR_0) : "r" (VAR_1));
 return (VAR_0);
}
