
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct archive_string_conv {scalar_t__ cd_w; scalar_t__ cd; int flag; unsigned int from_cp; } ;
struct TYPE_4__ {char const* s; size_t length; } ;
struct archive_mstring {void* aes_set; TYPE_1__ aes_mbs; int aes_wcs; TYPE_1__ aes_utf8; } ;
typedef scalar_t__ iconv_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (TYPE_1__*,char const*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char const*,size_t,struct archive_string_conv*) ;
 int FUNC_3 (int *,char const*,size_t,struct archive_string_conv*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,size_t) ;

int
FUNC_6(struct archive_mstring *VAR_7,
    const char *VAR_8, size_t VAR_9, struct archive_string_conv *VAR_10)
{
 int VAR_11;

 if (VAR_8 == ((void*)0)) {
  VAR_7->aes_set = 0;
  return (0);
 }
 FUNC_1(&(VAR_7->aes_mbs));
 FUNC_4(&(VAR_7->aes_wcs));
 FUNC_1(&(VAR_7->aes_utf8));
 VAR_11 = FUNC_2(&(VAR_7->aes_mbs), VAR_8, VAR_9, VAR_10);
 if (VAR_11 == 0)
  VAR_7->aes_set = VAR_0;
 else
  VAR_7->aes_set = 0;

 return (VAR_11);
}
