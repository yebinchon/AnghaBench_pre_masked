
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct archive_string_conv {int dummy; } ;
struct TYPE_4__ {char* s; } ;
struct TYPE_3__ {int length; int s; } ;
struct archive_mstring {int aes_set; TYPE_2__ aes_utf8; TYPE_1__ aes_mbs; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct archive_string_conv* FUNC_0 (struct archive*,char*,int) ;
 int FUNC_1 (TYPE_2__*,int ,int ,struct archive_string_conv*) ;
 int FUNC_2 (struct archive_string_conv*) ;

int
FUNC_3(struct archive *VAR_2, struct archive_mstring *VAR_3,
  const char **VAR_4)
{
 struct archive_string_conv *VAR_5;
 int VAR_6;


 if (VAR_3->aes_set & VAR_1) {
  *VAR_4 = VAR_3->aes_utf8.s;
  return (0);
 }

 *VAR_4 = ((void*)0);
 if (VAR_3->aes_set & VAR_0) {
  VAR_5 = FUNC_0(VAR_2, "UTF-8", 1);
  if (VAR_5 == ((void*)0))
   return (-1);
  VAR_6 = FUNC_1(&(VAR_3->aes_utf8), VAR_3->aes_mbs.s,
      VAR_3->aes_mbs.length, VAR_5);
  if (VAR_2 == ((void*)0))
   FUNC_2(VAR_5);
  if (VAR_6 == 0) {
   VAR_3->aes_set |= VAR_1;
   *VAR_4 = VAR_3->aes_utf8.s;
   return (0);
  } else
   return (-1);
 }
 return (0);
}
