
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mbstate_t ;
typedef int locale_t ;
typedef int char32_t ;
struct TYPE_2__ {int c32rtomb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_1 ;
 size_t FUNC_2 (char*,int,int *,int ) ;

size_t
FUNC_3(char * __restrict VAR_2, char32_t VAR_3, mbstate_t * __restrict VAR_4,
    locale_t VAR_5)
{


 if ((VAR_3 >= 0xd800 && VAR_3 <= 0xdfff) || VAR_3 > 0x10ffff) {
  VAR_1 = VAR_0;
  return ((size_t)-1);
 }

 FUNC_0(VAR_5);
 if (VAR_4 == ((void*)0))
  VAR_4 = &(FUNC_1(VAR_5)->c32rtomb);


 return (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5));
}
