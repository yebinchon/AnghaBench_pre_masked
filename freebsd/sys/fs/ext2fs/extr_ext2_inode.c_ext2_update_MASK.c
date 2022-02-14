
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct m_ext2fs {scalar_t__ e2fs_bsize; scalar_t__ e2fs_ronly; } ;
struct inode {int i_flag; int i_number; int i_devvp; struct m_ext2fs* i_e2fs; } ;
struct ext2fs_dinode {int dummy; } ;
struct buf {scalar_t__ b_data; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct m_ext2fs*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inode* FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (int ,int ,int,int ,struct buf**) ;
 int FUNC_6 (struct buf*) ;
 int FUNC_7 (struct buf*) ;
 int FUNC_8 (struct inode*,struct ext2fs_dinode*) ;
 int FUNC_9 (struct vnode*) ;
 int FUNC_10 (struct m_ext2fs*,int ) ;
 int FUNC_11 (struct m_ext2fs*,int ) ;
 int FUNC_12 (struct m_ext2fs*,int ) ;

int
FUNC_13(struct vnode *VAR_4, int VAR_5)
{
 struct m_ext2fs *VAR_6;
 struct buf *VAR_7;
 struct inode *VAR_8;
 int VAR_9;

 FUNC_0(VAR_4, "ext2_update");
 FUNC_9(VAR_4);
 VAR_8 = FUNC_3(VAR_4);
 if ((VAR_8->i_flag & VAR_2) == 0 && VAR_5 == 0)
  return (0);
 VAR_8->i_flag &= ~(VAR_0 | VAR_1 | VAR_2);
 VAR_6 = VAR_8->i_e2fs;
 if (VAR_6->e2fs_ronly)
  return (0);
 if ((VAR_9 = FUNC_5(VAR_8->i_devvp,
     FUNC_10(VAR_6, FUNC_11(VAR_6, VAR_8->i_number)),
     (int)VAR_6->e2fs_bsize, VAR_3, &VAR_7)) != 0) {
  FUNC_6(VAR_7);
  return (VAR_9);
 }
 VAR_9 = FUNC_8(VAR_8, (struct ext2fs_dinode *)((char *)VAR_7->b_data +
     FUNC_2(VAR_6) * FUNC_12(VAR_6, VAR_8->i_number)));
 if (VAR_9) {
  FUNC_6(VAR_7);
  return (VAR_9);
 }
 if (VAR_5 && !FUNC_1(VAR_4))
  return (FUNC_7(VAR_7));
 else {
  FUNC_4(VAR_7);
  return (0);
 }
}
