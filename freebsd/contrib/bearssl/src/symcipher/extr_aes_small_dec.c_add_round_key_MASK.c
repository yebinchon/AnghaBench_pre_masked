
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void
FUNC_0(unsigned *VAR_0, const uint32_t *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 16; VAR_2 += 4) {
  uint32_t VAR_3;

  VAR_3 = *VAR_1 ++;
  VAR_0[VAR_2 + 0] ^= (unsigned)(VAR_3 >> 24);
  VAR_0[VAR_2 + 1] ^= (unsigned)(VAR_3 >> 16) & 0xFF;
  VAR_0[VAR_2 + 2] ^= (unsigned)(VAR_3 >> 8) & 0xFF;
  VAR_0[VAR_2 + 3] ^= (unsigned)VAR_3 & 0xFF;
 }
}
