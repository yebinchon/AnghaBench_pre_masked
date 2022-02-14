
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static inline void
FUNC_0(uint64_t *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 8; VAR_1 ++) {
  uint64_t VAR_2;

  VAR_2 = VAR_0[VAR_1];
  VAR_0[VAR_1] = (VAR_2 & (uint64_t)0x000000000000FFFF)
   | ((VAR_2 & (uint64_t)0x00000000FFF00000) >> 4)
   | ((VAR_2 & (uint64_t)0x00000000000F0000) << 12)
   | ((VAR_2 & (uint64_t)0x0000FF0000000000) >> 8)
   | ((VAR_2 & (uint64_t)0x000000FF00000000) << 8)
   | ((VAR_2 & (uint64_t)0xF000000000000000) >> 12)
   | ((VAR_2 & (uint64_t)0x0FFF000000000000) << 4);
 }
}
