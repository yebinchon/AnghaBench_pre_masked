
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int locale_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (unsigned char,int ) ;

long
FUNC_2(const char * __restrict VAR_5, char ** __restrict VAR_6, int VAR_7,
  locale_t VAR_8)
{
 const char *VAR_9;
 unsigned long VAR_10;
 char VAR_11;
 unsigned long VAR_12;
 int VAR_13, VAR_14, VAR_15;
 FUNC_0(VAR_8);






 VAR_9 = VAR_5;
 do {
  VAR_11 = *VAR_9++;
 } while (FUNC_1((unsigned char)VAR_11, VAR_8));
 if (VAR_11 == '-') {
  VAR_13 = 1;
  VAR_11 = *VAR_9++;
 } else {
  VAR_13 = 0;
  if (VAR_11 == '+')
   VAR_11 = *VAR_9++;
 }
 if ((VAR_7 == 0 || VAR_7 == 16) &&
     VAR_11 == '0' && (*VAR_9 == 'x' || *VAR_9 == 'X') &&
     ((VAR_9[1] >= '0' && VAR_9[1] <= '9') ||
     (VAR_9[1] >= 'A' && VAR_9[1] <= 'F') ||
     (VAR_9[1] >= 'a' && VAR_9[1] <= 'f'))) {
  VAR_11 = VAR_9[1];
  VAR_9 += 2;
  VAR_7 = 16;
 }
 if (VAR_7 == 0)
  VAR_7 = VAR_11 == '0' ? 8 : 10;
 VAR_10 = VAR_14 = 0;
 if (VAR_7 < 2 || VAR_7 > 36)
  goto noconv;
 VAR_12 = VAR_13 ? (unsigned long)-(VAR_3 + VAR_2) + VAR_2
     : VAR_2;
 VAR_15 = VAR_12 % VAR_7;
 VAR_12 /= VAR_7;
 for ( ; ; VAR_11 = *VAR_9++) {
  if (VAR_11 >= '0' && VAR_11 <= '9')
   VAR_11 -= '0';
  else if (VAR_11 >= 'A' && VAR_11 <= 'Z')
   VAR_11 -= 'A' - 10;
  else if (VAR_11 >= 'a' && VAR_11 <= 'z')
   VAR_11 -= 'a' - 10;
  else
   break;
  if (VAR_11 >= VAR_7)
   break;
  if (VAR_14 < 0 || VAR_10 > VAR_12 || (VAR_10 == VAR_12 && VAR_11 > VAR_15))
   VAR_14 = -1;
  else {
   VAR_14 = 1;
   VAR_10 *= VAR_7;
   VAR_10 += VAR_11;
  }
 }
 if (VAR_14 < 0) {
  VAR_10 = VAR_13 ? VAR_3 : VAR_2;
  VAR_4 = VAR_1;
 } else if (!VAR_14) {
noconv:
  VAR_4 = VAR_0;
 } else if (VAR_13)
  VAR_10 = -VAR_10;
 if (VAR_6 != ((void*)0))
  *VAR_6 = (char *)(VAR_14 ? VAR_9 - 1 : VAR_5);
 return (VAR_10);
}
