
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
struct xlocale_collate {scalar_t__ __collate_load_error; } ;
typedef TYPE_1__* locale_t ;
struct TYPE_5__ {scalar_t__* components; } ;


 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 size_t FUNC_1 (struct xlocale_collate*,int *,char*,size_t) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (size_t) ;
 size_t FUNC_4 (int *,char const*,size_t,TYPE_1__*) ;
 int FUNC_5 (char*,char const*,size_t) ;
 size_t FUNC_6 (char const*) ;

size_t
FUNC_7(char * __restrict VAR_1, const char * __restrict VAR_2, size_t VAR_3, locale_t VAR_4)
{
 size_t VAR_5;
 size_t VAR_6;
 wchar_t *VAR_7 = ((void*)0);

 FUNC_0(VAR_4);
 struct xlocale_collate *VAR_8 =
  (struct xlocale_collate*)VAR_4->components[VAR_0];

 if (!*VAR_2) {
  if (VAR_3 > 0)
   *VAR_1 = '\0';
  return (0);
 }






 VAR_5 = FUNC_6(VAR_2);

 if (VAR_8->__collate_load_error)
  goto error;

 if ((VAR_7 = FUNC_3((VAR_5 + 1) * sizeof (wchar_t))) == ((void*)0))
  goto error;

 if (FUNC_4(VAR_7, VAR_2, VAR_5 + 1, VAR_4) == (size_t)-1)
  goto error;

 if ((VAR_6 = FUNC_1(VAR_8, VAR_7, VAR_1, VAR_3)) == (size_t)-1)
  goto error;

 FUNC_2(VAR_7);

 if (VAR_3 > VAR_6) {
  VAR_1[VAR_6] = 0;
 } else if (VAR_3) {
  VAR_1[VAR_3-1] = 0;
 }

 return (VAR_6);

error:

 FUNC_2(VAR_7);
 FUNC_5(VAR_1, VAR_2, VAR_3);

 return (VAR_5);
}
