
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_mstring {int aes_wcs; int aes_utf8; int aes_mbs; int aes_set; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

void
FUNC_2(struct archive_mstring *VAR_0, struct archive_mstring *VAR_1)
{
 VAR_0->aes_set = VAR_1->aes_set;
 FUNC_0(&(VAR_0->aes_mbs), &(VAR_1->aes_mbs));
 FUNC_0(&(VAR_0->aes_utf8), &(VAR_1->aes_utf8));
 FUNC_1(&(VAR_0->aes_wcs), &(VAR_1->aes_wcs));
}
