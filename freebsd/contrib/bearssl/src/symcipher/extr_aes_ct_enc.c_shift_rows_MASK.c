
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline void
FUNC_0(uint32_t *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 8; VAR_1 ++) {
  uint32_t VAR_2;

  VAR_2 = VAR_0[VAR_1];
  VAR_0[VAR_1] = (VAR_2 & 0x000000FF)
   | ((VAR_2 & 0x0000FC00) >> 2) | ((VAR_2 & 0x00000300) << 6)
   | ((VAR_2 & 0x00F00000) >> 4) | ((VAR_2 & 0x000F0000) << 4)
   | ((VAR_2 & 0xC0000000) >> 6) | ((VAR_2 & 0x3F000000) << 2);
 }
}
