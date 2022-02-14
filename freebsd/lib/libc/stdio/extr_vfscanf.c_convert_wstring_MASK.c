
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wint_t ;
typedef char wchar_t ;
typedef int mbstate_t ;
typedef int locale_t ;
typedef int FILE ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static __inline int
FUNC_4(FILE *VAR_3, wchar_t *VAR_4, int VAR_5, locale_t VAR_6)
{
 mbstate_t VAR_7;
 wint_t VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = VAR_2;
 VAR_9 = 0;
 if (VAR_4 == VAR_0) {
  while ((VAR_8 = FUNC_0(VAR_3, &VAR_7, &VAR_10, VAR_6)) != VAR_1 &&
      VAR_5-- != 0 && !FUNC_3(VAR_8))
   VAR_9 += VAR_10;
  if (VAR_8 != VAR_1)
   FUNC_2(VAR_8, VAR_3, FUNC_1());
 } else {
  while ((VAR_8 = FUNC_0(VAR_3, &VAR_7, &VAR_10, VAR_6)) != VAR_1 &&
      VAR_5-- != 0 && !FUNC_3(VAR_8)) {
   *VAR_4++ = (wchar_t)VAR_8;
   VAR_9 += VAR_10;
  }
  if (VAR_8 != VAR_1)
   FUNC_2(VAR_8, VAR_3, FUNC_1());
  *VAR_4 = '\0';
 }
 return (VAR_9);
}
