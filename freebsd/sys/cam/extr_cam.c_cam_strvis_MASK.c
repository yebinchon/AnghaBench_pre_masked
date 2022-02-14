
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_int8_t ;



void
FUNC_0(u_int8_t *VAR_0, const u_int8_t *VAR_1, int VAR_2, int VAR_3)
{


 while (VAR_2 > 0 && VAR_1[0] == ' ')
  VAR_1++, VAR_2--;
 while (VAR_2 > 0
     && (VAR_1[VAR_2-1] == ' ' || VAR_1[VAR_2-1] == '\0'))
  VAR_2--;

 while (VAR_2 > 0 && VAR_3 > 1) {
  u_int8_t *VAR_4 = VAR_0;

  if (*VAR_1 < 0x20 || *VAR_1 >= 0x80) {


   if (VAR_3 > 4) {
    *VAR_4++ = '\\';
    *VAR_4++ = ((*VAR_1 & 0300) >> 6) + '0';
    *VAR_4++ = ((*VAR_1 & 0070) >> 3) + '0';
    *VAR_4++ = ((*VAR_1 & 0007) >> 0) + '0';
   } else {
    *VAR_4++ = '?';
   }
  } else {

   *VAR_4++ = *VAR_1;
  }
  VAR_1++;
  VAR_2--;
  VAR_3 -= VAR_4 - VAR_0;
  VAR_0 = VAR_4;
 }
 *VAR_0 = '\0';
}
