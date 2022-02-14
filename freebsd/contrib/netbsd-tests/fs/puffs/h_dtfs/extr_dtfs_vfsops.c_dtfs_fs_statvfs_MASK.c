
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statvfs {int f_blocks; int f_bsize; int f_frsize; int f_iosize; int f_bfree; int f_bavail; scalar_t__ f_fresvd; scalar_t__ f_bresvd; void* f_favail; void* f_ffree; void* f_files; } ;
struct rlimit {int rlim_cur; } ;
struct puffs_usermount {int dummy; } ;
struct dtfs_mount {int dtm_fsizes; void* dtm_nfiles; } ;
typedef int off_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,struct rlimit*) ;
 int FUNC_3 (struct statvfs*,int ,int) ;
 struct dtfs_mount* FUNC_4 (struct puffs_usermount*) ;

int
FUNC_5(struct puffs_usermount *VAR_2, struct statvfs *VAR_3)
{
 struct rlimit VAR_4;
 struct dtfs_mount *VAR_5;
 off_t VAR_6, VAR_7;
 int VAR_8;

 VAR_5 = FUNC_4(VAR_2);
 VAR_8 = FUNC_1();
 FUNC_3(VAR_3, 0, sizeof(struct statvfs));






 if (FUNC_2(VAR_1, &VAR_4) == 0)
  VAR_6 = VAR_4.rlim_cur;
 else
  VAR_6 = 16*1024*1024;
 VAR_7 = VAR_6 - VAR_5->dtm_fsizes;

 VAR_3->f_blocks = FUNC_0(VAR_6, VAR_8) / VAR_8;
 VAR_3->f_files = VAR_0;

 VAR_3->f_bsize = VAR_3->f_frsize = VAR_3->f_iosize = VAR_8;
 VAR_3->f_bfree = VAR_3->f_bavail = FUNC_0(VAR_7, VAR_8) / VAR_8;
 VAR_3->f_ffree = VAR_3->f_favail = VAR_0 - VAR_5->dtm_nfiles;

 VAR_3->f_bresvd = VAR_3->f_fresvd = 0;

 return 0;
}
