
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;

int FUNC_2(char **VAR_0, char *VAR_1, int VAR_2)
{

 char *VAR_3 = *VAR_0;
 int VAR_4 = 0;

 while (*VAR_3 == ' ') VAR_3++;

 if (VAR_3[0] == '\\' && VAR_3[1] == 'x') {

  VAR_3 += 2;
  while (VAR_4 < VAR_2) {
   int VAR_5, VAR_6;

   VAR_5 = FUNC_0(VAR_3[0]);
   if (VAR_5 < 0)
    break;

   VAR_6 = FUNC_0(VAR_3[1]);
   if (VAR_6 < 0)
    break;

   *VAR_1++ = (VAR_5 << 4) | VAR_6;
   VAR_3 += 2;
   VAR_4++;
  }
 } else {

  while (*VAR_3 != ' ' && *VAR_3 != '\n' && *VAR_3 && VAR_4 < VAR_2-1) {
   if (*VAR_3 == '\\' &&
       FUNC_1(VAR_3[1]) && (VAR_3[1] <= '3') &&
       FUNC_1(VAR_3[2]) &&
       FUNC_1(VAR_3[3])) {
    int VAR_7 = (*++VAR_3 -'0');
    VAR_3++;
    VAR_7 = (VAR_7 << 3) | (*VAR_3++ - '0');
    VAR_7 = (VAR_7 << 3) | (*VAR_3++ - '0');
    *VAR_1++ = VAR_7;
    VAR_4++;
   } else {
    *VAR_1++ = *VAR_3++;
    VAR_4++;
   }
  }
 }

 if (*VAR_3 != ' ' && *VAR_3 != '\n' && *VAR_3 != '\0')
  return -1;
 while (*VAR_3 == ' ') VAR_3++;
 *VAR_0 = VAR_3;
 *VAR_1 = '\0';
 return VAR_4;
}
