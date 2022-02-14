
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline uint32_t FUNC_0(uint32_t VAR_0, unsigned int VAR_1)
{
 VAR_0 &= 0xFFFFFFFF;
 return ((VAR_0 << VAR_1) & 0xFFFFFFFF) | (VAR_0 >> (32 - VAR_1));
}
