
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wint_t ;
typedef scalar_t__ wchar_t ;
typedef int mbstate_t ;
typedef int locale_t ;
typedef int FILE ;


 scalar_t__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,int *,int ) ;
 int VAR_2 ;
 size_t FUNC_3 (scalar_t__) ;

__attribute__((used)) static __inline int
FUNC_4(FILE *VAR_3, wchar_t *VAR_4, int VAR_5, const char *VAR_6,
    locale_t VAR_7)
{
 mbstate_t VAR_8;
 wint_t VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = VAR_2;
 VAR_10 = 0;
 if (VAR_4 == VAR_0) {
  while ((VAR_9 = FUNC_0(VAR_3, &VAR_8, &VAR_11, VAR_7)) != VAR_1 &&
      VAR_5-- != 0 && VAR_6[FUNC_3(VAR_9)])
   VAR_10 += VAR_11;
  if (VAR_9 != VAR_1)
   FUNC_2(VAR_9, VAR_3, FUNC_1());
 } else {
  while ((VAR_9 = FUNC_0(VAR_3, &VAR_8, &VAR_11, VAR_7)) != VAR_1 &&
      VAR_5-- != 0 && VAR_6[FUNC_3(VAR_9)]) {
   *VAR_4++ = (wchar_t)VAR_9;
   VAR_10 += VAR_11;
  }
  if (VAR_9 != VAR_1)
   FUNC_2(VAR_9, VAR_3, FUNC_1());
  if (VAR_10 == 0)
   return (0);
  *VAR_4 = 0;
 }
 return (VAR_10);
}
