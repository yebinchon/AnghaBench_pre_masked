
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* s; } ;
struct TYPE_4__ {int length; int s; } ;
struct archive_mstring {int aes_set; TYPE_2__ aes_mbs; TYPE_1__ aes_wcs; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

int
FUNC_2(struct archive *VAR_2, struct archive_mstring *VAR_3,
    const char **VAR_4)
{
 int VAR_5, VAR_6 = 0;

 (void)VAR_2;

 if (VAR_3->aes_set & VAR_0) {
  *VAR_4 = VAR_3->aes_mbs.s;
  return (VAR_6);
 }

 *VAR_4 = ((void*)0);

 if (VAR_3->aes_set & VAR_1) {
  FUNC_1(&(VAR_3->aes_mbs));
  VAR_5 = FUNC_0(&(VAR_3->aes_mbs),
      VAR_3->aes_wcs.s, VAR_3->aes_wcs.length);
  *VAR_4 = VAR_3->aes_mbs.s;
  if (VAR_5 == 0) {
   VAR_3->aes_set |= VAR_0;
   return (VAR_6);
  } else
   VAR_6 = -1;
 }





 return (VAR_6);
}
