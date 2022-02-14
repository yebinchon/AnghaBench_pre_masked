
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {struct super_block* mnt_sb; } ;
struct super_block {int s_blocksize; } ;
struct kstat {int blocks; int blksize; int size; } ;
struct dentry {int d_inode; } ;


 int FUNC_0 (int ,struct kstat*) ;
 int FUNC_1 (struct super_block*,int ) ;

int FUNC_2(struct vfsmount *VAR_0, struct dentry *VAR_1, struct kstat *VAR_2)
{
 struct super_block *VAR_3 = VAR_0->mnt_sb;
 FUNC_0(VAR_1->d_inode, VAR_2);
 VAR_2->blocks = (VAR_3->s_blocksize / 512) * FUNC_1(VAR_3, VAR_2->size);
 VAR_2->blksize = VAR_3->s_blocksize;
 return 0;
}
