
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;



int
FUNC_0(uint8_t *VAR_0, char *VAR_1, void *VAR_2)
{
 uint8_t *VAR_3 = VAR_0;
 uint8_t *VAR_4 = VAR_2;
 uint16_t VAR_5;
 uint32_t VAR_6;
 char *VAR_7;

 for (VAR_7 = VAR_1; *VAR_7; VAR_7++) {
  switch (*VAR_7) {
  case 'b':
   *VAR_4++ = *VAR_3++;
   break;



  case 'w':
   VAR_5 = (VAR_3[1] << 8) | VAR_3[0];
   VAR_3 += 2;

   VAR_4 += ((VAR_4 - (uint8_t *)0) & 1);
   *((uint16_t *)VAR_4) = VAR_5;
   VAR_4 += 2;
   break;



  case 'd':
   VAR_6 = (VAR_3[3] << 24) | (VAR_3[2] << 16) |
       (VAR_3[1] << 8) | VAR_3[0];
   VAR_3 += 4;

   VAR_4 += ((VAR_4 - (uint8_t *)0) & 1);

   VAR_4 += ((VAR_4 - (uint8_t *)0) & 2);
   *((uint32_t *)VAR_4) = VAR_6;
   VAR_4 += 4;
   break;
  }
 }
 return (VAR_3 - VAR_0);
}
