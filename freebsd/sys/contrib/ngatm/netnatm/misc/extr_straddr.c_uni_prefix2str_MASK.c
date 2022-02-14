
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;



void
FUNC_0(char *VAR_0, const u_char *VAR_1, u_int VAR_2, int VAR_3)
{
 static char VAR_4[16] = "0123456789abcdef";
 static int VAR_5[3][6] = {
  { 1, 2, 10, 6, 1, 0 },
  { 1, 2, 10, 6, 1, 0 },
  { 1, 8, 4, 6, 1, 0 },
 };
 int VAR_6, VAR_7;
 u_int VAR_8;

 if (VAR_2 > 20)
  VAR_2 = 20;

 if(VAR_3) {
  switch(*VAR_1) {

    case 0x39:
   VAR_8 = 0;
  fmt:
   for(VAR_6 = 0; VAR_5[VAR_8][VAR_6]; VAR_6++) {
    if (VAR_2 == 0)
     goto done;
    if(VAR_6 != 0)
     *VAR_0++ = '.';
    for(VAR_7 = 0; VAR_7 < VAR_5[VAR_8][VAR_6]; VAR_7++) {
     if (VAR_2-- == 0)
      goto done;
     *VAR_0++ = VAR_4[(*VAR_1 >> 4) & 0xf];
     *VAR_0++ = VAR_4[*VAR_1 & 0xf];
     VAR_1++;
    }
   }
  done:
   *VAR_0 = '\0';
   return;

    case 0x47:
   VAR_8 = 1;
   goto fmt;

    case 0x45:
   VAR_8 = 2;
   goto fmt;
  }
 }


 for(VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  *VAR_0++ = VAR_4[(*VAR_1 >> 4) & 0xf];
  *VAR_0++ = VAR_4[*VAR_1 & 0xf];
  VAR_1++;
 }
 *VAR_0 = '\0';
}
