
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct proc_ns_operations {int dummy; } ;
struct proc_inode {struct proc_ns_operations const* ns_ops; } ;
struct inode {int i_mode; int * i_op; int i_sb; } ;
struct dentry {int * d_op; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 struct proc_inode* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct dentry*,int *) ;
 int VAR_4 ;
 struct inode* FUNC_4 (int ,struct task_struct*) ;

__attribute__((used)) static struct dentry *FUNC_5(struct inode *VAR_5,
 struct dentry *VAR_6, struct task_struct *VAR_7, const void *VAR_8)
{
 const struct proc_ns_operations *VAR_9 = VAR_8;
 struct inode *VAR_10;
 struct proc_inode *VAR_11;
 struct dentry *VAR_12 = FUNC_0(-VAR_0);

 VAR_10 = FUNC_4(VAR_5->i_sb, VAR_7);
 if (!VAR_10)
  goto out;

 VAR_11 = FUNC_1(VAR_10);
 VAR_10->i_mode = VAR_1|VAR_2;
 VAR_10->i_op = &VAR_4;
 VAR_11->ns_ops = VAR_9;

 VAR_6->d_op = &VAR_3;
 FUNC_2(VAR_6, VAR_10);

 if (FUNC_3(VAR_6, ((void*)0)))
  VAR_12 = ((void*)0);
out:
 return VAR_12;
}
