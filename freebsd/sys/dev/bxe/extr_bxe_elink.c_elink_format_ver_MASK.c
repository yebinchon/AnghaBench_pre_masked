
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int elink_status_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static elink_status_t FUNC_0(uint32_t VAR_2, uint8_t *VAR_3, uint16_t *VAR_4)
{
 uint8_t *VAR_5 = VAR_3;
 uint32_t VAR_6 = 0xf0000000;
 uint8_t VAR_7 = 8*4;
 uint8_t VAR_8;
 uint8_t VAR_9 = 1;
 if (*VAR_4 < 10) {

  *VAR_5 = '\0';
  (*VAR_4)--;
  return VAR_0;
 }
 while (VAR_7 > 0) {

  VAR_7 -= 4;
  VAR_8 = ((VAR_2 & VAR_6) >> VAR_7);
  if (VAR_8 == 0 && VAR_9) {
   VAR_6 = VAR_6 >> 4;
   continue;
  } else if (VAR_8 < 0xa)
   *VAR_5 = VAR_8 + '0';
  else
   *VAR_5 = VAR_8 - 0xa + 'a';
  VAR_9 = 0;
  VAR_5++;
  (*VAR_4)--;
  VAR_6 = VAR_6 >> 4;
  if (VAR_7 == 4*4) {
   *VAR_5 = '.';
   VAR_5++;
   (*VAR_4)--;
   VAR_9 = 1;
  }
 }
 return VAR_1;
}
