
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int mode; int gid; int uid; } ;
struct inode {int i_mode; int i_gid; int i_uid; } ;
struct iattr {int dummy; } ;
struct dentry {struct inode* d_inode; } ;


 struct proc_dir_entry* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct iattr*) ;
 int FUNC_2 (struct inode*,struct iattr*) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_0, struct iattr *VAR_1)
{
 struct inode *VAR_2 = VAR_0->d_inode;
 struct proc_dir_entry *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (VAR_4)
  goto out;

 VAR_4 = FUNC_2(VAR_2, VAR_1);
 if (VAR_4)
  goto out;

 VAR_3->uid = VAR_2->i_uid;
 VAR_3->gid = VAR_2->i_gid;
 VAR_3->mode = VAR_2->i_mode;
out:
 return VAR_4;
}
