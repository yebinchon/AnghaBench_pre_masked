
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0 (int VAR_0, unsigned char *VAR_1, int *VAR_2, int VAR_3)
{
  int VAR_4 = *VAR_2 / 8;
  int VAR_5 = *VAR_2 % 8;
  int VAR_6;

  *VAR_2 += VAR_3;

  VAR_6 = VAR_1[VAR_4];

  VAR_6 &= ~((~0 >> (8 - VAR_5 - VAR_3)) & ((1 << VAR_3) - 1));

  VAR_6 |= (VAR_0 & ((1 << VAR_3) - 1)) << (8 - VAR_5 - VAR_3);
  VAR_1[VAR_4] = VAR_6;
}
