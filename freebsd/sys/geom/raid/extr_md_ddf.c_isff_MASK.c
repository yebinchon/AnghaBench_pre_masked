
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static int
FUNC_0(uint8_t *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  if (VAR_0[VAR_2] != 0xff)
   return (0);
 return (1);
}
