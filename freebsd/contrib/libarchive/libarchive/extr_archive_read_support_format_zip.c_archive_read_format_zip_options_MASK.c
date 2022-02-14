
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zip {int init_default_conversion; int ignore_crc32; int process_mac_extensions; int crc32func; int * sconv; int * sconv_utf8; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,char*) ;
 int * FUNC_1 (int *,char const*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int
FUNC_3(struct archive_read *VAR_7,
    const char *VAR_8, const char *VAR_9)
{
 struct zip *VAR_10;
 int VAR_11 = VAR_1;

 VAR_10 = (struct zip *)(VAR_7->format->data);
 if (FUNC_2(VAR_8, "compat-2x") == 0) {

  VAR_10->init_default_conversion = (VAR_9 != ((void*)0)) ? 1 : 0;
  return (VAR_3);
 } else if (FUNC_2(VAR_8, "hdrcharset") == 0) {
  if (VAR_9 == ((void*)0) || VAR_9[0] == 0)
   FUNC_0(&VAR_7->archive, VAR_0,
       "zip: hdrcharset option needs a character-set name"
   );
  else {
   VAR_10->sconv = FUNC_1(
       &VAR_7->archive, VAR_9, 0);
   if (VAR_10->sconv != ((void*)0)) {
    if (FUNC_2(VAR_9, "UTF-8") == 0)
     VAR_10->sconv_utf8 = VAR_10->sconv;
    VAR_11 = VAR_3;
   } else
    VAR_11 = VAR_2;
  }
  return (VAR_11);
 } else if (FUNC_2(VAR_8, "ignorecrc32") == 0) {

  if (VAR_9 == ((void*)0) || VAR_9[0] == 0) {
   VAR_10->crc32func = VAR_6;
   VAR_10->ignore_crc32 = 0;
  } else {
   VAR_10->crc32func = VAR_5;
   VAR_10->ignore_crc32 = 1;
  }
  return (VAR_3);
 } else if (FUNC_2(VAR_8, "mac-ext") == 0) {
  VAR_10->process_mac_extensions = (VAR_9 != ((void*)0) && VAR_9[0] != 0);
  return (VAR_3);
 }




 return (VAR_4);
}
