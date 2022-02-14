
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char int8_t ;



void
FUNC_0(int8_t *VAR_0, int8_t *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 for (VAR_3 = VAR_4 = VAR_5 = 0 ; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_5 && VAR_0[VAR_3] == ' ') continue;
  if (VAR_5 && VAR_0[VAR_3] != ' ') {
   VAR_1[VAR_4++] = VAR_0[VAR_3];
   VAR_5 = 0;
   continue;
  }
  if (VAR_0[VAR_3] == ' ') {
   VAR_5 = 1;
   if (VAR_3 == 0)
   continue;
  }
  VAR_1[VAR_4++] = VAR_0[VAR_3];
 }
 while (VAR_4 < VAR_2)
  VAR_1[VAR_4++] = 0x00;
}
