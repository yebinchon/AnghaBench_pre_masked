
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct TYPE_14__ {int tv_nsec; } ;
struct TYPE_13__ {int tv_nsec; } ;
struct TYPE_12__ {int tv_nsec; } ;
struct TYPE_11__ {int tv_nsec; } ;
struct TYPE_10__ {int tv_nsec; } ;
struct TYPE_9__ {int tv_nsec; } ;
struct TYPE_8__ {int tv_nsec; } ;
typedef struct stat {int st_atime_n; int st_ctime_n; int st_mtime_n; int st_uatime; int st_uctime; int st_umtime; int st_atime_usec; int st_ctime_usec; int st_mtime_usec; TYPE_7__ st_birthtimespec; TYPE_6__ st_mtim; TYPE_5__ st_ctim; TYPE_4__ st_atim; TYPE_3__ st_mtimespec; TYPE_2__ st_ctimespec; TYPE_1__ st_atimespec; int st_mode; scalar_t__ st_size; int st_rdev; int st_nlink; scalar_t__ st_ino; scalar_t__ st_uid; scalar_t__ st_gid; int st_dev; int st_mtime; int st_ctime; int st_birthtime; int st_atime; } const stat ;
struct archive_entry {int stat_valid; struct stat const* stat; } ;
typedef scalar_t__ off_t ;
typedef scalar_t__ ino_t ;
typedef scalar_t__ gid_t ;


 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 scalar_t__ FUNC_7 (struct archive_entry*) ;
 scalar_t__ FUNC_8 (struct archive_entry*) ;
 int FUNC_9 (struct archive_entry*) ;
 int FUNC_10 (struct archive_entry*) ;
 int FUNC_11 (struct archive_entry*) ;
 int FUNC_12 (struct archive_entry*) ;
 int FUNC_13 (struct archive_entry*) ;
 scalar_t__ FUNC_14 (struct archive_entry*) ;
 scalar_t__ FUNC_15 (struct archive_entry*) ;
 struct stat const* FUNC_16 (int,int) ;

const struct stat *
FUNC_17(struct archive_entry *VAR_0)
{
 struct stat *VAR_1;
 if (VAR_0->stat == ((void*)0)) {
  VAR_0->stat = FUNC_16(1, sizeof(*VAR_1));
  if (VAR_0->stat == ((void*)0))
   return (((void*)0));
  VAR_0->stat_valid = 0;
 }
 if (VAR_0->stat_valid)
  return (VAR_0->stat);

 VAR_1 = VAR_0->stat;




 VAR_1->st_atime = FUNC_0(VAR_0);



 VAR_1->st_ctime = FUNC_4(VAR_0);
 VAR_1->st_mtime = FUNC_10(VAR_0);
 VAR_1->st_dev = FUNC_6(VAR_0);
 VAR_1->st_gid = (gid_t)FUNC_7(VAR_0);
 VAR_1->st_uid = (uid_t)FUNC_15(VAR_0);
 VAR_1->st_ino = (ino_t)FUNC_8(VAR_0);
 VAR_1->st_nlink = FUNC_12(VAR_0);
 VAR_1->st_rdev = FUNC_13(VAR_0);
 VAR_1->st_size = (off_t)FUNC_14(VAR_0);
 VAR_1->st_mode = FUNC_9(VAR_0);
 VAR_0->stat_valid = 1;

 return (VAR_1);
}
