
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int locale_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (unsigned char,int ) ;

unsigned long long
FUNC_2(const char * __restrict VAR_4, char ** __restrict VAR_5, int VAR_6,
  locale_t VAR_7)
{
 const char *VAR_8;
 unsigned long long VAR_9;
 char VAR_10;
 unsigned long long VAR_11;
 int VAR_12, VAR_13, VAR_14;
 FUNC_0(VAR_7);




 VAR_8 = VAR_4;
 do {
  VAR_10 = *VAR_8++;
 } while (FUNC_1((unsigned char)VAR_10, VAR_7));
 if (VAR_10 == '-') {
  VAR_12 = 1;
  VAR_10 = *VAR_8++;
 } else {
  VAR_12 = 0;
  if (VAR_10 == '+')
   VAR_10 = *VAR_8++;
 }
 if ((VAR_6 == 0 || VAR_6 == 16) &&
     VAR_10 == '0' && (*VAR_8 == 'x' || *VAR_8 == 'X') &&
     ((VAR_8[1] >= '0' && VAR_8[1] <= '9') ||
     (VAR_8[1] >= 'A' && VAR_8[1] <= 'F') ||
     (VAR_8[1] >= 'a' && VAR_8[1] <= 'f'))) {
  VAR_10 = VAR_8[1];
  VAR_8 += 2;
  VAR_6 = 16;
 }
 if (VAR_6 == 0)
  VAR_6 = VAR_10 == '0' ? 8 : 10;
 VAR_9 = VAR_13 = 0;
 if (VAR_6 < 2 || VAR_6 > 36)
  goto noconv;

 VAR_11 = VAR_2 / VAR_6;
 VAR_14 = VAR_2 % VAR_6;
 for ( ; ; VAR_10 = *VAR_8++) {
  if (VAR_10 >= '0' && VAR_10 <= '9')
   VAR_10 -= '0';
  else if (VAR_10 >= 'A' && VAR_10 <= 'Z')
   VAR_10 -= 'A' - 10;
  else if (VAR_10 >= 'a' && VAR_10 <= 'z')
   VAR_10 -= 'a' - 10;
  else
   break;
  if (VAR_10 >= VAR_6)
   break;
  if (VAR_13 < 0 || VAR_9 > VAR_11 || (VAR_9 == VAR_11 && VAR_10 > VAR_14))
   VAR_13 = -1;
  else {
   VAR_13 = 1;
   VAR_9 *= VAR_6;
   VAR_9 += VAR_10;
  }
 }
 if (VAR_13 < 0) {
  VAR_9 = VAR_2;
  VAR_3 = VAR_1;
 } else if (!VAR_13) {
noconv:
  VAR_3 = VAR_0;
 } else if (VAR_12)
  VAR_9 = -VAR_9;
 if (VAR_5 != ((void*)0))
  *VAR_5 = (char *)(VAR_13 ? VAR_8 - 1 : VAR_4);
 return (VAR_9);
}
