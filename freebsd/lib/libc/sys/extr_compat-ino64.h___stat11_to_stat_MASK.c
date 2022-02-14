
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_spare; scalar_t__ st_padding1; scalar_t__ st_padding0; int st_gen; int st_flags; int st_blksize; int st_blocks; int st_size; int st_birthtim; scalar_t__ st_btim_ext; scalar_t__ st_ctim_ext; scalar_t__ st_mtim_ext; scalar_t__ st_atim_ext; int st_ctim; int st_mtim; int st_atim; int st_rdev; int st_gid; int st_uid; int st_mode; int st_nlink; int st_ino; int st_dev; } ;
struct freebsd11_stat {int st_gen; int st_flags; int st_blksize; int st_blocks; int st_size; int st_birthtim; int st_ctim; int st_mtim; int st_atim; int st_rdev; int st_gid; int st_uid; int st_mode; int st_nlink; int st_ino; int st_dev; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static __inline void
FUNC_1(const struct freebsd11_stat *VAR_0, struct stat *VAR_1)
{

 VAR_1->st_dev = VAR_0->st_dev;
 VAR_1->st_ino = VAR_0->st_ino;
 VAR_1->st_nlink = VAR_0->st_nlink;
 VAR_1->st_mode = VAR_0->st_mode;
 VAR_1->st_uid = VAR_0->st_uid;
 VAR_1->st_gid = VAR_0->st_gid;
 VAR_1->st_rdev = VAR_0->st_rdev;
 VAR_1->st_atim = VAR_0->st_atim;
 VAR_1->st_mtim = VAR_0->st_mtim;
 VAR_1->st_ctim = VAR_0->st_ctim;






 VAR_1->st_birthtim = VAR_0->st_birthtim;
 VAR_1->st_size = VAR_0->st_size;
 VAR_1->st_blocks = VAR_0->st_blocks;
 VAR_1->st_blksize = VAR_0->st_blksize;
 VAR_1->st_flags = VAR_0->st_flags;
 VAR_1->st_gen = VAR_0->st_gen;
 VAR_1->st_padding0 = 0;
 VAR_1->st_padding1 = 0;
 FUNC_0(VAR_1->st_spare, 0, sizeof(VAR_1->st_spare));
}
