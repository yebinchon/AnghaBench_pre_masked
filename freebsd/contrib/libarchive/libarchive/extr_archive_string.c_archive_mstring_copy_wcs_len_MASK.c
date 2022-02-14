
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct archive_mstring {int aes_wcs; int aes_utf8; int aes_mbs; scalar_t__ aes_set; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,size_t) ;

int
FUNC_2(struct archive_mstring *VAR_1, const wchar_t *VAR_2,
    size_t VAR_3)
{
 if (VAR_2 == ((void*)0)) {
  VAR_1->aes_set = 0;
  return (0);
 }
 VAR_1->aes_set = VAR_0;
 FUNC_0(&(VAR_1->aes_mbs));
 FUNC_0(&(VAR_1->aes_utf8));
 FUNC_1(&(VAR_1->aes_wcs), VAR_2, VAR_3);
 return (0);
}
