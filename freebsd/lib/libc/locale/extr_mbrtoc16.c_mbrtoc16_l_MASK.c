
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int mbstate_t ;
typedef int locale_t ;
typedef int char32_t ;
typedef int char16_t ;
struct TYPE_3__ {int trail_surrogate; int c32_mbstate; } ;
typedef TYPE_1__ _Char16State ;
struct TYPE_4__ {int mbrtoc16; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 size_t FUNC_2 (int*,char const*,size_t,int *,int ) ;

size_t
FUNC_3(char16_t * __restrict VAR_0, const char * __restrict VAR_1, size_t VAR_2,
    mbstate_t * __restrict VAR_3, locale_t VAR_4)
{
 _Char16State *VAR_5;
 char32_t VAR_6;
 ssize_t VAR_7;

 FUNC_0(VAR_4);
 if (VAR_3 == ((void*)0))
  VAR_3 = &(FUNC_1(VAR_4)->mbrtoc16);
 VAR_5 = (_Char16State *)VAR_3;






 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0)) {
  VAR_5->trail_surrogate = 0;
  return (FUNC_2(((void*)0), VAR_1, VAR_2, &VAR_5->c32_mbstate, VAR_4));
 }


 if (VAR_5->trail_surrogate >= 0xdc00 && VAR_5->trail_surrogate <= 0xdfff) {
  *VAR_0 = VAR_5->trail_surrogate;
  VAR_5->trail_surrogate = 0;
  return ((size_t)-3);
 }

 VAR_7 = FUNC_2(&VAR_6, VAR_1, VAR_2, &VAR_5->c32_mbstate, VAR_4);
 if (VAR_7 >= 0) {
  if (VAR_6 < 0x10000) {

   *VAR_0 = VAR_6;
  } else {

   VAR_6 -= 0x10000;
   *VAR_0 = 0xd800 | (VAR_6 >> 10);
   VAR_5->trail_surrogate = 0xdc00 | (VAR_6 & 0x3ff);
  }
 }
 return (VAR_7);
}
