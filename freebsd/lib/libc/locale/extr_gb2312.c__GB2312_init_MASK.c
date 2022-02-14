
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlocale_ctype {int __mb_cur_max; int __mb_sb_limit; int __wcsnrtombs; int __mbsnrtowcs; int __mbsinit; int __wcrtomb; int __mbrtowc; int * runes; } ;
typedef int _RuneLocale ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_0(struct xlocale_ctype *VAR_5, _RuneLocale *VAR_6)
{

 VAR_5->runes = VAR_6;
 VAR_5->__mbrtowc = VAR_0;
 VAR_5->__wcrtomb = VAR_3;
 VAR_5->__mbsinit = VAR_1;
 VAR_5->__mbsnrtowcs = VAR_2;
 VAR_5->__wcsnrtombs = VAR_4;
 VAR_5->__mb_cur_max = 2;
 VAR_5->__mb_sb_limit = 128;
 return (0);
}
