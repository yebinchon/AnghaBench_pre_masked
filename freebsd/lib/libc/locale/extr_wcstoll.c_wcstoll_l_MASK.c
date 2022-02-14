
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int locale_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 int FUNC_1 (int,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int,int ) ;

long long
FUNC_4(const wchar_t * __restrict VAR_5, wchar_t ** __restrict VAR_6,
  int VAR_7, locale_t VAR_8)
{
 const wchar_t *VAR_9;
 unsigned long long VAR_10;
 wchar_t VAR_11;
 unsigned long long VAR_12;
 int VAR_13, VAR_14, VAR_15;
 FUNC_0(VAR_8);




 VAR_9 = VAR_5;
 do {
  VAR_11 = *VAR_9++;
 } while (FUNC_3(VAR_11, VAR_8));
 if (VAR_11 == L'-') {
  VAR_13 = 1;
  VAR_11 = *VAR_9++;
 } else {
  VAR_13 = 0;
  if (VAR_11 == L'+')
   VAR_11 = *VAR_9++;
 }
 if ((VAR_7 == 0 || VAR_7 == 16) &&
     VAR_11 == L'0' && (*VAR_9 == L'x' || *VAR_9 == L'X')) {
  VAR_11 = VAR_9[1];
  VAR_9 += 2;
  VAR_7 = 16;
 }
 if (VAR_7 == 0)
  VAR_7 = VAR_11 == L'0' ? 8 : 10;
 VAR_10 = VAR_14 = 0;
 if (VAR_7 < 2 || VAR_7 > 36)
  goto noconv;

 VAR_12 = VAR_13 ? (unsigned long long)-(VAR_3 + VAR_2) + VAR_2
     : VAR_2;
 VAR_15 = VAR_12 % VAR_7;
 VAR_12 /= VAR_7;
 for ( ; ; VAR_11 = *VAR_9++) {





  if (VAR_11 >= L'0' && VAR_11 <= L'9')
   VAR_11 -= L'0';
  else if (VAR_11 >= L'A' && VAR_11 <= L'Z')
   VAR_11 -= L'A' - 10;
  else if (VAR_11 >= L'a' && VAR_11 <= L'z')
   VAR_11 -= L'a' - 10;
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
  *VAR_6 = (wchar_t *)(VAR_14 ? VAR_9 - 1 : VAR_5);
 return (VAR_10);
}
