
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wint_t ;
typedef scalar_t__ wchar_t ;
struct ccl {int dummy; } ;
typedef int locale_t ;
typedef int FILE ;


 scalar_t__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__,int *,int ) ;
 scalar_t__ FUNC_2 (struct ccl const*,scalar_t__) ;

__attribute__((used)) static __inline int
FUNC_3(FILE *VAR_2, wchar_t *VAR_3, int VAR_4, const struct ccl *VAR_5,
    locale_t VAR_6)
{
 wchar_t *VAR_7;
 wint_t VAR_8;
 int VAR_9;

 if (VAR_3 == VAR_0) {
  VAR_9 = 0;
  while ((VAR_8 = FUNC_0(VAR_2, VAR_6)) != VAR_1 &&
      VAR_4-- != 0 && FUNC_2(VAR_5, VAR_8))
   VAR_9++;
  if (VAR_8 != VAR_1)
   FUNC_1(VAR_8, VAR_2, VAR_6);
 } else {
  VAR_7 = VAR_3;
  while ((VAR_8 = FUNC_0(VAR_2, VAR_6)) != VAR_1 &&
      VAR_4-- != 0 && FUNC_2(VAR_5, VAR_8))
   *VAR_3++ = (wchar_t)VAR_8;
  if (VAR_8 != VAR_1)
   FUNC_1(VAR_8, VAR_2, VAR_6);
  VAR_9 = VAR_3 - VAR_7;
  if (VAR_9 == 0)
   return (0);
  *VAR_3 = 0;
 }
 return (VAR_9);
}
