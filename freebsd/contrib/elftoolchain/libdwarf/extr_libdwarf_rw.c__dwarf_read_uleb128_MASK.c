
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;



uint64_t
FUNC_0(uint8_t *VAR_0, uint64_t *VAR_1)
{
 uint64_t VAR_2 = 0;
 uint8_t VAR_3;
 int VAR_4 = 0;
 uint8_t *VAR_5;

 VAR_5 = VAR_0 + *VAR_1;

 do {
  VAR_3 = *VAR_5++;
  VAR_2 |= ((VAR_3 & 0x7f) << VAR_4);
  (*VAR_1)++;
  VAR_4 += 7;
 } while ((VAR_3 & 0x80) != 0);

 return (VAR_2);
}
