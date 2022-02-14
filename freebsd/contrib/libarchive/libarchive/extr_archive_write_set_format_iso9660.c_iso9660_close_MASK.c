
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int iso_level; scalar_t__ pad; scalar_t__ rr; scalar_t__ joliet; scalar_t__ boot; scalar_t__ boot_info_table; } ;
struct TYPE_11__ {int location_type_L_path_table; int location_type_M_path_table; int vdd_type; scalar_t__ total_dir_block; scalar_t__ path_table_block; int rootent; } ;
struct iso9660 {scalar_t__ birth_time; int location_rrip_er; int volume_space_size; int volume_sequence_number; TYPE_2__* directories_too_deep; TYPE_3__ opt; TYPE_4__ joliet; TYPE_4__ primary; scalar_t__ wbuff_tail; scalar_t__ wbuff_written; scalar_t__ wbuff_offset; int wbuff_type; int wbuff_remaining; scalar_t__ total_file_block; int * sconv_from_utf16be; int * sconv_to_utf16be; } ;
struct archive_write {int archive; struct iso9660* format_data; } ;
struct TYPE_9__ {TYPE_1__* file; } ;
struct TYPE_8__ {int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int * FUNC_2 (int *,char*,int) ;
 int * FUNC_3 (int *,char*,int) ;
 int FUNC_4 (struct archive_write*,int *,int ) ;
 int FUNC_5 (struct archive_write*,int ) ;
 int FUNC_6 (struct archive_write*,int ) ;
 int FUNC_7 (struct archive_write*) ;
 int FUNC_8 (struct iso9660*,int,TYPE_4__*) ;
 int FUNC_9 (struct iso9660*,int) ;
 int FUNC_10 (struct archive_write*) ;
 int FUNC_11 (scalar_t__*) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (struct archive_write*) ;
 int FUNC_14 (struct archive_write*) ;
 int FUNC_15 (struct archive_write*,TYPE_4__*) ;
 int FUNC_16 (struct archive_write*) ;
 int FUNC_17 (struct archive_write*) ;
 int FUNC_18 (struct archive_write*,TYPE_4__*) ;
 int FUNC_19 (struct archive_write*) ;
 int FUNC_20 (struct archive_write*) ;
 int FUNC_21 (struct archive_write*,int) ;
 int FUNC_22 (struct archive_write*,int,TYPE_4__*) ;
 int FUNC_23 (struct archive_write*) ;
 int FUNC_24 (struct archive_write*) ;

__attribute__((used)) static int
FUNC_25(struct archive_write *VAR_16)
{
 struct iso9660 *VAR_17;
 int VAR_18, VAR_19;

 VAR_17 = VAR_16->format_data;




 if (FUNC_13(VAR_16) > 0) {
  VAR_18 = FUNC_14(VAR_16);
  if (VAR_18 < 0)
   return (VAR_18);
 }







  FUNC_11(&(VAR_17->birth_time));




 if (VAR_17->opt.boot) {

  VAR_18 = FUNC_6(VAR_16, VAR_17->primary.rootent);
  if (VAR_18 < 0)
   return (VAR_18);


  VAR_18 = FUNC_24(VAR_16);
  if (VAR_18 < 0)
   return (VAR_18);

  if (FUNC_13(VAR_16) > 0) {
   VAR_18 = FUNC_14(VAR_16);
   if (VAR_18 < 0)
    return (VAR_18);
  }

  VAR_18 = FUNC_5(VAR_16, VAR_17->primary.rootent);
  if (VAR_18 < 0)
   return (VAR_18);
 }




 if (VAR_17->opt.joliet) {

  VAR_18 = FUNC_4(VAR_16, &(VAR_17->joliet.rootent),
      VAR_17->primary.rootent);
  if (VAR_18 < 0)
   return (VAR_18);



  if (VAR_17->sconv_to_utf16be == ((void*)0)) {
   VAR_17->sconv_to_utf16be =
       FUNC_3(
    &(VAR_16->archive), "UTF-16BE", 1);
   if (VAR_17->sconv_to_utf16be == ((void*)0))

    return (VAR_1);
   VAR_17->sconv_from_utf16be =
       FUNC_2(
    &(VAR_16->archive), "UTF-16BE", 1);
   if (VAR_17->sconv_from_utf16be == ((void*)0))

    return (VAR_1);
  }
 }




 VAR_18 = FUNC_7(VAR_16);
 if (VAR_18 < 0)
  return (VAR_18);





 VAR_19 = VAR_11
  + VAR_8
  + VAR_14
  + VAR_6;
 if (VAR_17->opt.boot)
  VAR_19 += VAR_4;
 if (VAR_17->opt.joliet)
  VAR_19 += VAR_10;
 if (VAR_17->opt.iso_level == 4)
  VAR_19 += VAR_10;


 VAR_17->primary.location_type_L_path_table = VAR_19;
 VAR_19 += VAR_17->primary.path_table_block;
 VAR_17->primary.location_type_M_path_table = VAR_19;
 VAR_19 += VAR_17->primary.path_table_block;
 if (VAR_17->opt.joliet) {
  VAR_17->joliet.location_type_L_path_table = VAR_19;
  VAR_19 += VAR_17->joliet.path_table_block;
  VAR_17->joliet.location_type_M_path_table = VAR_19;
  VAR_19 += VAR_17->joliet.path_table_block;
 }


 FUNC_8(VAR_17, VAR_19,
     &(VAR_17->primary));
 VAR_19 += VAR_17->primary.total_dir_block;
 if (VAR_17->opt.joliet) {
  FUNC_8(VAR_17, VAR_19,
      &(VAR_17->joliet));
  VAR_19 += VAR_17->joliet.total_dir_block;
 }

 if (VAR_17->opt.rr) {
  VAR_17->location_rrip_er = VAR_19;
  VAR_19 += VAR_9;
 }


  FUNC_9(VAR_17, VAR_19);
 VAR_19 += VAR_17->total_file_block;
 if (VAR_17->opt.boot && VAR_17->opt.boot_info_table) {
  VAR_18 = FUNC_10(VAR_16);
  if (VAR_18 < 0)
   return (VAR_18);
 }


 VAR_17->volume_space_size = VAR_19;
 if (VAR_17->opt.pad)
  VAR_17->volume_space_size += VAR_7;
 VAR_17->volume_sequence_number = 1;







 VAR_17->wbuff_remaining = FUNC_12();
 VAR_17->wbuff_type = VAR_15;
 VAR_17->wbuff_offset = 0;
 VAR_17->wbuff_written = 0;
 VAR_17->wbuff_tail = 0;


 VAR_18 = FUNC_21(VAR_16, VAR_11 * VAR_5);
 if (VAR_18 != VAR_2)
  return (VAR_1);


 VAR_18 = FUNC_15(VAR_16, &(VAR_17->primary));
 if (VAR_18 != VAR_2)
  return (VAR_1);

 if (VAR_17->opt.boot) {

  VAR_18 = FUNC_16(VAR_16);
  if (VAR_18 != VAR_2)
   return (VAR_1);
 }

 if (VAR_17->opt.iso_level == 4) {

  VAR_17->primary.vdd_type = VAR_12;
  VAR_18 = FUNC_15(VAR_16, &(VAR_17->primary));
  VAR_17->primary.vdd_type = VAR_13;
  if (VAR_18 != VAR_2)
   return (VAR_1);
 }

 if (VAR_17->opt.joliet) {
  VAR_18 = FUNC_15(VAR_16, &(VAR_17->joliet));
  if (VAR_18 != VAR_2)
   return (VAR_1);
 }


 VAR_18 = FUNC_17(VAR_16);
 if (VAR_18 != VAR_2)
  return (VAR_1);


 VAR_18 = FUNC_20(VAR_16);
 if (VAR_18 != VAR_2)
  return (VAR_1);


 VAR_18 = FUNC_22(VAR_16, 0, &(VAR_17->primary));
 if (VAR_18 != VAR_2)
  return (VAR_1);


 VAR_18 = FUNC_22(VAR_16, 1, &(VAR_17->primary));
 if (VAR_18 != VAR_2)
  return (VAR_1);

 if (VAR_17->opt.joliet) {

  VAR_18 = FUNC_22(VAR_16, 0, &(VAR_17->joliet));
  if (VAR_18 != VAR_2)
   return (VAR_1);


  VAR_18 = FUNC_22(VAR_16, 1, &(VAR_17->joliet));
  if (VAR_18 != VAR_2)
   return (VAR_1);
 }


 VAR_18 = FUNC_18(VAR_16, &(VAR_17->primary));
 if (VAR_18 != VAR_2)
  return (VAR_1);

 if (VAR_17->opt.joliet) {
  VAR_18 = FUNC_18(VAR_16, &(VAR_17->joliet));
  if (VAR_18 != VAR_2)
   return (VAR_1);
 }

 if (VAR_17->opt.rr) {

  VAR_18 = FUNC_23(VAR_16);
  if (VAR_18 != VAR_2)
   return (VAR_1);
 }


 VAR_18 = FUNC_19(VAR_16);
 if (VAR_18 != VAR_2)
  return (VAR_1);


 if (VAR_17->opt.pad) {
  VAR_18 = FUNC_21(VAR_16, VAR_7 * VAR_5);
  if (VAR_18 != VAR_2)
   return (VAR_1);
 }

 if (VAR_17->directories_too_deep != ((void*)0)) {
  FUNC_1(&VAR_16->archive, VAR_0,
      "%s: Directories too deep.",
      FUNC_0(
   VAR_17->directories_too_deep->file->entry));
  return (VAR_3);
 }


 VAR_18 = FUNC_14(VAR_16);

 return (VAR_18);
}
