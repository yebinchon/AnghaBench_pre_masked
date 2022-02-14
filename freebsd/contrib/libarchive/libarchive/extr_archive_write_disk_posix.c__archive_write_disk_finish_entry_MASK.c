
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int state; } ;
struct TYPE_8__ {scalar_t__ st_size; } ;
struct archive_write_disk {int fd; scalar_t__ filesize; scalar_t__ fd_offset; int todo; int file_remaining_bytes; scalar_t__ user_uid; TYPE_2__ archive; int * entry; int mode; int gid; int uid; int name; int * pst; TYPE_1__ st; } ;
struct archive {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int null_d ;


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
 int FUNC_0 (TYPE_2__*,int ,int,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int *,size_t*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*,int ,char*) ;
 int FUNC_12 (TYPE_2__*,int ,int ) ;
 int FUNC_13 (TYPE_2__*,int,int ,int ,int ) ;
 int FUNC_14 (TYPE_2__*,int ,int ) ;
 int FUNC_15 (int) ;
 int VAR_19 ;
 int FUNC_16 (struct archive_write_disk*,int ) ;
 int FUNC_17 (int,scalar_t__) ;
 scalar_t__ FUNC_18 (struct archive_write_disk*,char*,int) ;
 int FUNC_19 (struct archive_write_disk*) ;
 scalar_t__ FUNC_20 (int,scalar_t__,int ) ;
 int FUNC_21 (char*,int ,int) ;
 int FUNC_22 (struct archive_write_disk*) ;
 int FUNC_23 (struct archive_write_disk*,int ,void const*,size_t) ;
 int FUNC_24 (struct archive_write_disk*,int ) ;
 int FUNC_25 (struct archive_write_disk*) ;
 int FUNC_26 (struct archive_write_disk*) ;
 int FUNC_27 (struct archive_write_disk*) ;
 scalar_t__ FUNC_28 (int,char const*,int) ;

__attribute__((used)) static int
FUNC_29(struct archive *VAR_20)
{
 struct archive_write_disk *VAR_21 = (struct archive_write_disk *)VAR_20;
 int VAR_22 = VAR_3;

 FUNC_0(&VAR_21->archive, VAR_6,
     VAR_5 | VAR_4,
     "archive_write_finish_entry");
 if (VAR_21->archive.state & VAR_5)
  return (VAR_3);
 FUNC_1(&VAR_21->archive);


 if (VAR_21->fd < 0) {

 } else if (VAR_21->filesize < 0) {

 } else if (VAR_21->fd_offset == VAR_21->filesize) {
 } else {
  VAR_21->pst = ((void*)0);
  if ((VAR_22 = FUNC_19(VAR_21)) != VAR_3)
   return (VAR_22);


  if (VAR_21->st.st_size < VAR_21->filesize) {
   const char VAR_23 = '\0';
   if (FUNC_20(VAR_21->fd, VAR_21->filesize - 1, VAR_7) < 0) {
    FUNC_11(&VAR_21->archive, VAR_19,
        "Seek failed");
    return (VAR_2);
   }
   if (FUNC_28(VAR_21->fd, &VAR_23, 1) < 0) {
    FUNC_11(&VAR_21->archive, VAR_19,
        "Write to restore size failed");
    return (VAR_2);
   }
   VAR_21->pst = ((void*)0);
  }
 }
 if (VAR_21->todo & VAR_9) {
  int VAR_24 = FUNC_16(VAR_21, VAR_21->name);
  if (VAR_24 == VAR_0) {



   goto finish_metadata;
  }
  if (VAR_24 < VAR_22) VAR_22 = VAR_24;
 }





 if (VAR_21->todo & (VAR_14 | VAR_16 | VAR_15)) {
  VAR_21->uid = FUNC_14(&VAR_21->archive,
      FUNC_10(VAR_21->entry),
      FUNC_9(VAR_21->entry));
 }


 if (VAR_21->todo & (VAR_14 | VAR_15 | VAR_16)) {
  VAR_21->gid = FUNC_12(&VAR_21->archive,
      FUNC_5(VAR_21->entry),
      FUNC_4(VAR_21->entry));
  }






 if (VAR_21->todo & VAR_14) {
  int VAR_25 = FUNC_25(VAR_21);
  if (VAR_25 < VAR_22) VAR_22 = VAR_25;
 }
 if (VAR_21->user_uid != 0 &&
     (VAR_21->todo & VAR_18)) {
  int VAR_26 = FUNC_27(VAR_21);
  if (VAR_26 < VAR_22) VAR_22 = VAR_26;
 }





 if (VAR_21->todo & VAR_13) {
  int VAR_27 = FUNC_24(VAR_21, VAR_21->mode);
  if (VAR_27 < VAR_22) VAR_22 = VAR_27;
 }







 if (VAR_21->user_uid == 0 &&
     (VAR_21->todo & VAR_18)) {
  int VAR_28 = FUNC_27(VAR_21);
  if (VAR_28 < VAR_22) VAR_22 = VAR_28;
 }





 if (VAR_21->todo & VAR_10) {
  int VAR_29 = FUNC_22(VAR_21);
  if (VAR_29 < VAR_22) VAR_22 = VAR_29;
 }





 if (VAR_21->todo & VAR_17) {
  int VAR_30 = FUNC_26(VAR_21);
  if (VAR_30 < VAR_22) VAR_22 = VAR_30;
 }




 if (VAR_21->todo & VAR_12) {
  const void *VAR_31;
  size_t VAR_32;
  VAR_31 = FUNC_6(VAR_21->entry, &VAR_32);
  if (VAR_31 != ((void*)0) && VAR_32 > 0) {
   int VAR_33 = FUNC_23(VAR_21, FUNC_8(
       VAR_21->entry), VAR_31, VAR_32);
   if (VAR_33 < VAR_22) VAR_22 = VAR_33;
  }
 }





 if (VAR_21->todo & VAR_8) {
  int VAR_34;
  VAR_34 = FUNC_13(&VAR_21->archive, VAR_21->fd,
      FUNC_8(VAR_21->entry),
      FUNC_2(VAR_21->entry),
      FUNC_7(VAR_21->entry));
  if (VAR_34 < VAR_22) VAR_22 = VAR_34;
 }

finish_metadata:

 if (VAR_21->fd >= 0) {
  FUNC_15(VAR_21->fd);
  VAR_21->fd = -1;
 }

 FUNC_3(VAR_21->entry);
 VAR_21->entry = ((void*)0);
 VAR_21->archive.state = VAR_5;
 return (VAR_22);
}
