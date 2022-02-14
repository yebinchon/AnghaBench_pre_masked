
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int wint_t ;
typedef int wchar_t ;
struct xlocale_ctype {size_t (* __mbrtowc ) (int*,size_t,size_t,int *) ;} ;
typedef int mbstate_t ;
typedef int locale_t ;
struct TYPE_5__ {size_t _r; size_t _p; int _flags; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 struct xlocale_ctype* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 size_t FUNC_3 (int*,size_t,size_t,int *) ;

wint_t
FUNC_4(FILE *VAR_4, mbstate_t *VAR_5, int *VAR_6, locale_t VAR_7)
{
 wchar_t VAR_8;
 size_t VAR_9;
 struct xlocale_ctype *VAR_10 = FUNC_0(VAR_7);

 *VAR_6 = 0;
 if (VAR_4->_r <= 0 && FUNC_2(VAR_4))
  return (VAR_1);
 do {
  VAR_9 = VAR_10->__mbrtowc(&VAR_8, VAR_4->_p, VAR_4->_r, VAR_5);
  if (VAR_9 == (size_t)-1) {
   VAR_4->_flags |= VAR_2;
   return (VAR_1);
  } else if (VAR_9 == (size_t)-2)
   continue;
  else if (VAR_9 == 0) {
   VAR_4->_p++;
   VAR_4->_r--;
   (*VAR_6)++;
   return (L'\0');
  } else {
   VAR_4->_p += VAR_9;
   VAR_4->_r -= VAR_9;
   *VAR_6 += VAR_9;
   return (VAR_8);
  }
 } while (FUNC_2(VAR_4) == 0);
 if (FUNC_1(VAR_4)) {
  VAR_4->_flags |= VAR_2;
  VAR_3 = VAR_0;
 }
 return (VAR_1);
}
