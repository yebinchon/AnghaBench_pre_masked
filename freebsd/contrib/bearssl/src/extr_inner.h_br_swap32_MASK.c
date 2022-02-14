
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline uint32_t
FUNC_0(uint32_t VAR_0)
{
 VAR_0 = ((VAR_0 & (uint32_t)0x00FF00FF) << 8)
  | ((VAR_0 >> 8) & (uint32_t)0x00FF00FF);
 return (VAR_0 << 16) | (VAR_0 >> 16);
}
