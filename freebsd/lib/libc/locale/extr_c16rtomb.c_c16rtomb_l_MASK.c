
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int mbstate_t ;
typedef int locale_t ;
typedef int char32_t ;
typedef int char16_t ;
struct TYPE_3__ {int lead_surrogate; int c32_mbstate; } ;
typedef TYPE_1__ _Char16State ;
struct TYPE_4__ {int c16rtomb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 size_t FUNC_2 (char*,int,int *,int ) ;
 int VAR_1 ;

size_t
FUNC_3(char * __restrict VAR_2, char16_t VAR_3, mbstate_t * __restrict VAR_4,
    locale_t VAR_5)
{
 _Char16State *VAR_6;
 char32_t VAR_7;

 FUNC_0(VAR_5);
 if (VAR_4 == ((void*)0))
  VAR_4 = &(FUNC_1(VAR_5)->c16rtomb);
 VAR_6 = (_Char16State *)VAR_4;


 if (VAR_2 == ((void*)0)) {
  VAR_7 = 0;
 } else if (VAR_6->lead_surrogate >= 0xd800 &&
     VAR_6->lead_surrogate <= 0xdbff) {

  if (VAR_3 < 0xdc00 || VAR_3 > 0xdfff) {
   VAR_1 = VAR_0;
   return ((size_t)-1);
  }
  VAR_7 = 0x10000 + ((VAR_6->lead_surrogate & 0x3ff) << 10 |
      (VAR_3 & 0x3ff));
 } else if (VAR_3 >= 0xd800 && VAR_3 <= 0xdbff) {

  VAR_6->lead_surrogate = VAR_3;
  return (0);
 } else {

  VAR_7 = VAR_3;
 }
 VAR_6->lead_surrogate = 0;

 return (FUNC_2(VAR_2, VAR_7, &VAR_6->c32_mbstate, VAR_5));
}
