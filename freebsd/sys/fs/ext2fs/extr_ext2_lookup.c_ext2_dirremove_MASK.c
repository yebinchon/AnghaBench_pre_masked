
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct inode {scalar_t__ i_count; scalar_t__ i_offset; int i_flag; } ;
struct ext2fs_direct_2 {int e2d_reclen; scalar_t__ e2d_ino; } ;
struct componentname {int dummy; } ;
struct buf {scalar_t__ b_data; } ;
typedef int off_t ;


 scalar_t__ FUNC_0 (struct vnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (struct vnode*,int ,char**,struct buf**) ;
 int FUNC_5 (struct inode*,struct ext2fs_direct_2*) ;

int
FUNC_6(struct vnode *VAR_2, struct componentname *VAR_3)
{
 struct inode *VAR_4;
 struct ext2fs_direct_2 *VAR_5, *VAR_6;
 struct buf *VAR_7;
 int VAR_8;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4->i_count == 0) {



  if ((VAR_8 =
      FUNC_4(VAR_2, (off_t)VAR_4->i_offset, (char **)&VAR_5,
      &VAR_7)) != 0)
   return (VAR_8);
  VAR_5->e2d_ino = 0;
  FUNC_5(VAR_4, (struct ext2fs_direct_2 *)VAR_7->b_data);
  VAR_8 = FUNC_3(VAR_7);
  VAR_4->i_flag |= VAR_0 | VAR_1;
  return (VAR_8);
 }



 if ((VAR_8 = FUNC_4(VAR_2, (off_t)(VAR_4->i_offset - VAR_4->i_count),
     (char **)&VAR_5, &VAR_7)) != 0)
  return (VAR_8);


 if (VAR_4->i_count == 0)
  VAR_6 = VAR_5;
 else
  VAR_6 = (struct ext2fs_direct_2 *)((char *)VAR_5 + VAR_5->e2d_reclen);
 VAR_5->e2d_reclen += VAR_6->e2d_reclen;
 FUNC_5(VAR_4, (struct ext2fs_direct_2 *)VAR_7->b_data);
 if (FUNC_0(VAR_2) && VAR_4->i_count != 0)
  FUNC_2(VAR_7);
 else
  VAR_8 = FUNC_3(VAR_7);
 VAR_4->i_flag |= VAR_0 | VAR_1;
 return (VAR_8);
}
