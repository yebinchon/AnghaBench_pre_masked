
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;



void
FUNC_0(uint8_t *VAR_0, const uint8_t *VAR_1, int VAR_2, int VAR_3)
{
 uint8_t *VAR_4;


 while (VAR_3 > 0 && VAR_1[0] == ' ')
  VAR_1++, VAR_3--;
 while (VAR_3 > 0
     && (VAR_1[VAR_3 - 1] == ' ' || VAR_1[VAR_3 - 1] == '\0'))
  VAR_3--;

 while (VAR_3 > 0 && VAR_2 > 1) {
  VAR_4 = VAR_0;


  if (*VAR_1 < 0x20 || *VAR_1 >= 0x7F)
   *VAR_4++ = '?';
  else
   *VAR_4++ = *VAR_1;
  VAR_1++;
  VAR_3--;
  VAR_2 -= VAR_4 - VAR_0;
  VAR_0 = VAR_4;
 }
 *VAR_0 = '\0';
}
