
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int l_fp ;


 int FUNC_0 (char*,int *) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;

int
FUNC_3(
 const char *VAR_0,
 l_fp *VAR_1
 )
{
 register const char *VAR_2;
 register char *VAR_3;
 register const char *VAR_4;
 char VAR_5[100];
 VAR_3 = VAR_5;
 VAR_2 = VAR_0;
 while (FUNC_2((unsigned char)*VAR_2))
     VAR_2++;

 if (*VAR_2 == '-') {
  *VAR_3++ = '-';
  VAR_2++;
 }

 if (*VAR_2 != '.' && !FUNC_1((unsigned char)*VAR_2))
     return 0;





 VAR_4 = VAR_2;
 while (FUNC_1((unsigned char)*VAR_4))
     VAR_4++;





 if ((VAR_4 - VAR_2) > 3) {
  do {
   *VAR_3++ = (char)*VAR_2++;
  } while ((VAR_4 - VAR_2) > 3);
 } else {
  *VAR_3++ = '0';
 }






 *VAR_3++ = '.';
 if ((VAR_4 - VAR_2) < 3) {
  size_t VAR_6 = 3 - (VAR_4 - VAR_2);
  do {
   *VAR_3++ = '0';
  } while (--VAR_6 > 0);
 }





 while (VAR_2 < VAR_4)
     *VAR_3++ = (char)*VAR_2++;

 if (*VAR_2 == '.') {
  VAR_2++;
  while (FUNC_1((unsigned char)*VAR_2))
      *VAR_3++ = (char)*VAR_2++;
 }
 *VAR_3 = '\0';





 if (*VAR_2 != '\0' && !FUNC_2((unsigned char)*VAR_2))
     return 0;
 return FUNC_0(VAR_5, VAR_1);
}
