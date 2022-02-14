
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* uint16_t ;
typedef int tm ;
struct tm {void* tm_sec; void* tm_min; void* tm_hour; void* tm_mday; int tm_mon; int tm_year; } ;
struct TYPE_6__ {int abstract_file; int application_id; int biblio_file; int boot; int boot_catalog; int boot_load_seg; int boot_load_size; int compression_level; int copyright_file; char iso_level; int publisher; int volume_id; int zisofs; void* rr; int pad; int limit_dirs; int limit_depth; int joliet; int boot_type; int boot_info_table; int allow_vernum; } ;
struct TYPE_5__ {char compression_level; } ;
struct TYPE_4__ {void* boot_load_size; void* boot_load_seg; int catalog_filename; int boot_filename; } ;
struct iso9660 {TYPE_3__ opt; int volume_identifier; int publisher_identifier; int birth_time; int copyright_file_identifier; TYPE_2__ zisofs; TYPE_1__ el_torito; int bibliographic_file_identifier; int application_identifier; int abstract_file_identifier; } ;
struct archive_write {int archive; struct iso9660* format_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (struct archive_write*,int*,int,int,char const*,char const*) ;
 int FUNC_3 (struct archive_write*,int *,int,char const*,char const*) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (struct tm*,int ,int) ;
 int FUNC_6 (struct tm*) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (char const*) ;
 void* FUNC_9 (char*,int *,int) ;

__attribute__((used)) static int
FUNC_10(struct archive_write *VAR_22, const char *VAR_23, const char *VAR_24)
{
 struct iso9660 *VAR_25 = VAR_22->format_data;
 const char *VAR_26;
 int VAR_27;

 switch (VAR_23[0]) {
 case 'a':
  if (FUNC_7(VAR_23, "abstract-file") == 0) {
   VAR_27 = FUNC_3(VAR_22,
       &(VAR_25->abstract_file_identifier),
       VAR_0, VAR_23, VAR_24);
   VAR_25->opt.abstract_file = VAR_27 == VAR_5;
   return (VAR_27);
  }
  if (FUNC_7(VAR_23, "application-id") == 0) {
   VAR_27 = FUNC_3(VAR_22,
       &(VAR_25->application_identifier),
       VAR_1, VAR_23, VAR_24);
   VAR_25->opt.application_id = VAR_27 == VAR_5;
   return (VAR_27);
  }
  if (FUNC_7(VAR_23, "allow-vernum") == 0) {
   VAR_25->opt.allow_vernum = VAR_24 != ((void*)0);
   return (VAR_5);
  }
  break;
 case 'b':
  if (FUNC_7(VAR_23, "biblio-file") == 0) {
   VAR_27 = FUNC_3(VAR_22,
       &(VAR_25->bibliographic_file_identifier),
       VAR_7, VAR_23, VAR_24);
   VAR_25->opt.biblio_file = VAR_27 == VAR_5;
   return (VAR_27);
  }
  if (FUNC_7(VAR_23, "boot") == 0) {
   if (VAR_24 == ((void*)0))
    VAR_25->opt.boot = 0;
   else {
    VAR_25->opt.boot = 1;
    FUNC_1(
        &(VAR_25->el_torito.boot_filename),
        VAR_24);
   }
   return (VAR_5);
  }
  if (FUNC_7(VAR_23, "boot-catalog") == 0) {
   VAR_27 = FUNC_3(VAR_22,
       &(VAR_25->el_torito.catalog_filename),
       1024, VAR_23, VAR_24);
   VAR_25->opt.boot_catalog = VAR_27 == VAR_5;
   return (VAR_27);
  }
  if (FUNC_7(VAR_23, "boot-info-table") == 0) {
   VAR_25->opt.boot_info_table = VAR_24 != ((void*)0);
   return (VAR_5);
  }
  if (FUNC_7(VAR_23, "boot-load-seg") == 0) {
   uint32_t VAR_28;

   VAR_25->opt.boot_load_seg = 0;
   if (VAR_24 == ((void*)0))
    goto invalid_value;
   VAR_28 = 0;
   VAR_26 = VAR_24;
   if (VAR_26[0] == '0' && (VAR_26[1] == 'x' || VAR_26[1] == 'X'))
    VAR_26 += 2;
   while (*VAR_26) {
    if (VAR_28)
     VAR_28 <<= 4;
    if (*VAR_26 >= 'A' && *VAR_26 <= 'F')
     VAR_28 += *VAR_26 - 'A' + 0x0a;
    else if (*VAR_26 >= 'a' && *VAR_26 <= 'f')
     VAR_28 += *VAR_26 - 'a' + 0x0a;
    else if (*VAR_26 >= '0' && *VAR_26 <= '9')
     VAR_28 += *VAR_26 - '0';
    else
     goto invalid_value;
    if (VAR_28 > 0xffff) {
     FUNC_0(&VAR_22->archive,
         VAR_2,
         "Invalid value(over 0xffff) for "
         "option ``%s''", VAR_23);
     return (VAR_4);
    }
    VAR_26++;
   }
   VAR_25->el_torito.boot_load_seg = (uint16_t)VAR_28;
   VAR_25->opt.boot_load_seg = 1;
   return (VAR_5);
  }
  if (FUNC_7(VAR_23, "boot-load-size") == 0) {
   int VAR_29 = 0;
   VAR_27 = FUNC_2(VAR_22, &VAR_29, 0xffff, 1, VAR_23, VAR_24);
   VAR_25->opt.boot_load_size = VAR_27 == VAR_5;
   if (VAR_27 != VAR_5)
    return (VAR_4);
   VAR_25->el_torito.boot_load_size = (uint16_t)VAR_29;
   return (VAR_5);
  }
  if (FUNC_7(VAR_23, "boot-type") == 0) {
   if (VAR_24 == ((void*)0))
    goto invalid_value;
   if (FUNC_7(VAR_24, "no-emulation") == 0)
    VAR_25->opt.boot_type = VAR_11;
   else if (FUNC_7(VAR_24, "fd") == 0)
    VAR_25->opt.boot_type = VAR_9;
   else if (FUNC_7(VAR_24, "hard-disk") == 0)
    VAR_25->opt.boot_type = VAR_10;
   else
    goto invalid_value;
   return (VAR_5);
  }
  break;
 case 'c':
  if (FUNC_7(VAR_23, "compression-level") == 0) {
   FUNC_0(&VAR_22->archive,
       VAR_2,
       "Option ``%s'' "
       "is not supported on this platform.", VAR_23);
   return (VAR_4);

  }
  if (FUNC_7(VAR_23, "copyright-file") == 0) {
   VAR_27 = FUNC_3(VAR_22,
       &(VAR_25->copyright_file_identifier),
       VAR_8, VAR_23, VAR_24);
   VAR_25->opt.copyright_file = VAR_27 == VAR_5;
   return (VAR_27);
  }
  break;
 case 'i':
  if (FUNC_7(VAR_23, "iso-level") == 0) {
   if (VAR_24 != ((void*)0) && VAR_24[1] == '\0' &&
       (VAR_24[0] >= '1' && VAR_24[0] <= '4')) {
    VAR_25->opt.iso_level = VAR_24[0]-'0';
    return (VAR_5);
   }
   goto invalid_value;
  }
  break;
 case 'j':
  if (FUNC_7(VAR_23, "joliet") == 0) {
   if (VAR_24 == ((void*)0))
    VAR_25->opt.joliet = VAR_12;
   else if (FUNC_7(VAR_24, "1") == 0)
    VAR_25->opt.joliet = VAR_13;
   else if (FUNC_7(VAR_24, "long") == 0)
    VAR_25->opt.joliet = VAR_14;
   else
    goto invalid_value;
   return (VAR_5);
  }
  break;
 case 'l':
  if (FUNC_7(VAR_23, "limit-depth") == 0) {
   VAR_25->opt.limit_depth = VAR_24 != ((void*)0);
   return (VAR_5);
  }
  if (FUNC_7(VAR_23, "limit-dirs") == 0) {
   VAR_25->opt.limit_dirs = VAR_24 != ((void*)0);
   return (VAR_5);
  }
  break;
 case 'p':
  if (FUNC_7(VAR_23, "pad") == 0) {
   VAR_25->opt.pad = VAR_24 != ((void*)0);
   return (VAR_5);
  }
  if (FUNC_7(VAR_23, "publisher") == 0) {
   VAR_27 = FUNC_3(VAR_22,
       &(VAR_25->publisher_identifier),
       VAR_20, VAR_23, VAR_24);
   VAR_25->opt.publisher = VAR_27 == VAR_5;
   return (VAR_27);
  }
  break;
 case 'r':
  if (FUNC_7(VAR_23, "rockridge") == 0 ||
      FUNC_7(VAR_23, "Rockridge") == 0) {
   if (VAR_24 == ((void*)0))
    VAR_25->opt.rr = VAR_15;
   else if (FUNC_7(VAR_24, "1") == 0)
    VAR_25->opt.rr = VAR_17;
   else if (FUNC_7(VAR_24, "strict") == 0)
    VAR_25->opt.rr = VAR_16;
   else if (FUNC_7(VAR_24, "useful") == 0)
    VAR_25->opt.rr = VAR_17;
   else
    goto invalid_value;
   return (VAR_5);
  }
  break;
 case 'v':
  if (FUNC_7(VAR_23, "volume-id") == 0) {
   VAR_27 = FUNC_3(VAR_22, &(VAR_25->volume_identifier),
       VAR_21, VAR_23, VAR_24);
   VAR_25->opt.volume_id = VAR_27 == VAR_5;
   return (VAR_27);
  }
  break;
 case 'z':
  if (FUNC_7(VAR_23, "zisofs") == 0) {
   if (VAR_24 == ((void*)0))
    VAR_25->opt.zisofs = VAR_19;
   else {



    FUNC_0(&VAR_22->archive,
        VAR_2,
        "``zisofs'' "
        "is not supported on this platform.");
    return (VAR_4);

   }
   return (VAR_5);
  }
  break;
 }




 return (VAR_6);

invalid_value:
 FUNC_0(&VAR_22->archive, VAR_2,
     "Invalid value for option ``%s''", VAR_23);
 return (VAR_3);
}
