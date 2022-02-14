
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;



uint64_t
FUNC_0(uint8_t **VAR_0, int VAR_1)
{
 uint64_t VAR_2;
 uint8_t *VAR_3;

 VAR_3 = *VAR_0;

 VAR_2 = 0;
 switch (VAR_1) {
 case 1:
  VAR_2 = VAR_3[0];
  break;
 case 2:
  VAR_2 = VAR_3[1] | ((uint64_t) VAR_3[0]) << 8;
  break;
 case 4:
  VAR_2 = VAR_3[3] | ((uint64_t) VAR_3[2]) << 8;
  VAR_2 |= ((uint64_t) VAR_3[1]) << 16 | ((uint64_t) VAR_3[0]) << 24;
  break;
 case 8:
  VAR_2 = VAR_3[7] | ((uint64_t) VAR_3[6]) << 8;
  VAR_2 |= ((uint64_t) VAR_3[5]) << 16 | ((uint64_t) VAR_3[4]) << 24;
  VAR_2 |= ((uint64_t) VAR_3[3]) << 32 | ((uint64_t) VAR_3[2]) << 40;
  VAR_2 |= ((uint64_t) VAR_3[1]) << 48 | ((uint64_t) VAR_3[0]) << 56;
  break;
 default:
  return (0);
  break;
 }

 *VAR_0 += VAR_1;

 return (VAR_2);
}
