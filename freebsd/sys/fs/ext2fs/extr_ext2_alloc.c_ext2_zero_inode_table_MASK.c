
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct m_ext2fs {int e2fs_bsize; TYPE_2__* e2fs_gd; TYPE_1__* e2fs; } ;
struct inode {int i_devvp; struct m_ext2fs* i_e2fs; } ;
struct buf {int dummy; } ;
struct TYPE_5__ {int ext4bgd_flags; } ;
struct TYPE_4__ {int e2fs_inode_size; int e2fs_ipg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct m_ext2fs*) ;
 int FUNC_1 (struct buf*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct m_ext2fs*,scalar_t__) ;
 struct buf* FUNC_5 (int ,int ,int,int ,int ,int ) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (struct buf*,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct inode *VAR_2, int VAR_3)
{
 struct m_ext2fs *VAR_4;
 struct buf *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_4 = VAR_2->i_e2fs;

 if (VAR_4->e2fs_gd[VAR_3].ext4bgd_flags & VAR_1)
  return (0);

 VAR_7 = VAR_4->e2fs->e2fs_inode_size * VAR_4->e2fs->e2fs_ipg /
     VAR_4->e2fs_bsize;

 VAR_8 = FUNC_6(VAR_4->e2fs->e2fs_ipg -
     FUNC_3(&VAR_4->e2fs_gd[VAR_3]),
     VAR_4->e2fs_bsize / FUNC_0(VAR_4));

 for (VAR_6 = 0; VAR_6 < VAR_7 - VAR_8; VAR_6++) {
  VAR_5 = FUNC_5(VAR_2->i_devvp, FUNC_4(VAR_4,
      FUNC_2(&VAR_4->e2fs_gd[VAR_3]) + VAR_8 + VAR_6),
      VAR_4->e2fs_bsize, 0, 0, 0);
  if (!VAR_5)
   return (VAR_0);

  FUNC_7(VAR_5, 0, VAR_4->e2fs_bsize);
  FUNC_1(VAR_5);
 }

 VAR_4->e2fs_gd[VAR_3].ext4bgd_flags |= VAR_1;

 return (0);
}
