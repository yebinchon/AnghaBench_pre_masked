
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct super_block {int dummy; } ;
struct proc_inode {int ns_ops; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct nameidata {TYPE_1__ path; } ;
struct inode {struct super_block* i_sb; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 void* FUNC_0 (struct dentry*) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 struct proc_inode* FUNC_3 (struct inode*) ;
 int VAR_1 ;
 int FUNC_4 (struct dentry*) ;
 struct task_struct* FUNC_5 (struct inode*) ;
 struct dentry* FUNC_6 (struct super_block*,struct task_struct*,int ) ;
 int FUNC_7 (struct task_struct*,int ) ;
 int FUNC_8 (struct task_struct*) ;

__attribute__((used)) static void *FUNC_9(struct dentry *VAR_2, struct nameidata *VAR_3)
{
 struct inode *VAR_4 = VAR_2->d_inode;
 struct super_block *VAR_5 = VAR_4->i_sb;
 struct proc_inode *VAR_6 = FUNC_3(VAR_4);
 struct task_struct *VAR_7;
 struct dentry *VAR_8;
 void *VAR_9 = FUNC_1(-VAR_0);

 VAR_7 = FUNC_5(VAR_4);
 if (!VAR_7)
  goto out;

 if (!FUNC_7(VAR_7, VAR_1))
  goto out_put_task;

 VAR_8 = FUNC_6(VAR_5, VAR_7, VAR_6->ns_ops);
 if (FUNC_2(VAR_8)) {
  VAR_9 = FUNC_0(VAR_8);
  goto out_put_task;
 }

 FUNC_4(VAR_3->path.dentry);
 VAR_3->path.dentry = VAR_8;
 VAR_9 = ((void*)0);

out_put_task:
 FUNC_8(VAR_7);
out:
 return VAR_9;
}
