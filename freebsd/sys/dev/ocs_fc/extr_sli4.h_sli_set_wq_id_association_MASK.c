
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;



__attribute__((used)) static inline void
FUNC_0(void *VAR_0, uint16_t VAR_1)
{
 uint32_t *VAR_2 = VAR_0;






 VAR_2[10] &= ~0xffff;
 VAR_2[10] |= VAR_1 << 1;



}
