
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int noatime; int filetype; int atime_nsec; int atime; int mtime_nsec; int mtime; } ;
struct tree {int descend; int tree_errno; int symlink_mode; int initial_filesystem_id; int current_filesystem_id; scalar_t__ entry_fd; TYPE_2__* current_filesystem; TYPE_1__ restore_time; int depth; } ;
struct stat {int st_flags; int st_mode; int st_dev; } ;
struct archive_string {char* s; int length; } ;
struct TYPE_13__ {void* state; } ;
struct archive_read_disk {int flags; char symlink_mode; int follow_symlinks; TYPE_3__ archive; int metadata_filter_data; int (* metadata_filter_func ) (TYPE_3__*,int ,struct archive_entry*) ;int excluded_cb_data; int (* excluded_cb_func ) (TYPE_3__*,int ,struct archive_entry*) ;scalar_t__ matching; } ;
struct archive_entry {int dummy; } ;
struct TYPE_12__ {int noatime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;





 int VAR_19 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*,char const*) ;
 int FUNC_6 (struct archive_entry*,char*) ;
 int FUNC_7 (struct archive_entry*,int ) ;
 int FUNC_8 (struct archive_entry*,struct stat const*) ;
 int FUNC_9 (struct archive_entry*,char const*) ;
 int FUNC_10 (struct archive_entry*) ;
 int FUNC_11 (struct archive_entry*) ;
 int FUNC_12 (struct archive_entry*) ;
 int FUNC_13 (struct archive_entry*) ;
 int FUNC_14 (struct archive_entry*) ;
 char* FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__,struct archive_entry*) ;
 int FUNC_17 (scalar_t__,struct archive_entry*) ;
 int FUNC_18 (scalar_t__,struct archive_entry*) ;
 int FUNC_19 (TYPE_3__*,struct archive_entry*,scalar_t__,struct stat const*) ;
 char* FUNC_20 (TYPE_3__*,int ) ;
 char* FUNC_21 (TYPE_3__*,int ) ;
 int FUNC_22 (TYPE_3__*,int,char*,char*) ;
 int FUNC_23 (struct archive_string*) ;
 int FUNC_24 (struct archive_string*) ;
 int FUNC_25 (struct archive_string*) ;
 int FUNC_26 (struct archive_string*,char*,char*) ;
 int VAR_20 ;
 int FUNC_27 (scalar_t__,int ,int ,int*) ;
 scalar_t__ FUNC_28 (struct tree*,int ,int) ;
 char* FUNC_29 (char*,char) ;
 int FUNC_30 (TYPE_3__*,int ,struct archive_entry*) ;
 int FUNC_31 (TYPE_3__*,int ,struct archive_entry*) ;
 int FUNC_32 (TYPE_3__*,int ,struct archive_entry*) ;
 int FUNC_33 (TYPE_3__*,int ,struct archive_entry*) ;
 int FUNC_34 (struct tree*) ;
 int FUNC_35 (struct tree*) ;
 int FUNC_36 (struct tree*) ;
 struct stat* FUNC_37 (struct tree*) ;
 char* FUNC_38 (struct tree*) ;
 struct stat* FUNC_39 (struct tree*) ;
 int FUNC_40 (struct tree*) ;
 int FUNC_41 (struct tree*) ;
 int FUNC_42 (struct tree*,struct stat const*) ;
 int FUNC_43 (struct archive_read_disk*,int ) ;

__attribute__((used)) static int
FUNC_44(struct archive_read_disk *VAR_21, struct tree *VAR_22,
    struct archive_entry *VAR_23)
{
 const struct stat *VAR_24;
 const struct stat *VAR_25;
 const char *VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30;
 struct archive_string VAR_31;

 VAR_27 = VAR_4;
 VAR_28 = 0;
 FUNC_25(&VAR_31);

 VAR_24 = ((void*)0);
 VAR_25 = ((void*)0);
 VAR_22->descend = 0;
 do {
  switch (FUNC_41(VAR_22)) {
  case 131:
   FUNC_22(&VAR_21->archive, VAR_22->tree_errno,
       "%s: Unable to continue traversing directory tree",
       FUNC_38(VAR_22));
   VAR_21->archive.state = VAR_9;
   FUNC_40(VAR_22);
   return (VAR_3);
  case 132:
   FUNC_22(&VAR_21->archive, VAR_1,
       "%s: Couldn't visit directory",
       FUNC_38(VAR_22));
   FUNC_40(VAR_22);
   return (VAR_2);
  case 0:
   FUNC_40(VAR_22);
   return (VAR_0);
  case 129:
  case 130:
   break;
  case 128:
   VAR_25 = FUNC_37(VAR_22);
   if (VAR_25 == ((void*)0)) {
       if (VAR_20 == VAR_11 && VAR_22->depth > 0) {
    VAR_27 = VAR_10;
    VAR_28 = VAR_20;
    if (VAR_31.length == 0) {
     FUNC_26(&VAR_31,
         "%s", FUNC_38(VAR_22));
    } else {
     FUNC_26(&VAR_31,
         " %s", FUNC_38(VAR_22));
    }
       } else {
    FUNC_22(&VAR_21->archive, VAR_20,
        "%s: Cannot stat",
        FUNC_38(VAR_22));
    FUNC_40(VAR_22);
    return (VAR_2);
       }
   }
   break;
  }
 } while (VAR_25 == ((void*)0));
 FUNC_6(VAR_23, FUNC_38(VAR_22));



