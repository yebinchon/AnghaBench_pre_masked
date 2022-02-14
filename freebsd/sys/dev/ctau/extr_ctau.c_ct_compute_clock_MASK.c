
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0 (long VAR_0, long VAR_1, int *VAR_2, int *VAR_3)
{
 if (VAR_1 < 100)
  VAR_1 = 100;
 *VAR_2 = 0;
 if (4*VAR_1 > 3*VAR_0)
  *VAR_3 = 1;
 else {
  while (((VAR_0 / VAR_1) >> ++*VAR_2) > 256)
   continue;
  *VAR_3 = (((2 * VAR_0 / VAR_1) >> *VAR_2) + 1) / 2;
 }
}
