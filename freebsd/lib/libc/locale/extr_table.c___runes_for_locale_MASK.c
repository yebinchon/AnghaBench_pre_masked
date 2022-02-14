
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlocale_ctype {int __mb_sb_limit; int * runes; } ;
typedef int locale_t ;
typedef int _RuneLocale ;


 int FUNC_0 (int ) ;
 struct xlocale_ctype* FUNC_1 (int ) ;

_RuneLocale *
FUNC_2(locale_t VAR_0, int *VAR_1)
{
 FUNC_0(VAR_0);
 struct xlocale_ctype *VAR_2 = FUNC_1(VAR_0);
 *VAR_1 = VAR_2->__mb_sb_limit;
 return VAR_2->runes;
}
