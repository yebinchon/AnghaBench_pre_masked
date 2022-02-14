
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;



__attribute__((used)) static void
FUNC_0(uint8_t *VAR_0, uint64_t *VAR_1, size_t VAR_2)
{
 size_t VAR_3, VAR_4;
 for (VAR_3 = 0, VAR_4 = 0; VAR_4 < VAR_2; VAR_3++, VAR_4 += 8) {
  VAR_0[VAR_4] = (VAR_1[VAR_3] >> 56) & 0xff;
  VAR_0[VAR_4 + 1] = (VAR_1[VAR_3] >> 48) & 0xff;
  VAR_0[VAR_4 + 2] = (VAR_1[VAR_3] >> 40) & 0xff;
  VAR_0[VAR_4 + 3] = (VAR_1[VAR_3] >> 32) & 0xff;
  VAR_0[VAR_4 + 4] = (VAR_1[VAR_3] >> 24) & 0xff;
  VAR_0[VAR_4 + 5] = (VAR_1[VAR_3] >> 16) & 0xff;
  VAR_0[VAR_4 + 6] = (VAR_1[VAR_3] >> 8) & 0xff;
  VAR_0[VAR_4 + 7] = VAR_1[VAR_3] & 0xff;
 }
}
