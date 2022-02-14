
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wint_t ;
typedef scalar_t__ wchar_t ;
struct xlocale_ctype {size_t (* __wcrtomb ) (char*,scalar_t__,int *) ;} ;
typedef int locale_t ;
struct TYPE_4__ {int _flags; int _mbstate; } ;
typedef TYPE_1__ FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xlocale_ctype* FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (unsigned char,TYPE_1__*) ;
 size_t FUNC_2 (char*,scalar_t__,int *) ;

wint_t
FUNC_3(wchar_t VAR_4, FILE *VAR_5, locale_t VAR_6)
{
 char VAR_7[VAR_1];
 size_t VAR_8, VAR_9;
 struct xlocale_ctype *VAR_10 = FUNC_0(VAR_6);

 if ((VAR_9 = VAR_10->__wcrtomb(VAR_7, VAR_4, &VAR_5->_mbstate)) == (size_t)-1) {
  VAR_5->_flags |= VAR_3;
  return (VAR_2);
 }

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  if (FUNC_1((unsigned char)VAR_7[VAR_8], VAR_5) == VAR_0)
   return (VAR_2);

 return ((wint_t)VAR_4);
}
