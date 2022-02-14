
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 char* VAR_0 ;

char *
FUNC_0(int VAR_1, const u_char *VAR_2, char *VAR_3) {
 int VAR_4;
 int VAR_5;
 char *VAR_6 = VAR_0;
 char *VAR_7;

 if (VAR_3)
  VAR_7 = VAR_3;
 else {
  VAR_3 = VAR_6;
  VAR_7 = VAR_6;
 }

 *VAR_3++ = '0';
 *VAR_3++ = 'x';

 if (VAR_1 > 255)
  VAR_1 = 255;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = *VAR_2 >> 4;
  *VAR_3++ = VAR_4 + (VAR_4 < 10 ? '0' : '7');
  VAR_4 = *VAR_2++ & 0x0f;
  *VAR_3++ = VAR_4 + (VAR_4 < 10 ? '0' : '7');
  if (((VAR_5 % 2) == 0 && (VAR_5 + 1) < VAR_1))
   *VAR_3++ = '.';
 }
 *VAR_3 = '\0';
 return (VAR_7);
}
