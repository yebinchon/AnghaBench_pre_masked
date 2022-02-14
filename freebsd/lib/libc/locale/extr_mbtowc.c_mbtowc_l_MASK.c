
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
typedef int mbstate_t ;
typedef int locale_t ;
struct TYPE_2__ {size_t (* __mbrtowc ) (int *,char const*,size_t,int *) ;int mbtowc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_1 ;
 size_t FUNC_2 (int *,char const*,size_t,int *) ;

int
FUNC_3(wchar_t * __restrict VAR_2, const char * __restrict VAR_3, size_t VAR_4, locale_t VAR_5)
{
 static const mbstate_t VAR_6;
 size_t VAR_7;
 FUNC_0(VAR_5);

 if (VAR_3 == ((void*)0)) {

  FUNC_1(VAR_5)->mbtowc = VAR_6;
  return (0);
 }
 VAR_7 = FUNC_1(VAR_5)->__mbrtowc(VAR_2, VAR_3, VAR_4,
     &(FUNC_1(VAR_5)->mbtowc));
 switch (VAR_7) {
 case (size_t)-2:
  VAR_1 = VAR_0;

 case (size_t)-1:
  return (-1);
 default:
  return ((int)VAR_7);
 }
}
