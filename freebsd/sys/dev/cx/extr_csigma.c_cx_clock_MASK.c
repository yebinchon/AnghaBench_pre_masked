
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0 (long VAR_0, long VAR_1, int *VAR_2, int *VAR_3)
{
 static short VAR_4[] = { 8, 32, 128, 512, 2048, 0 };

 for (*VAR_2=0; VAR_4[*VAR_2]; ++*VAR_2) {
  long VAR_5 = VAR_1 * VAR_4[*VAR_2];
  if (VAR_0 <= VAR_5*256) {
   *VAR_3 = (2 * VAR_0 + VAR_5) / (2 * VAR_5) - 1;
   return;
  }
 }

 *VAR_2 = 0;
 *VAR_3 = 255;
}
