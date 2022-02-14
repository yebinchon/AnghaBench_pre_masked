
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
 int VAR_2 ;

__attribute__((used)) static __inline int
FUNC_1(FILE *VAR_3, wchar_t *VAR_4, int VAR_5, locale_t VAR_6)
{
 mbstate_t VAR_7;
 int VAR_8, VAR_9;
 wint_t VAR_10;

 VAR_7 = VAR_2;
 VAR_8 = 0;
 while (VAR_5-- != 0 &&
     (VAR_10 = FUNC_0(VAR_3, &VAR_7, &VAR_9, VAR_6)) != VAR_1) {
  if (VAR_4 != VAR_0)
   *VAR_4++ = (wchar_t)VAR_10;
  VAR_8 += VAR_9;
 }
 if (VAR_8 == 0)
  return (-1);
 return (VAR_8);
}
