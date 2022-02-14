
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0 (int VAR_0, int *VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4;
 VAR_3 = VAR_0;

 VAR_4 = 5;

 if (VAR_3 == 0)
  VAR_4 = 0;
 else if (VAR_3 < 261)
 {
  while (VAR_3 < 261)
  {
   VAR_4--;
   VAR_3 <<= 1;
  }
 }
 else if (VAR_3 > 493)
 {
  while (VAR_3 > 493)
  {
    VAR_4++;
    VAR_3 >>= 1;
  }
 }

 if (VAR_4 > 7)
  VAR_4 = 7;

 *VAR_2 = VAR_0 * (1 << (20 - VAR_4)) / 49716;
 *VAR_1 = VAR_4;
}
