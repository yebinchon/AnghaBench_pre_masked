
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wint_t ;
struct xlocale_ctype {size_t (* __wcrtomb ) (char*,int ,int *) ;} ;
typedef int locale_t ;
struct TYPE_4__ {int _flags; int _mbstate; } ;
typedef TYPE_1__ FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xlocale_ctype* FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (unsigned char,TYPE_1__*) ;
 size_t FUNC_2 (char*,int ,int *) ;

wint_t
FUNC_3(wint_t VAR_4, FILE *VAR_5, locale_t VAR_6)
{
 char VAR_7[VAR_1];
 size_t VAR_8;
 struct xlocale_ctype *VAR_9 = FUNC_0(VAR_6);

 if (VAR_4 == VAR_2)
  return (VAR_2);
 if ((VAR_8 = VAR_9->__wcrtomb(VAR_7, VAR_4, &VAR_5->_mbstate)) == (size_t)-1) {
  VAR_5->_flags |= VAR_3;
  return (VAR_2);
 }
 while (VAR_8-- != 0)
  if (FUNC_1((unsigned char)VAR_7[VAR_8], VAR_5) == VAR_0)
   return (VAR_2);

 return (VAR_4);
}
