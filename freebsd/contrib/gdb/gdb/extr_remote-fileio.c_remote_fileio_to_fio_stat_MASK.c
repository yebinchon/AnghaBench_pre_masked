
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_ctime; int st_mtime; int st_atime; scalar_t__ st_blksize; scalar_t__ st_size; scalar_t__ st_blocks; scalar_t__ st_rdev; scalar_t__ st_gid; scalar_t__ st_uid; scalar_t__ st_nlink; int st_mode; scalar_t__ st_ino; } ;
struct fio_stat {int fst_ctime; int fst_mtime; int fst_atime; int fst_blocks; int fst_blksize; int fst_size; int fst_rdev; int fst_gid; int fst_uid; int fst_nlink; int fst_mode; int fst_ino; } ;
typedef int LONGEST ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (long,int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void
FUNC_4 (struct stat *VAR_0, struct fio_stat *VAR_1)
{

  FUNC_2 ((long) VAR_0->st_ino, VAR_1->fst_ino);
  FUNC_0 (VAR_0->st_mode, VAR_1->fst_mode);
  FUNC_2 ((long) VAR_0->st_nlink, VAR_1->fst_nlink);
  FUNC_2 ((long) VAR_0->st_uid, VAR_1->fst_uid);
  FUNC_2 ((long) VAR_0->st_gid, VAR_1->fst_gid);
  FUNC_2 ((long) VAR_0->st_rdev, VAR_1->fst_rdev);
  FUNC_3 ((LONGEST) VAR_0->st_size, VAR_1->fst_size);
  FUNC_3 ((LONGEST) VAR_0->st_blksize, VAR_1->fst_blksize);






  FUNC_3 (((LONGEST) VAR_0->st_size + VAR_0->st_blksize - 1)
         / (LONGEST) VAR_0->st_blksize,
         VAR_1->fst_blocks);

  FUNC_1 (VAR_0->st_atime, VAR_1->fst_atime);
  FUNC_1 (VAR_0->st_mtime, VAR_1->fst_mtime);
  FUNC_1 (VAR_0->st_ctime, VAR_1->fst_ctime);
}
