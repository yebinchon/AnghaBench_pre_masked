
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ptrdiff_t ;



void
FUNC_0(char *VAR_0, size_t VAR_1)
{
 ptrdiff_t VAR_2;

 for (VAR_2 = VAR_1 - 1; VAR_2 >= 0; VAR_2--) {
  if (VAR_0[VAR_2] == '\0')
   continue;
  else if (VAR_0[VAR_2] == ' ')
   VAR_0[VAR_2] = '\0';
  else
   break;
 }
}
