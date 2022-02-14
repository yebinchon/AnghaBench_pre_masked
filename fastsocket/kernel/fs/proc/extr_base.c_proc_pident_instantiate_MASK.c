
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct proc_inode {int op; } ;
struct pid_entry {int op; scalar_t__ fop; scalar_t__ iop; int mode; } ;
struct inode {int i_nlink; scalar_t__ i_fop; scalar_t__ i_op; int i_mode; int i_sb; } ;
struct dentry {int * d_op; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 struct proc_inode* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct dentry*,int *) ;
 struct inode* FUNC_5 (int ,struct task_struct*) ;

__attribute__((used)) static struct dentry *FUNC_6(struct inode *VAR_2,
 struct dentry *VAR_3, struct task_struct *VAR_4, const void *VAR_5)
{
 const struct pid_entry *VAR_6 = VAR_5;
 struct inode *VAR_7;
 struct proc_inode *VAR_8;
 struct dentry *VAR_9 = FUNC_0(-VAR_0);

 VAR_7 = FUNC_5(VAR_2->i_sb, VAR_4);
 if (!VAR_7)
  goto out;

 VAR_8 = FUNC_1(VAR_7);
 VAR_7->i_mode = VAR_6->mode;
 if (FUNC_2(VAR_7->i_mode))
  VAR_7->i_nlink = 2;
 if (VAR_6->iop)
  VAR_7->i_op = VAR_6->iop;
 if (VAR_6->fop)
  VAR_7->i_fop = VAR_6->fop;
 VAR_8->op = VAR_6->op;
 VAR_3->d_op = &VAR_1;
 FUNC_3(VAR_3, VAR_7);

 if (FUNC_4(VAR_3, ((void*)0)))
  VAR_9 = ((void*)0);
out:
 return VAR_9;
}
