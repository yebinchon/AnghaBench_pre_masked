
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct statfs {int f_blocks; int f_ffree; int f_files; scalar_t__ f_bfree; scalar_t__ f_bavail; int f_iosize; int f_bsize; } ;
struct mount {int dummy; } ;
struct m_ext2fs {int e2fs_itpg; int e2fs_gcount; int e2fs_gdbcount; int e2fs_bcount; TYPE_1__* e2fs; scalar_t__ e2fs_rbcount; scalar_t__ e2fs_fbcount; } ;
struct ext2mount {struct m_ext2fs* um_e2fs; } ;
struct TYPE_2__ {scalar_t__ e2fs_magic; int e2fs_first_dblock; scalar_t__ e2fs_rev; int e2fs_features_rocompat; int e2fs_features_compat; int e2fs_ficount; int e2fs_icount; scalar_t__ e2fs_reserved_ngdb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct m_ext2fs*) ;
 int FUNC_1 (struct m_ext2fs*) ;
 struct ext2mount* FUNC_2 (struct mount*) ;
 scalar_t__ FUNC_3 (struct m_ext2fs*,int) ;
 int FUNC_4 (char*) ;

int
FUNC_5(struct mount *VAR_4, struct statfs *VAR_5)
{
 struct ext2mount *VAR_6;
 struct m_ext2fs *VAR_7;
 uint32_t VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_6 = FUNC_2(VAR_4);
 VAR_7 = VAR_6->um_e2fs;
 if (VAR_7->e2fs->e2fs_magic != VAR_0)
  FUNC_4("ext2_statfs");




 VAR_9 =
     1 +
     1 +
     VAR_7->e2fs_itpg;
 VAR_8 = VAR_7->e2fs->e2fs_first_dblock +
     VAR_7->e2fs_gcount * VAR_9;
 if (VAR_7->e2fs->e2fs_rev > VAR_1 &&
     VAR_7->e2fs->e2fs_features_rocompat & VAR_3) {
  for (VAR_11 = 0, VAR_12 = 0; VAR_11 < VAR_7->e2fs_gcount; VAR_11++) {
   if (FUNC_3(VAR_7, VAR_11))
    VAR_12++;
  }
 } else {
  VAR_12 = VAR_7->e2fs_gcount;
 }
 VAR_10 = VAR_7->e2fs_gdbcount;
 if (VAR_7->e2fs->e2fs_rev > VAR_1 &&
     VAR_7->e2fs->e2fs_features_compat & VAR_2)
  VAR_10 += VAR_7->e2fs->e2fs_reserved_ngdb;
 VAR_8 += VAR_12 * (1 + VAR_10);

 VAR_5->f_bsize = FUNC_1(VAR_7);
 VAR_5->f_iosize = FUNC_0(VAR_7);
 VAR_5->f_blocks = VAR_7->e2fs_bcount - VAR_8;
 VAR_5->f_bfree = VAR_7->e2fs_fbcount;
 VAR_5->f_bavail = VAR_5->f_bfree - VAR_7->e2fs_rbcount;
 VAR_5->f_files = VAR_7->e2fs->e2fs_icount;
 VAR_5->f_ffree = VAR_7->e2fs->e2fs_ficount;
 return (0);
}
