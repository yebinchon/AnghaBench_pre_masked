
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



uint8_t
FUNC_0(uint8_t *VAR_0)
{
 int VAR_1;
 uint8_t VAR_2;

 for (VAR_2 = 0, VAR_1 = 11; --VAR_1 >= 0; VAR_2 += *VAR_0++)
  VAR_2 = (VAR_2 << 7)|(VAR_2 >> 1);
 return (VAR_2);
}
