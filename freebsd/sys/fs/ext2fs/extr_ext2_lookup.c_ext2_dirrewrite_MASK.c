
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct inode {int i_flag; int i_mode; int i_e2fs; int i_number; scalar_t__ i_offset; } ;
struct ext2fs_direct_2 {int e2d_type; int e2d_ino; } ;
struct componentname {int dummy; } ;
struct buf {scalar_t__ b_data; } ;
typedef int off_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct vnode* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (struct vnode*,int ,char**,struct buf**) ;
 int FUNC_6 (struct inode*,struct ext2fs_direct_2*) ;

int
FUNC_7(struct inode *VAR_4, struct inode *VAR_5, struct componentname *VAR_6)
{
 struct buf *VAR_7;
 struct ext2fs_direct_2 *VAR_8;
 struct vnode *VAR_9 = FUNC_3(VAR_4);
 int VAR_10;

 if ((VAR_10 = FUNC_5(VAR_9, (off_t)VAR_4->i_offset, (char **)&VAR_8,
     &VAR_7)) != 0)
  return (VAR_10);
 VAR_8->e2d_ino = VAR_5->i_number;
 if (FUNC_1(VAR_5->i_e2fs,
     VAR_0))
  VAR_8->e2d_type = FUNC_0(FUNC_2(VAR_5->i_mode));
 else
  VAR_8->e2d_type = VAR_1;
 FUNC_6(VAR_4, (struct ext2fs_direct_2 *)VAR_7->b_data);
 VAR_10 = FUNC_4(VAR_7);
 VAR_4->i_flag |= VAR_2 | VAR_3;
 return (VAR_10);
}
