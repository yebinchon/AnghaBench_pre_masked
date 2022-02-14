
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct xlocale_collate {scalar_t__ __collate_load_error; } ;
typedef TYPE_1__* locale_t ;
struct TYPE_4__ {scalar_t__* components; } ;


 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 size_t FUNC_1 (struct xlocale_collate*,int const*,int*,size_t) ;
 int FUNC_2 (int*,int const*) ;
 size_t FUNC_3 (int const*) ;
 int FUNC_4 (int*,int const*,size_t) ;

size_t
FUNC_5(wchar_t * __restrict VAR_1, const wchar_t * __restrict VAR_2, size_t VAR_3, locale_t VAR_4)
{
 size_t VAR_5;
 FUNC_0(VAR_4);
 struct xlocale_collate *VAR_6 =
  (struct xlocale_collate*)VAR_4->components[VAR_0];

 if (*VAR_2 == L'\0') {
  if (VAR_3 != 0)
   *VAR_1 = L'\0';
  return (0);
 }

 if ((VAR_6->__collate_load_error) ||
     ((VAR_5 = FUNC_1(VAR_6, VAR_2, VAR_1, VAR_3)) == (size_t)-1)) {
  goto error;
 }


 if (VAR_3 > VAR_5) {
  VAR_1[VAR_5] = 0;
 } else if (VAR_3) {
  VAR_1[VAR_3-1] = 0;
 }

 return (VAR_5);

error:
 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5 < VAR_3)
  (void) FUNC_2(VAR_1, VAR_2);
 else if (VAR_3 > 0) {
  (void) FUNC_4(VAR_1, VAR_2, VAR_3 - 1);
  VAR_1[VAR_3 - 1] = L'\0';
 }
 return (VAR_5);
}
