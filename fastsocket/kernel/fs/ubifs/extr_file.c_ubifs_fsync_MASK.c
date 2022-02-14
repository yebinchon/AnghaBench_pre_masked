
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_info {int dummy; } ;
struct inode {int i_state; TYPE_1__* i_sb; int i_ino; } ;
struct file {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_4__ {int (* write_inode ) (struct inode*,int *) ;} ;
struct TYPE_3__ {TYPE_2__* s_op; struct ubifs_info* s_fs_info; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct inode*,int *) ;
 int FUNC_2 (struct ubifs_info*,struct inode*) ;

int FUNC_3(struct file *VAR_1, struct dentry *VAR_2, int VAR_3)
{
 struct inode *VAR_4 = VAR_2->d_inode;
 struct ubifs_info *VAR_5 = VAR_4->i_sb->s_fs_info;
 int VAR_6;

 FUNC_0("syncing inode %lu", VAR_4->i_ino);





 if (!VAR_3 || (VAR_4->i_state & VAR_0)) {
  VAR_6 = VAR_4->i_sb->s_op->write_inode(VAR_4, ((void*)0));
  if (VAR_6)
   return VAR_6;
 }





 VAR_6 = FUNC_2(VAR_5, VAR_4);
 if (VAR_6)
  return VAR_6;

 return 0;
}
