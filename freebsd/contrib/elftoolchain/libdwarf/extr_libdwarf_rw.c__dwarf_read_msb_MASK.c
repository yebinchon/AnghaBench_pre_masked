
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;



uint64_t
FUNC_0(uint8_t *VAR_0, uint64_t *VAR_1, int VAR_2)
{
 uint64_t VAR_3;
 uint8_t *VAR_4;

 VAR_4 = VAR_0 + *VAR_1;

 switch (VAR_2) {
 case 1:
  VAR_3 = VAR_4[0];
  break;
 case 2:
  VAR_3 = VAR_4[1] | ((uint64_t) VAR_4[0]) << 8;
  break;
 case 4:
  VAR_3 = VAR_4[3] | ((uint64_t) VAR_4[2]) << 8;
  VAR_3 |= ((uint64_t) VAR_4[1]) << 16 | ((uint64_t) VAR_4[0]) << 24;
  break;
 case 8:
  VAR_3 = VAR_4[7] | ((uint64_t) VAR_4[6]) << 8;
  VAR_3 |= ((uint64_t) VAR_4[5]) << 16 | ((uint64_t) VAR_4[4]) << 24;
  VAR_3 |= ((uint64_t) VAR_4[3]) << 32 | ((uint64_t) VAR_4[2]) << 40;
  VAR_3 |= ((uint64_t) VAR_4[1]) << 48 | ((uint64_t) VAR_4[0]) << 56;
  break;
 default:
  return (0);
 }

 *VAR_1 += VAR_2;

 return (VAR_3);
}
