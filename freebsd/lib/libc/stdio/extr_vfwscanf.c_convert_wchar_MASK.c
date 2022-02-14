
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wint_t ;
typedef scalar_t__ wchar_t ;
typedef int locale_t ;
typedef int FILE ;


 scalar_t__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;

__attribute__((used)) static __inline int
FUNC_1(FILE *VAR_2, wchar_t *VAR_3, int VAR_4, locale_t VAR_5)
{
 wint_t VAR_6;
 int VAR_7;

 VAR_7 = 0;
 while (VAR_4-- != 0 && (VAR_6 = FUNC_0(VAR_2, VAR_5)) != VAR_1) {
  if (VAR_3 != VAR_0)
   *VAR_3++ = (wchar_t)VAR_6;
  VAR_7++;
 }
 if (VAR_7 == 0)
  return (-1);
 return (VAR_7);
}
