
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_13__ {scalar_t__ abstract_file; scalar_t__ application_id; scalar_t__ allow_vernum; scalar_t__ biblio_file; scalar_t__ boot; scalar_t__ boot_catalog; scalar_t__ boot_info_table; scalar_t__ boot_load_seg; scalar_t__ boot_load_size; scalar_t__ boot_type; scalar_t__ compression_level; scalar_t__ copyright_file; char* iso_level; char* joliet; char* limit_depth; char* limit_dirs; char* pad; scalar_t__ publisher; char* rr; scalar_t__ volume_id; char* zisofs; } ;
struct TYPE_17__ {char* s; } ;
struct TYPE_16__ {char* s; } ;
struct TYPE_15__ {char* s; } ;
struct TYPE_14__ {char* compression_level; } ;
struct TYPE_22__ {char* s; } ;
struct TYPE_21__ {char* s; } ;
struct TYPE_12__ {char* boot_load_seg; char* boot_load_size; TYPE_9__ catalog_filename; TYPE_8__ boot_filename; } ;
struct TYPE_20__ {char* s; } ;
struct TYPE_19__ {char* s; } ;
struct TYPE_18__ {char* s; } ;
struct iso9660 {TYPE_11__ opt; TYPE_4__ volume_identifier; TYPE_3__ publisher_identifier; TYPE_2__ copyright_file_identifier; TYPE_1__ zisofs; TYPE_10__ el_torito; TYPE_7__ bibliographic_file_identifier; TYPE_6__ application_identifier; TYPE_5__ abstract_file_identifier; int birth_time; } ;
struct archive_write {int archive; scalar_t__ format_data; } ;
struct archive_string {int s; } ;
typedef int buf ;
typedef int __time64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 char* VAR_23 ;
 char* VAR_24 ;
 char* VAR_25 ;
 char* VAR_26 ;
 char* VAR_27 ;
 char* VAR_28 ;
 scalar_t__ VAR_29 ;
 char* VAR_30 ;
 char* VAR_31 ;
 char* VAR_32 ;
 char* VAR_33 ;
 scalar_t__ VAR_34 ;
 char* VAR_35 ;
 int FUNC_0 (char*,int,int *) ;
 int FUNC_1 (int *,int ,char*) ;
 int * FUNC_2 (struct archive_string*,size_t) ;
 int FUNC_3 (struct archive_string*) ;
 int FUNC_4 (struct archive_string*) ;
 int FUNC_5 (struct archive_string*,char*,char*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int ,int ,size_t) ;
 int FUNC_10 (int ,int ,size_t) ;
 int FUNC_11 (struct archive_string*,int*,char*,int ,char const*) ;
 int FUNC_12 (char*,int ,int) ;
 int FUNC_13 (struct archive_write*) ;
 int FUNC_14 (struct archive_write*,size_t) ;
 size_t FUNC_15 (struct archive_write*) ;
 int FUNC_16 (struct archive_write*) ;

