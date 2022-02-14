
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
typedef int mbstate_t ;
typedef int locale_t ;
struct TYPE_2__ {size_t (* __wcsnrtombs ) (char*,int const**,int ,size_t,int *) ;int wcsrtombs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ) ;
 size_t FUNC_2 (char*,int const**,int ,size_t,int *) ;

size_t
FUNC_3(char * __restrict VAR_1, const wchar_t ** __restrict VAR_2, size_t VAR_3,
    mbstate_t * __restrict VAR_4, locale_t VAR_5)
{
 FUNC_0(VAR_5);
 if (VAR_4 == ((void*)0))
  VAR_4 = &(FUNC_1(VAR_5)->wcsrtombs);
 return (FUNC_1(VAR_5)->__wcsnrtombs(VAR_1, VAR_2, VAR_0, VAR_3, VAR_4));
}
