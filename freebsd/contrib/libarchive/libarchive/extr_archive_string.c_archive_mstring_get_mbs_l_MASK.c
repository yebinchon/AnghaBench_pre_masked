
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct archive_string_conv {int dummy; } ;
struct TYPE_7__ {char* s; size_t length; } ;
struct TYPE_6__ {int length; int s; } ;
struct archive_mstring {int aes_set; TYPE_2__ aes_mbs_in_locale; TYPE_2__ aes_mbs; TYPE_1__ aes_wcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,struct archive_string_conv*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char*,size_t,struct archive_string_conv*) ;
 scalar_t__ VAR_3 ;

int
FUNC_4(struct archive_mstring *VAR_4,
    const char **VAR_5, size_t *VAR_6, struct archive_string_conv *VAR_7)
{
 int VAR_8, VAR_9 = 0;
 if ((VAR_4->aes_set & VAR_0) == 0 &&
     (VAR_4->aes_set & VAR_1) != 0) {
  FUNC_2(&(VAR_4->aes_mbs));
  VAR_8 = FUNC_0(&(VAR_4->aes_mbs),
      VAR_4->aes_wcs.s, VAR_4->aes_wcs.length);
  if (VAR_8 == 0)
   VAR_4->aes_set |= VAR_0;
  else if (VAR_3 == VAR_2)
   return (-1);
  else
   VAR_9 = -1;
 }


 if (VAR_4->aes_set & VAR_0) {
  if (VAR_7 == ((void*)0)) {

   *VAR_5 = VAR_4->aes_mbs.s;
   if (VAR_6 != ((void*)0))
    *VAR_6 = VAR_4->aes_mbs.length;
   return (0);
  }
  VAR_9 = FUNC_3(&(VAR_4->aes_mbs_in_locale),
      VAR_4->aes_mbs.s, VAR_4->aes_mbs.length, VAR_7);
  *VAR_5 = VAR_4->aes_mbs_in_locale.s;
  if (VAR_6 != ((void*)0))
   *VAR_6 = VAR_4->aes_mbs_in_locale.length;
 } else {
  *VAR_5 = ((void*)0);
  if (VAR_6 != ((void*)0))
   *VAR_6 = 0;
 }
 return (VAR_9);
}
