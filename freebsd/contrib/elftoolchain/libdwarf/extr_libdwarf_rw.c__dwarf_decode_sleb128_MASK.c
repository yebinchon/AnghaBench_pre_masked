
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;



int64_t
FUNC_0(uint8_t **VAR_0)
{
 int64_t VAR_1 = 0;
 uint8_t VAR_2;
 int VAR_3 = 0;

 uint8_t *VAR_4 = *VAR_0;

 do {
  VAR_2 = *VAR_4++;
  VAR_1 |= ((VAR_2 & 0x7f) << VAR_3);
  VAR_3 += 7;
 } while ((VAR_2 & 0x80) != 0);

 if (VAR_3 < 64 && (VAR_2 & 0x40) != 0)
  VAR_1 |= (-1 << VAR_3);

 *VAR_0 = VAR_4;

 return (VAR_1);
}