__attribute__((used)) static int
FUNC_17(struct archive_write *VAR_36)
{
 struct iso9660 *VAR_37;
 char VAR_38[128];
 const char *VAR_39;
 int VAR_40, VAR_41;
 struct archive_string VAR_42;
 size_t VAR_43 = VAR_7 *
          VAR_8;

 VAR_37 = (struct iso9660 *)VAR_36->format_data;
 if (VAR_43 > FUNC_15(VAR_36)) {
  VAR_41 = FUNC_16(VAR_36);
  if (VAR_41 != VAR_1)
   return (VAR_41);
 }
 FUNC_4(&VAR_42);
 if (FUNC_2(&VAR_42, VAR_43) == ((void*)0)) {
  FUNC_1(&VAR_36->archive, VAR_2,
      "Can't allocate memory");
  return (VAR_0);
 }
 FUNC_10(VAR_42.s, 0, VAR_43);
 VAR_40 = 0;
 FUNC_12(VAR_38, FUNC_7(&(VAR_37->birth_time)), sizeof(VAR_38)-1);
 VAR_38[sizeof(VAR_38)-1] = '\0';

 FUNC_5(&VAR_42,
     "INFO %s%s", VAR_38, FUNC_6());
 if (VAR_37->opt.abstract_file != VAR_9)
  FUNC_11(&VAR_42, &VAR_40, "abstract-file",
      VAR_6, VAR_37->abstract_file_identifier.s);
 if (VAR_37->opt.application_id != VAR_11)
  FUNC_11(&VAR_42, &VAR_40, "application-id",
      VAR_6, VAR_37->application_identifier.s);
 if (VAR_37->opt.allow_vernum != VAR_10)
  FUNC_11(&VAR_42, &VAR_40, "allow-vernum",
      VAR_3, VAR_37->opt.allow_vernum);
 if (VAR_37->opt.biblio_file != VAR_12)
  FUNC_11(&VAR_42, &VAR_40, "biblio-file",
      VAR_6, VAR_37->bibliographic_file_identifier.s);
 if (VAR_37->opt.boot != VAR_14)
  FUNC_11(&VAR_42, &VAR_40, "boot",
      VAR_6, VAR_37->el_torito.boot_filename.s);
 if (VAR_37->opt.boot_catalog != VAR_13)
  FUNC_11(&VAR_42, &VAR_40, "boot-catalog",
      VAR_6, VAR_37->el_torito.catalog_filename.s);
 if (VAR_37->opt.boot_info_table != VAR_15)
  FUNC_11(&VAR_42, &VAR_40, "boot-info-table",
      VAR_3, VAR_37->opt.boot_info_table);
 if (VAR_37->opt.boot_load_seg != VAR_16)
  FUNC_11(&VAR_42, &VAR_40, "boot-load-seg",
      VAR_4, VAR_37->el_torito.boot_load_seg);
 if (VAR_37->opt.boot_load_size != VAR_17)
  FUNC_11(&VAR_42, &VAR_40, "boot-load-size",
      VAR_5, VAR_37->el_torito.boot_load_size);
 if (VAR_37->opt.boot_type != VAR_18) {
  VAR_39 = "no-emulation";
  if (VAR_37->opt.boot_type == VAR_19)
   VAR_39 = "fd";
  if (VAR_37->opt.boot_type == VAR_20)
   VAR_39 = "hard-disk";
  FUNC_11(&VAR_42, &VAR_40, "boot-type",
      VAR_6, VAR_39);
 }





 if (VAR_37->opt.copyright_file != VAR_22)
  FUNC_11(&VAR_42, &VAR_40, "copyright-file",
      VAR_6, VAR_37->copyright_file_identifier.s);
 if (VAR_37->opt.iso_level != VAR_23)
  FUNC_11(&VAR_42, &VAR_40, "iso-level",
      VAR_5, VAR_37->opt.iso_level);
 if (VAR_37->opt.joliet != VAR_24) {
  if (VAR_37->opt.joliet == VAR_25)
   FUNC_11(&VAR_42, &VAR_40, "joliet",
       VAR_6, "long");
  else
   FUNC_11(&VAR_42, &VAR_40, "joliet",
       VAR_3, VAR_37->opt.joliet);
 }
 if (VAR_37->opt.limit_depth != VAR_26)
  FUNC_11(&VAR_42, &VAR_40, "limit-depth",
      VAR_3, VAR_37->opt.limit_depth);
 if (VAR_37->opt.limit_dirs != VAR_27)
  FUNC_11(&VAR_42, &VAR_40, "limit-dirs",
      VAR_3, VAR_37->opt.limit_dirs);
 if (VAR_37->opt.pad != VAR_28)
  FUNC_11(&VAR_42, &VAR_40, "pad",
      VAR_3, VAR_37->opt.pad);
 if (VAR_37->opt.publisher != VAR_29)
  FUNC_11(&VAR_42, &VAR_40, "publisher",
      VAR_6, VAR_37->publisher_identifier.s);
 if (VAR_37->opt.rr != VAR_30) {
  if (VAR_37->opt.rr == VAR_31)
   FUNC_11(&VAR_42, &VAR_40, "rockridge",
       VAR_3, VAR_37->opt.rr);
  else if (VAR_37->opt.rr == VAR_32)
   FUNC_11(&VAR_42, &VAR_40, "rockridge",
       VAR_6, "strict");
  else if (VAR_37->opt.rr == VAR_33)
   FUNC_11(&VAR_42, &VAR_40, "rockridge",
       VAR_6, "useful");
 }
 if (VAR_37->opt.volume_id != VAR_34)
  FUNC_11(&VAR_42, &VAR_40, "volume-id",
      VAR_6, VAR_37->volume_identifier.s);
 if (VAR_37->opt.zisofs != VAR_35)
  FUNC_11(&VAR_42, &VAR_40, "zisofs",
      VAR_3, VAR_37->opt.zisofs);

 FUNC_9(FUNC_13(VAR_36), VAR_42.s, VAR_43);
 FUNC_3(&VAR_42);
 return (FUNC_14(VAR_36, VAR_43));
}
