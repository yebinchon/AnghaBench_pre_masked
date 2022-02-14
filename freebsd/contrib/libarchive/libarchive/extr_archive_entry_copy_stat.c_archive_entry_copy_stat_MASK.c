
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


struct TYPE_14__ {int tv_nsec; } ;
struct TYPE_13__ {int tv_nsec; } ;
struct TYPE_12__ {int tv_nsec; } ;
struct TYPE_11__ {int tv_nsec; } ;
struct TYPE_10__ {int tv_nsec; } ;
struct TYPE_9__ {int tv_nsec; } ;
struct TYPE_8__ {int tv_nsec; } ;
struct stat {int st_atime_nsec; int st_ctime_nsec; int st_mtime_nsec; int st_atime_n; int st_ctime_n; int st_mtime_n; int st_uatime; int st_uctime; int st_umtime; int st_atime_usec; int st_ctime_usec; int st_mtime_usec; int st_mode; int st_size; int st_rdev; int st_nlink; int st_ino; int st_uid; int st_gid; int st_dev; int st_birthtime; TYPE_7__ st_birthtimespec; int st_mtime; int st_ctime; int st_atime; TYPE_6__ st_mtim; TYPE_5__ st_ctim; TYPE_4__ st_atim; TYPE_3__ st_mtimespec; TYPE_2__ st_ctimespec; TYPE_1__ st_atimespec; } ;
struct archive_entry {int dummy; } ;


 int FUNC_0 (struct archive_entry*,int ,int) ;
 int FUNC_1 (struct archive_entry*,int ,int ) ;
 int FUNC_2 (struct archive_entry*,int ,int) ;
 int FUNC_3 (struct archive_entry*,int ) ;
 int FUNC_4 (struct archive_entry*,int ) ;
 int FUNC_5 (struct archive_entry*,int ) ;
 int FUNC_6 (struct archive_entry*,int ) ;
 int FUNC_7 (struct archive_entry*,int ,int) ;
 int FUNC_8 (struct archive_entry*,int ) ;
 int FUNC_9 (struct archive_entry*,int ) ;
 int FUNC_10 (struct archive_entry*,int ) ;
 int FUNC_11 (struct archive_entry*,int ) ;
 int FUNC_12 (struct archive_entry*) ;

void
FUNC_13(struct archive_entry *VAR_0, const struct stat *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->st_atime, 0);
 FUNC_2(VAR_0, VAR_1->st_ctime, 0);
 FUNC_7(VAR_0, VAR_1->st_mtime, 0);






 FUNC_12(VAR_0);

 FUNC_3(VAR_0, VAR_1->st_dev);
 FUNC_4(VAR_0, VAR_1->st_gid);
 FUNC_11(VAR_0, VAR_1->st_uid);
 FUNC_5(VAR_0, VAR_1->st_ino);
 FUNC_8(VAR_0, VAR_1->st_nlink);
 FUNC_9(VAR_0, VAR_1->st_rdev);
 FUNC_10(VAR_0, VAR_1->st_size);
 FUNC_6(VAR_0, VAR_1->st_mode);
}
