
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int offset_of_temp; } ;
struct isofile {scalar_t__ dircnt; struct archive_entry* entry; TYPE_2__ content; TYPE_2__* cur_content; int basename; int parentdir; } ;
struct isoent {struct isofile* file; } ;
struct TYPE_3__ {scalar_t__ rr; int iso_level; } ;
struct iso9660 {int need_multi_extent; scalar_t__ dircnt_max; scalar_t__ temp_fd; scalar_t__ bytes_remaining; struct isofile* cur_file; TYPE_1__ opt; } ;
struct archive_write {int archive; struct iso9660* format_data; } ;
struct archive_entry {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 scalar_t__ FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (int *,int ,char*,...) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_9 ;
 struct isoent* FUNC_6 (struct isofile*) ;
 int FUNC_7 (struct archive_write*,struct isoent**) ;
 int FUNC_8 (struct iso9660*,struct isofile*) ;
 int FUNC_9 (struct isofile*) ;
 int FUNC_10 (struct archive_write*,struct isofile*) ;
 struct isofile* FUNC_11 (struct archive_write*,struct archive_entry*) ;
 int FUNC_12 (struct archive_write*,struct isofile*) ;
 int FUNC_13 (struct archive_write*) ;
 int FUNC_14 (struct archive_write*,struct isofile*) ;

__attribute__((used)) static int
FUNC_15(struct archive_write *VAR_10, struct archive_entry *VAR_11)
{
 struct iso9660 *VAR_12;
 struct isofile *VAR_13;
 struct isoent *VAR_14;
 int VAR_15, VAR_16 = VAR_4;

 VAR_12 = VAR_10->format_data;

 VAR_12->cur_file = ((void*)0);
 VAR_12->bytes_remaining = 0;
 VAR_12->need_multi_extent = 0;
 if (FUNC_1(VAR_11) == VAR_0
     && VAR_12->opt.rr == VAR_8) {
  FUNC_4(&VAR_10->archive, VAR_2,
      "Ignore symlink file.");
  VAR_12->cur_file = ((void*)0);
  return (VAR_5);
 }
 if (FUNC_1(VAR_11) == VAR_1 &&
     FUNC_3(VAR_11) >= VAR_7) {
  if (VAR_12->opt.iso_level < 3) {
   FUNC_4(&VAR_10->archive,
       VAR_2,
       "Ignore over %lld bytes file. "
       "This file too large.",
       VAR_7);
    VAR_12->cur_file = ((void*)0);
   return (VAR_5);
  }
  VAR_12->need_multi_extent = 1;
 }

 VAR_13 = FUNC_11(VAR_10, VAR_11);
 if (VAR_13 == ((void*)0)) {
  FUNC_4(&VAR_10->archive, VAR_6,
      "Can't allocate data");
  return (VAR_3);
 }
 VAR_15 = FUNC_10(VAR_10, VAR_13);
 if (VAR_15 < VAR_5) {
  FUNC_9(VAR_13);
  return (VAR_15);
 }
 else if (VAR_15 < VAR_16)
  VAR_16 = VAR_15;





 if (FUNC_5(&(VAR_13->parentdir)) == 0 &&
     FUNC_5(&(VAR_13->basename)) == 0) {
  FUNC_9(VAR_13);
  return (VAR_15);
 }

 FUNC_8(VAR_12, VAR_13);
 VAR_14 = FUNC_6(VAR_13);
 if (VAR_14 == ((void*)0)) {
  FUNC_4(&VAR_10->archive, VAR_6,
      "Can't allocate data");
  return (VAR_3);
 }
 if (VAR_14->file->dircnt > VAR_12->dircnt_max)
  VAR_12->dircnt_max = VAR_14->file->dircnt;


 VAR_15 = FUNC_7(VAR_10, &VAR_14);
 if (VAR_15 != VAR_4)
  return (VAR_15);




 if (VAR_14->file != VAR_13)
  return (VAR_4);



 if (FUNC_1(VAR_13->entry) != VAR_1)
  return (VAR_16);




 VAR_12->cur_file = VAR_13;

 if (FUNC_2(VAR_13->entry) > 1) {
  VAR_15 = FUNC_12(VAR_10, VAR_13);
  if (VAR_15 != VAR_4)
   return (VAR_3);
 }




 if (VAR_12->temp_fd < 0) {
  VAR_12->temp_fd = FUNC_0(((void*)0));
  if (VAR_12->temp_fd < 0) {
   FUNC_4(&VAR_10->archive, VAR_9,
       "Couldn't create temporary file");
   return (VAR_3);
  }
 }


 VAR_13->content.offset_of_temp = FUNC_13(VAR_10);
 VAR_13->cur_content = &(VAR_13->content);
 VAR_15 = FUNC_14(VAR_10, VAR_13);
 if (VAR_15 < VAR_16)
  VAR_16 = VAR_15;
 VAR_12->bytes_remaining = FUNC_3(VAR_13->entry);

 return (VAR_16);
}
