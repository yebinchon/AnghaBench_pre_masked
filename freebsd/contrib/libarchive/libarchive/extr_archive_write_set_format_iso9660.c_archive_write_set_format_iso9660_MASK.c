
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_18__ {scalar_t__* s; } ;
struct TYPE_14__ {TYPE_6__* rootent; int * pathtbl; int vdd_type; scalar_t__ max_depth; } ;
struct TYPE_13__ {int zisofs; int volume_id; int rr; int publisher; int pad; int limit_dirs; int limit_depth; int joliet; int iso_level; int copyright_file; int compression_level; int boot_type; int boot_load_size; int boot_load_seg; int boot_info_table; int boot_catalog; int boot; int biblio_file; int allow_vernum; int application_id; int abstract_file; } ;
struct TYPE_12__ {int compression_level; int stream; scalar_t__ stream_valid; scalar_t__ block_pointers_allocated; int * block_pointers; } ;
struct TYPE_16__ {int boot_load_size; scalar_t__ boot_load_seg; TYPE_7__ id; int platform_id; int * boot; TYPE_7__ boot_filename; TYPE_7__ catalog_filename; int * catalog; } ;
struct TYPE_15__ {int * pathtbl; int vdd_type; scalar_t__ max_depth; int * rootent; } ;
struct iso9660 {int temp_fd; int dircnt_max; int * sconv_from_utf16be; int * sconv_to_utf16be; TYPE_7__ cur_dirstr; TYPE_3__ primary; TYPE_6__* cur_dirent; TYPE_2__ opt; TYPE_1__ zisofs; TYPE_5__ el_torito; TYPE_7__ bibliographic_file_identifier; TYPE_7__ abstract_file_identifier; TYPE_7__ copyright_file_identifier; TYPE_7__ application_identifier; TYPE_7__ data_preparer_identifier; TYPE_7__ publisher_identifier; TYPE_7__ volume_identifier; TYPE_7__ mbs; TYPE_7__ utf16be; scalar_t__ wbuff_tail; scalar_t__ wbuff_written; scalar_t__ wbuff_offset; int wbuff_type; int wbuff_remaining; int * directories_too_deep; TYPE_4__ joliet; int * cur_file; scalar_t__ birth_time; } ;
struct TYPE_11__ {char* archive_format_name; int archive_format; } ;
struct archive_write {char* format_name; TYPE_10__ archive; int (* format_free ) (struct archive_write*) ;int format_close; int format_finish_entry; int format_write_data; int format_write_header; int format_options; struct iso9660* format_data; } ;
struct archive {int dummy; } ;
struct TYPE_17__ {struct TYPE_17__* parent; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;
 int FUNC_1 (TYPE_10__*,int ,char*) ;
 int FUNC_2 (TYPE_7__*,char*) ;
 int FUNC_3 (TYPE_7__*,int) ;
 int FUNC_4 (TYPE_7__*) ;
 char* FUNC_5 () ;
 struct iso9660* FUNC_6 (int,int) ;
 int FUNC_7 (struct iso9660*) ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_8 (struct archive_write*) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 TYPE_6__* FUNC_9 (struct archive_write*,struct iso9660*,char*) ;
 int FUNC_10 (struct iso9660*) ;
 int FUNC_11 (struct iso9660*) ;
 int FUNC_12 (struct iso9660*) ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (struct archive_write*) ;
 int FUNC_15 () ;

int
FUNC_16(struct archive *VAR_37)
{
 struct archive_write *VAR_38 = (struct archive_write *)VAR_37;
 struct iso9660 *VAR_39;

 FUNC_0(VAR_37, VAR_4,
     VAR_3, "archive_write_set_format_iso9660");


 if (VAR_38->format_free != ((void*)0))
  (VAR_38->format_free)(VAR_38);

 VAR_39 = FUNC_6(1, sizeof(*VAR_39));
 if (VAR_39 == ((void*)0)) {
  FUNC_1(&VAR_38->archive, VAR_7,
      "Can't allocate iso9660 data");
  return (VAR_0);
 }
 VAR_39->birth_time = 0;
 VAR_39->temp_fd = -1;
 VAR_39->cur_file = ((void*)0);
 VAR_39->primary.max_depth = 0;
 VAR_39->primary.vdd_type = VAR_30;
 VAR_39->primary.pathtbl = ((void*)0);
 VAR_39->joliet.rootent = ((void*)0);
 VAR_39->joliet.max_depth = 0;
 VAR_39->joliet.vdd_type = VAR_29;
 VAR_39->joliet.pathtbl = ((void*)0);
 FUNC_11(VAR_39);
 FUNC_10(VAR_39);
 FUNC_12(VAR_39);
 VAR_39->directories_too_deep = ((void*)0);
 VAR_39->dircnt_max = 1;
 VAR_39->wbuff_remaining = FUNC_15();
 VAR_39->wbuff_type = VAR_31;
 VAR_39->wbuff_offset = 0;
 VAR_39->wbuff_written = 0;
 VAR_39->wbuff_tail = 0;
 FUNC_4(&(VAR_39->utf16be));
 FUNC_4(&(VAR_39->mbs));




 FUNC_4(&(VAR_39->volume_identifier));
 FUNC_2(&(VAR_39->volume_identifier), "CDROM");
 FUNC_4(&(VAR_39->publisher_identifier));
 FUNC_4(&(VAR_39->data_preparer_identifier));
 FUNC_4(&(VAR_39->application_identifier));
 FUNC_2(&(VAR_39->application_identifier),
     FUNC_5());
 FUNC_4(&(VAR_39->copyright_file_identifier));
 FUNC_4(&(VAR_39->abstract_file_identifier));
 FUNC_4(&(VAR_39->bibliographic_file_identifier));




 FUNC_4(&(VAR_39->el_torito.catalog_filename));
 VAR_39->el_torito.catalog = ((void*)0);

 FUNC_2(&(VAR_39->el_torito.catalog_filename),
     "boot.catalog");
 FUNC_4(&(VAR_39->el_torito.boot_filename));
 VAR_39->el_torito.boot = ((void*)0);
 VAR_39->el_torito.platform_id = VAR_6;
 FUNC_4(&(VAR_39->el_torito.id));
 VAR_39->el_torito.boot_load_seg = 0;
 VAR_39->el_torito.boot_load_size = VAR_5;
 VAR_39->opt.abstract_file = VAR_8;
 VAR_39->opt.application_id = VAR_10;
 VAR_39->opt.allow_vernum = VAR_9;
 VAR_39->opt.biblio_file = VAR_11;
 VAR_39->opt.boot = VAR_13;
 VAR_39->opt.boot_catalog = VAR_12;
 VAR_39->opt.boot_info_table = VAR_14;
 VAR_39->opt.boot_load_seg = VAR_15;
 VAR_39->opt.boot_load_size = VAR_16;
 VAR_39->opt.boot_type = VAR_17;
 VAR_39->opt.compression_level = VAR_18;
 VAR_39->opt.copyright_file = VAR_19;
 VAR_39->opt.iso_level = VAR_20;
 VAR_39->opt.joliet = VAR_21;
 VAR_39->opt.limit_depth = VAR_22;
 VAR_39->opt.limit_dirs = VAR_23;
 VAR_39->opt.pad = VAR_24;
 VAR_39->opt.publisher = VAR_25;
 VAR_39->opt.rr = VAR_26;
 VAR_39->opt.volume_id = VAR_27;
 VAR_39->opt.zisofs = VAR_28;


 VAR_39->primary.rootent =
     FUNC_9(VAR_38, VAR_39, "");
 if (VAR_39->primary.rootent == ((void*)0)) {
  FUNC_7(VAR_39);
  FUNC_1(&VAR_38->archive, VAR_7,
      "Can't allocate memory");
  return (VAR_0);
 }
 VAR_39->primary.rootent->parent = VAR_39->primary.rootent;
 VAR_39->cur_dirent = VAR_39->primary.rootent;
 FUNC_4(&(VAR_39->cur_dirstr));
 FUNC_3(&(VAR_39->cur_dirstr), 1);
 VAR_39->cur_dirstr.s[0] = 0;
 VAR_39->sconv_to_utf16be = ((void*)0);
 VAR_39->sconv_from_utf16be = ((void*)0);

 VAR_38->format_data = VAR_39;
 VAR_38->format_name = "iso9660";
 VAR_38->format_options = VAR_34;
 VAR_38->format_write_header = VAR_36;
 VAR_38->format_write_data = VAR_35;
 VAR_38->format_finish_entry = VAR_33;
 VAR_38->format_close = VAR_32;
 VAR_38->format_free = FUNC_8;
 VAR_38->archive.archive_format = VAR_1;
 VAR_38->archive.archive_format_name = "ISO9660";

 return (VAR_2);
}
