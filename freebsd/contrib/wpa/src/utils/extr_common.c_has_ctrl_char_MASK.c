
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



int FUNC_0(const u8 *VAR_0, size_t VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_0[VAR_2] < 32 || VAR_0[VAR_2] == 127)
   return 1;
 }
 return 0;
}
