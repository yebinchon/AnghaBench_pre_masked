
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct fixup_entry {int fixup; int mode; size_t mac_metadata_size; int * mac_metadata; int acl; scalar_t__ mtime_nanos; scalar_t__ birthtime_nanos; int mtime; int birthtime; scalar_t__ atime_nanos; int atime; } ;
struct TYPE_7__ {int state; } ;
struct TYPE_6__ {char* s; } ;
struct archive_write_disk {int deferred; int fd; int restore_pwd; int mode; int filesize; char* name; int user_umask; int todo; int flags; unsigned int decmpfs_block_count; TYPE_2__ archive; struct archive_entry* entry; int start_time; TYPE_1__ _name_data; int user_uid; int uid; scalar_t__ offset; scalar_t__ fd_offset; int * current_fixup; int * pst; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 unsigned long VAR_38 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 scalar_t__ FUNC_7 (struct archive_entry*) ;
 scalar_t__ FUNC_8 (struct archive_entry*) ;
 int FUNC_9 (struct archive_entry*) ;
 scalar_t__ FUNC_10 (struct archive_entry*) ;
 scalar_t__ FUNC_11 (struct archive_entry*) ;
 struct archive_entry* FUNC_12 (struct archive_entry*) ;
 int FUNC_13 (struct archive_entry*,unsigned long*,unsigned long*) ;
 scalar_t__ FUNC_14 (struct archive_entry*) ;
 int FUNC_15 (struct archive_entry*) ;
 int * FUNC_16 (struct archive_entry*,size_t*) ;
 int FUNC_17 (struct archive_entry*) ;
 int FUNC_18 (struct archive_entry*) ;
 scalar_t__ FUNC_19 (struct archive_entry*) ;
 scalar_t__ FUNC_20 (struct archive_entry*) ;
 int FUNC_21 (struct archive_entry*) ;
 int FUNC_22 (struct archive_entry*,int ) ;
 int FUNC_23 (struct archive_entry*) ;
 scalar_t__ FUNC_24 (struct archive_entry*) ;
 int FUNC_25 (struct archive_entry*,char const**,void const**,size_t*) ;
 int FUNC_26 (struct archive_entry*) ;
 int FUNC_27 (TYPE_2__*,int ,char*) ;
 int FUNC_28 (TYPE_1__*,int ) ;
 int FUNC_29 (struct archive_write_disk*) ;
 int FUNC_30 (struct archive_write_disk*) ;
 int FUNC_31 (int) ;
 struct fixup_entry* FUNC_32 (struct archive_write_disk*,int ) ;
 int FUNC_33 (struct archive_write_disk*) ;
 int VAR_39 ;
 int FUNC_34 (int) ;
 scalar_t__ FUNC_35 (int,unsigned long) ;
 int * FUNC_36 (size_t) ;
 int FUNC_37 (int *,void const*,size_t) ;
 int FUNC_38 (struct archive_write_disk*) ;
 scalar_t__ FUNC_39 (char const*,char*) ;
 char* FUNC_40 (char*,char) ;
 int FUNC_41 (int) ;

__attribute__((used)) static int
FUNC_42(struct archive *VAR_40, struct archive_entry *VAR_41)
{
 struct archive_write_disk *VAR_42 = (struct archive_write_disk *)VAR_40;
 struct fixup_entry *VAR_43;
 int VAR_44, VAR_45;

 FUNC_2(&VAR_42->archive, VAR_19,
     VAR_17 | VAR_16,
     "archive_write_disk_header");
 FUNC_3(&VAR_42->archive);
 if (VAR_42->archive.state & VAR_16) {
  VAR_45 = FUNC_0(&VAR_42->archive);
  if (VAR_45 == VAR_14)
   return (VAR_45);
 }


 VAR_42->pst = ((void*)0);
 VAR_42->current_fixup = ((void*)0);
 VAR_42->deferred = 0;
 if (VAR_42->entry) {
  FUNC_15(VAR_42->entry);
  VAR_42->entry = ((void*)0);
 }
 VAR_42->entry = FUNC_12(VAR_41);
 VAR_42->fd = -1;
 VAR_42->fd_offset = 0;
 VAR_42->offset = 0;
 VAR_42->restore_pwd = -1;
 VAR_42->uid = VAR_42->user_uid;
 VAR_42->mode = FUNC_17(VAR_42->entry);
 if (FUNC_24(VAR_42->entry))
  VAR_42->filesize = FUNC_23(VAR_42->entry);
 else
  VAR_42->filesize = -1;
 FUNC_28(&(VAR_42->_name_data), FUNC_21(VAR_42->entry));
 VAR_42->name = VAR_42->_name_data.s;
 FUNC_3(&VAR_42->archive);






 VAR_44 = FUNC_30(VAR_42);
 if (VAR_44 != VAR_15)
  return (VAR_44);







 FUNC_41(VAR_42->user_umask = FUNC_41(0));


 VAR_42->todo = VAR_29;
 if (VAR_42->flags & VAR_10) {
  VAR_42->todo |= VAR_30;
  if (VAR_42->mode & VAR_20)
   VAR_42->todo |= VAR_32 | VAR_33;




  if (VAR_42->mode & VAR_21)
   VAR_42->todo |= VAR_34 | VAR_35;
 } else {




  VAR_42->mode &= ~VAR_21;
  VAR_42->mode &= ~VAR_20;
  VAR_42->mode &= ~VAR_22;
  VAR_42->mode &= ~VAR_42->user_umask;
 }
 if (VAR_42->flags & VAR_9)
  VAR_42->todo |= VAR_31;
 if (VAR_42->flags & VAR_12)
  VAR_42->todo |= VAR_36;
 if (VAR_42->flags & VAR_4) {
  if (FUNC_14(VAR_42->entry) == VAR_0)
   VAR_42->deferred |= VAR_23;
  else
   VAR_42->todo |= VAR_23;



 }
 if (VAR_42->flags & VAR_7) {
  if (FUNC_14(VAR_42->entry) == VAR_0)
   VAR_42->deferred |= VAR_27;
  else
   VAR_42->todo |= VAR_27;
 }
 if (VAR_42->flags & VAR_13) {
  VAR_42->todo |= VAR_37;
 }
 if (VAR_42->flags & VAR_5)
  VAR_42->todo |= VAR_25;
 if (VAR_42->flags & VAR_11) {
  VAR_44 = FUNC_29(VAR_42);
  if (VAR_44 != VAR_15)
   return (VAR_44);
 }





 VAR_44 = FUNC_38(VAR_42);
 if (VAR_42->deferred & VAR_28) {
  VAR_43 = FUNC_32(VAR_42, FUNC_21(VAR_41));
  if (VAR_43 == ((void*)0))
   return (VAR_14);
  VAR_43->fixup |= VAR_29;
  VAR_43->mode = VAR_42->mode;
 }

 if ((VAR_42->deferred & VAR_36)
  && (FUNC_19(VAR_41)
      || FUNC_7(VAR_41))) {
  VAR_43 = FUNC_32(VAR_42, FUNC_21(VAR_41));
  if (VAR_43 == ((void*)0))
   return (VAR_14);
  VAR_43->mode = VAR_42->mode;
  VAR_43->fixup |= VAR_36;
  if (FUNC_7(VAR_41)) {
   VAR_43->atime = FUNC_6(VAR_41);
   VAR_43->atime_nanos = FUNC_8(VAR_41);
  } else {

   VAR_43->atime = VAR_42->start_time;
   VAR_43->atime_nanos = 0;
  }
  if (FUNC_19(VAR_41)) {
   VAR_43->mtime = FUNC_18(VAR_41);
   VAR_43->mtime_nanos = FUNC_20(VAR_41);
  } else {

   VAR_43->mtime = VAR_42->start_time;
   VAR_43->mtime_nanos = 0;
  }
  if (FUNC_10(VAR_41)) {
   VAR_43->birthtime = FUNC_9(VAR_41);
   VAR_43->birthtime_nanos = FUNC_11(
       VAR_41);
  } else {

   VAR_43->birthtime = VAR_43->mtime;
   VAR_43->birthtime_nanos = VAR_43->mtime_nanos;
  }
 }

 if (VAR_42->deferred & VAR_23) {
  VAR_43 = FUNC_32(VAR_42, FUNC_21(VAR_41));
  if (VAR_43 == ((void*)0))
   return (VAR_14);
  VAR_43->fixup |= VAR_23;
  FUNC_1(&VAR_43->acl, FUNC_4(VAR_41));
 }

 if (VAR_42->deferred & VAR_27) {
  const void *VAR_46;
  size_t VAR_47;
  VAR_46 = FUNC_16(VAR_42->entry, &VAR_47);
  if (VAR_46 != ((void*)0) && VAR_47 > 0) {
   VAR_43 = FUNC_32(VAR_42, FUNC_21(VAR_41));
   if (VAR_43 == ((void*)0))
    return (VAR_14);
   VAR_43->mac_metadata = FUNC_36(VAR_47);
   if (VAR_43->mac_metadata != ((void*)0)) {
    FUNC_37(VAR_43->mac_metadata, VAR_46,
        VAR_47);
    VAR_43->mac_metadata_size = VAR_47;
    VAR_43->fixup |= VAR_27;
   }
  }
 }

 if (VAR_42->deferred & VAR_25) {
  VAR_43 = FUNC_32(VAR_42, FUNC_21(VAR_41));
  if (VAR_43 == ((void*)0))
   return (VAR_14);
  VAR_43->fixup |= VAR_25;

 }


 if (VAR_44 >= VAR_18)
  VAR_42->archive.state = VAR_16;




 if (VAR_42->fd < 0) {
  FUNC_22(VAR_41, 0);
  VAR_42->filesize = 0;
 }

 return (VAR_44);
}
