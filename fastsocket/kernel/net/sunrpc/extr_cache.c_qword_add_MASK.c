
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(char **VAR_0, int *VAR_1, char *VAR_2)
{
 char *VAR_3 = *VAR_0;
 int VAR_4 = *VAR_1;
 char VAR_5;

 if (VAR_4 < 0) return;

 while ((VAR_5=*VAR_2++) && VAR_4)
  switch(VAR_5) {
  case ' ':
  case '\t':
  case '\n':
  case '\\':
   if (VAR_4 >= 4) {
    *VAR_3++ = '\\';
    *VAR_3++ = '0' + ((VAR_5 & 0300)>>6);
    *VAR_3++ = '0' + ((VAR_5 & 0070)>>3);
    *VAR_3++ = '0' + ((VAR_5 & 0007)>>0);
   }
   VAR_4 -= 4;
   break;
  default:
   *VAR_3++ = VAR_5;
   VAR_4--;
  }
 if (VAR_5 || VAR_4 <1) VAR_4 = -1;
 else {
  *VAR_3++ = ' ';
  VAR_4--;
 }
 *VAR_0 = VAR_3;
 *VAR_1 = VAR_4;
}
