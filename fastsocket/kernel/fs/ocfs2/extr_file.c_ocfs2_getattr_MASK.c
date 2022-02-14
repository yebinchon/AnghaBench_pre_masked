
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct super_block {struct ocfs2_super* s_fs_info; } ;
struct ocfs2_super {int s_clustersize; } ;
struct kstat {int blksize; } ;
struct inode {struct super_block* i_sb; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct kstat*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct dentry*) ;

int FUNC_5(struct vfsmount *VAR_1,
    struct dentry *VAR_2,
    struct kstat *VAR_3)
{
 struct inode *VAR_4 = VAR_2->d_inode;
 struct super_block *VAR_5 = VAR_2->d_inode->i_sb;
 struct ocfs2_super *VAR_6 = VAR_5->s_fs_info;
 int VAR_7;

 FUNC_1();

 VAR_7 = FUNC_4(VAR_2);
 if (VAR_7) {
  if (VAR_7 != -VAR_0)
   FUNC_2(VAR_7);
  goto bail;
 }

 FUNC_0(VAR_4, VAR_3);


 VAR_3->blksize = VAR_6->s_clustersize;

bail:
 FUNC_3(VAR_7);

 return VAR_7;
}
