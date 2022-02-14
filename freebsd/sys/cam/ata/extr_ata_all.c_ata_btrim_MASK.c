
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char int8_t ;



void
FUNC_0(int8_t *VAR_0, int VAR_1)
{
 int8_t *VAR_2;

 for (VAR_2 = VAR_0; VAR_2 < VAR_0+VAR_1; ++VAR_2)
  if (!*VAR_2 || *VAR_2 == '_')
   *VAR_2 = ' ';
 for (VAR_2 = VAR_0 + VAR_1 - 1; VAR_2 >= VAR_0 && *VAR_2 == ' '; --VAR_2)
  *VAR_2 = 0;
}
