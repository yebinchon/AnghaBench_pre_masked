
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int uintmax_t ;
typedef int locale_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int,int ) ;

uintmax_t
FUNC_4(const wchar_t * __restrict VAR_4, wchar_t ** __restrict VAR_5,
    int VAR_6, locale_t VAR_7)
{
 const wchar_t *VAR_8;
 uintmax_t VAR_9;
 wchar_t VAR_10;
 uintmax_t VAR_11;
 int VAR_12, VAR_13, VAR_14;
 FUNC_0(VAR_7);




 VAR_8 = VAR_4;
 do {
  VAR_10 = *VAR_8++;
 } while (FUNC_3(VAR_10, VAR_7));
 if (VAR_10 == L'-') {
  VAR_12 = 1;
  VAR_10 = *VAR_8++;
 } else {
  VAR_12 = 0;
  if (VAR_10 == L'+')
   VAR_10 = *VAR_8++;
 }
 if ((VAR_6 == 0 || VAR_6 == 16) &&
     VAR_10 == L'0' && (*VAR_8 == L'x' || *VAR_8 == L'X')) {
  VAR_10 = VAR_8[1];
  VAR_8 += 2;
  VAR_6 = 16;
 }
 if (VAR_6 == 0)
  VAR_6 = VAR_10 == L'0' ? 8 : 10;
 VAR_9 = VAR_13 = 0;
 if (VAR_6 < 2 || VAR_6 > 36)
  goto noconv;

 VAR_11 = VAR_2 / VAR_6;
 VAR_14 = VAR_2 % VAR_6;
 for ( ; ; VAR_10 = *VAR_8++) {





  if (VAR_10 >= L'0' && VAR_10 <= L'9')
   VAR_10 -= L'0';
  else if (VAR_10 >= L'A' && VAR_10 <= L'Z')
   VAR_10 -= L'A' - 10;
  else if (VAR_10 >= L'a' && VAR_10 <= L'z')
   VAR_10 -= L'a' - 10;
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
  *VAR_5 = (wchar_t *)(VAR_13 ? VAR_8 - 1 : VAR_4);
 return (VAR_9);
}
