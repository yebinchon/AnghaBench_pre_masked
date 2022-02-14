
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wint_t ;
typedef char wchar_t ;
typedef int locale_t ;
typedef int FILE ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__,int *,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static __inline int
FUNC_3(FILE *VAR_2, wchar_t *VAR_3, int VAR_4, locale_t VAR_5)
{
 wchar_t *VAR_6;
 wint_t VAR_7;
 int VAR_8;

 VAR_8 = 0;
 if (VAR_3 == VAR_0) {
  while ((VAR_7 = FUNC_0(VAR_2, VAR_5)) != VAR_1 &&
      VAR_4-- != 0 && !FUNC_2(VAR_7))
   VAR_8++;
  if (VAR_7 != VAR_1)
   FUNC_1(VAR_7, VAR_2, VAR_5);
 } else {
  VAR_6 = VAR_3;
  while ((VAR_7 = FUNC_0(VAR_2, VAR_5)) != VAR_1 &&
      VAR_4-- != 0 && !FUNC_2(VAR_7)) {
   *VAR_3++ = (wchar_t)VAR_7;
   VAR_8++;
  }
  if (VAR_7 != VAR_1)
   FUNC_1(VAR_7, VAR_2, VAR_5);
  *VAR_3 = '\0';
 }
 return (VAR_8);
}
