
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_mstring {scalar_t__ aes_set; int aes_mbs_in_locale; int aes_utf8; int aes_mbs; int aes_wcs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct archive_mstring *VAR_0)
{
 FUNC_1(&(VAR_0->aes_wcs));
 FUNC_0(&(VAR_0->aes_mbs));
 FUNC_0(&(VAR_0->aes_utf8));
 FUNC_0(&(VAR_0->aes_mbs_in_locale));
 VAR_0->aes_set = 0;
}
