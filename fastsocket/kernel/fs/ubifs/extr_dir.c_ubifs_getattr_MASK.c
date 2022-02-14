
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct ubifs_inode {int ui_size; int xattr_size; int ui_mutex; } ;
struct kstat {int size; int blocks; int blksize; int ctime; int mtime; int atime; int rdev; int gid; int uid; int nlink; int mode; int ino; int dev; } ;
struct inode {int i_mode; int i_ctime; int i_mtime; int i_atime; int i_rdev; int i_gid; int i_uid; int i_nlink; int i_ino; TYPE_1__* i_sb; } ;
struct dentry {struct inode* d_inode; } ;
typedef int loff_t ;
struct TYPE_2__ {int s_dev; } ;


 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ubifs_inode* FUNC_4 (struct inode*) ;

int FUNC_5(struct vfsmount *VAR_1, struct dentry *VAR_2,
    struct kstat *VAR_3)
{
 loff_t VAR_4;
 struct inode *VAR_5 = VAR_2->d_inode;
 struct ubifs_inode *VAR_6 = FUNC_4(VAR_5);

 FUNC_2(&VAR_6->ui_mutex);
 VAR_3->dev = VAR_5->i_sb->s_dev;
 VAR_3->ino = VAR_5->i_ino;
 VAR_3->mode = VAR_5->i_mode;
 VAR_3->nlink = VAR_5->i_nlink;
 VAR_3->uid = VAR_5->i_uid;
 VAR_3->gid = VAR_5->i_gid;
 VAR_3->rdev = VAR_5->i_rdev;
 VAR_3->atime = VAR_5->i_atime;
 VAR_3->mtime = VAR_5->i_mtime;
 VAR_3->ctime = VAR_5->i_ctime;
 VAR_3->blksize = VAR_0;
 VAR_3->size = VAR_6->ui_size;
 if (FUNC_1(VAR_5->i_mode)) {
  VAR_4 = VAR_6->xattr_size;
  VAR_4 += VAR_3->size;
  VAR_4 = FUNC_0(VAR_4, VAR_0);




  VAR_3->blocks = VAR_4 >> 9;
 } else
  VAR_3->blocks = 0;
 FUNC_3(&VAR_6->ui_mutex);
 return 0;
}
