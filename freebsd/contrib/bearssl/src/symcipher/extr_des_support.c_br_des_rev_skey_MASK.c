
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



void
FUNC_0(uint32_t *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 16; VAR_1 += 2) {
  uint32_t VAR_2;

  VAR_2 = VAR_0[VAR_1 + 0];
  VAR_0[VAR_1 + 0] = VAR_0[30 - VAR_1];
  VAR_0[30 - VAR_1] = VAR_2;
  VAR_2 = VAR_0[VAR_1 + 1];
  VAR_0[VAR_1 + 1] = VAR_0[31 - VAR_1];
  VAR_0[31 - VAR_1] = VAR_2;
 }
}
