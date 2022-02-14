
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
typedef int mbstate_t ;
typedef int locale_t ;
struct TYPE_2__ {size_t (* __wcsnrtombs ) (char*,int const**,int ,size_t,int *) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ) ;
 size_t FUNC_2 (char*,int const**,int ,size_t,int *) ;

size_t
FUNC_3(char * __restrict VAR_1, const wchar_t * __restrict VAR_2, size_t VAR_3,
  locale_t VAR_4)
{
 static const mbstate_t VAR_5;
 mbstate_t VAR_6;
 const wchar_t *VAR_7;
 FUNC_0(VAR_4);

 VAR_6 = VAR_5;
 VAR_7 = VAR_2;
 return (FUNC_1(VAR_4)->__wcsnrtombs(VAR_1, &VAR_7, VAR_0, VAR_3, &VAR_6));
}
