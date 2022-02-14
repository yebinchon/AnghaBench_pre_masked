
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
typedef int mbstate_t ;
typedef int locale_t ;
struct TYPE_2__ {size_t (* __mbrtowc ) (int *,char const*,size_t,int *) ;int mbrtowc; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 size_t FUNC_2 (int *,char const*,size_t,int *) ;

size_t
FUNC_3(wchar_t * __restrict VAR_0, const char * __restrict VAR_1,
    size_t VAR_2, mbstate_t * __restrict VAR_3, locale_t VAR_4)
{
 FUNC_0(VAR_4);
 if (VAR_3 == ((void*)0))
  VAR_3 = &(FUNC_1(VAR_4)->mbrtowc);
 return (FUNC_1(VAR_4)->__mbrtowc(VAR_0, VAR_1, VAR_2, VAR_3));
}
