
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(char **VAR_0, int *VAR_1, char *VAR_2, int VAR_3)
{
 char *VAR_4 = *VAR_0;
 int VAR_5 = *VAR_1;

 if (VAR_5 < 0) return;

 if (VAR_5 > 2) {
  *VAR_4++ = '\\';
  *VAR_4++ = 'x';
  VAR_5 -= 2;
  while (VAR_3 && VAR_5 >= 2) {
   unsigned char VAR_6 = *VAR_2++;
   *VAR_4++ = '0' + ((VAR_6&0xf0)>>4) + (VAR_6>=0xa0)*('a'-'9'-1);
   *VAR_4++ = '0' + (VAR_6&0x0f) + ((VAR_6&0x0f)>=0x0a)*('a'-'9'-1);
   VAR_5 -= 2;
   VAR_3--;
  }
 }
 if (VAR_3 || VAR_5<1) VAR_5 = -1;
 else {
  *VAR_4++ = ' ';
  VAR_5--;
 }
 *VAR_0 = VAR_4;
 *VAR_1 = VAR_5;
}