 if (VAR_21->matching) {
  VAR_30 = FUNC_17(VAR_21->matching, VAR_23);
  if (VAR_30 < 0) {
   FUNC_22(&(VAR_21->archive), VAR_20,
       "Failed : %s", FUNC_15(VAR_21->matching));
   return (VAR_30);
  }
  if (VAR_30) {
   if (VAR_21->excluded_cb_func)
    VAR_21->excluded_cb_func(&(VAR_21->archive),
        VAR_21->excluded_cb_data, VAR_23);
   return (VAR_8);
  }
 }




 switch(VAR_22->symlink_mode) {
 case 'H':

  VAR_22->symlink_mode = 'P';


 case 'L':

  VAR_29 = FUNC_35(VAR_22);

  VAR_21->symlink_mode = 'L';
  VAR_21->follow_symlinks = 1;

  VAR_24 = FUNC_39(VAR_22);
  if (VAR_24 != ((void*)0) && !FUNC_42(VAR_22, VAR_24))
   break;



 default:

  VAR_29 = FUNC_36(VAR_22);

  VAR_21->symlink_mode = 'P';
  VAR_21->follow_symlinks = 0;

  VAR_24 = VAR_25;
  break;
 }

 if (FUNC_43(VAR_21, VAR_24->st_dev) != VAR_4) {
  VAR_21->archive.state = VAR_9;
  FUNC_40(VAR_22);
  return (VAR_3);
 }
 if (VAR_22->initial_filesystem_id == -1)
  VAR_22->initial_filesystem_id = VAR_22->current_filesystem_id;
 if (VAR_21->flags & VAR_7) {
  if (VAR_22->initial_filesystem_id != VAR_22->current_filesystem_id)
   VAR_29 = 0;
 }
 VAR_22->descend = VAR_29;





 if (VAR_21->flags & VAR_5) {
 }

 FUNC_8(VAR_23, VAR_24);




 VAR_22->restore_time.mtime = FUNC_12(VAR_23);
 VAR_22->restore_time.mtime_nsec = FUNC_13(VAR_23);
 VAR_22->restore_time.atime = FUNC_3(VAR_23);
 VAR_22->restore_time.atime_nsec = FUNC_4(VAR_23);
 VAR_22->restore_time.filetype = FUNC_10(VAR_23);
 VAR_22->restore_time.noatime = VAR_22->current_filesystem->noatime;




 if (VAR_21->matching) {
  VAR_30 = FUNC_18(VAR_21->matching, VAR_23);
  if (VAR_30 < 0) {
   FUNC_22(&(VAR_21->archive), VAR_20,
       "Failed : %s", FUNC_15(VAR_21->matching));
   return (VAR_30);
  }
  if (VAR_30) {
   if (VAR_21->excluded_cb_func)
    VAR_21->excluded_cb_func(&(VAR_21->archive),
        VAR_21->excluded_cb_data, VAR_23);
   return (VAR_8);
  }
 }


 VAR_26 = FUNC_21(&(VAR_21->archive), FUNC_14(VAR_23));
 if (VAR_26 != ((void*)0))
  FUNC_9(VAR_23, VAR_26);
 VAR_26 = FUNC_20(&(VAR_21->archive), FUNC_11(VAR_23));
 if (VAR_26 != ((void*)0))
  FUNC_5(VAR_23, VAR_26);




 if (VAR_21->matching) {
  VAR_30 = FUNC_16(VAR_21->matching, VAR_23);
  if (VAR_30 < 0) {
   FUNC_22(&(VAR_21->archive), VAR_20,
       "Failed : %s", FUNC_15(VAR_21->matching));
   return (VAR_30);
  }
  if (VAR_30) {
   if (VAR_21->excluded_cb_func)
    VAR_21->excluded_cb_func(&(VAR_21->archive),
        VAR_21->excluded_cb_data, VAR_23);
   return (VAR_8);
  }
 }




 if (VAR_21->metadata_filter_func) {
  if (!VAR_21->metadata_filter_func(&(VAR_21->archive),
      VAR_21->metadata_filter_data, VAR_23))
   return (VAR_8);
 }




 FUNC_7(VAR_23, FUNC_34(VAR_22));
 VAR_30 = FUNC_19(&(VAR_21->archive), VAR_23,
  VAR_22->entry_fd, VAR_24);

 if (VAR_30 == VAR_4) {
  VAR_30 = VAR_27;
  if (VAR_30 != VAR_4) {
   FUNC_26(&VAR_31, ": %s",
       "File removed before we read it");
   FUNC_22(&(VAR_21->archive), VAR_28,
       "%s", VAR_31.s);
  }
 }
 if (!FUNC_23(&VAR_31))
  FUNC_24(&VAR_31);

 return (VAR_30);
}
