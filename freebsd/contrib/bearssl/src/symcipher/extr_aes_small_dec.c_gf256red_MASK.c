
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned
FUNC_0(unsigned VAR_0)
{
 unsigned VAR_1;

 VAR_1 = VAR_0 >> 8;
 return (VAR_0 ^ VAR_1 ^ (VAR_1 << 1) ^ (VAR_1 << 3) ^ (VAR_1 << 4)) & 0xFF;
}
