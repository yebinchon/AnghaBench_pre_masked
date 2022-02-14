
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct m_ext2fs {int dummy; } ;
struct inode {struct m_ext2fs* i_e2fs; } ;
struct buf {scalar_t__ b_data; } ;
typedef int off_t ;
typedef int e2fs_lbn_t ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct m_ext2fs*,int ) ;
 int FUNC_2 (struct m_ext2fs*,struct inode*,int ) ;
 int FUNC_3 (struct vnode*,int ,int,int ,struct buf**) ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (struct inode*,struct buf*) ;
 int FUNC_6 (struct m_ext2fs*,int ) ;

int
FUNC_7(struct vnode *VAR_1, off_t VAR_2, char **VAR_3, struct buf **VAR_4)
{
 struct inode *VAR_5;
 struct m_ext2fs *VAR_6;
 struct buf *VAR_7;
 e2fs_lbn_t VAR_8;
 int VAR_9, VAR_10;

 VAR_5 = FUNC_0(VAR_1);
 VAR_6 = VAR_5->i_e2fs;
 VAR_8 = FUNC_6(VAR_6, VAR_2);
 VAR_10 = FUNC_2(VAR_6, VAR_5, VAR_8);

 if ((VAR_9 = FUNC_3(VAR_1, VAR_8, VAR_10, VAR_0, &VAR_7)) != 0) {
  FUNC_4(VAR_7);
  return (VAR_9);
 }
 VAR_9 = FUNC_5(VAR_5, VAR_7);
 if (VAR_9 != 0) {
  FUNC_4(VAR_7);
  return (VAR_9);
 }
 if (VAR_3)
  *VAR_3 = (char *)VAR_7->b_data + FUNC_1(VAR_6, VAR_2);

 *VAR_4 = VAR_7;

 return (0);
}
