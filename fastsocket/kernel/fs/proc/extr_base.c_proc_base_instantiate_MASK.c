
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct proc_inode {int op; int pid; } ;
struct pid_entry {int op; scalar_t__ fop; scalar_t__ iop; int mode; } ;
struct inode {int i_nlink; int i_size; scalar_t__ i_fop; scalar_t__ i_op; int i_mode; int i_ctime; int i_atime; int i_mtime; int i_sb; } ;
struct dentry {int * d_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (int ) ;
 int VAR_3 ;
 struct proc_inode* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int FUNC_5 (struct task_struct*,int ) ;
 int FUNC_6 (struct inode*) ;
 struct inode* FUNC_7 (int ) ;
 int VAR_4 ;

__attribute__((used)) static struct dentry *FUNC_8(struct inode *VAR_5,
 struct dentry *VAR_6, struct task_struct *VAR_7, const void *VAR_8)
{
 const struct pid_entry *VAR_9 = VAR_8;
 struct inode *VAR_10;
 struct proc_inode *VAR_11;
 struct dentry *VAR_12 = FUNC_0(-VAR_1);


 VAR_12 = FUNC_0(-VAR_2);
 VAR_10 = FUNC_7(VAR_5->i_sb);
 if (!VAR_10)
  goto out;


 VAR_11 = FUNC_1(VAR_10);
 VAR_10->i_mtime = VAR_10->i_atime = VAR_10->i_ctime = VAR_0;




 VAR_11->pid = FUNC_5(VAR_7, VAR_3);
 if (!VAR_11->pid)
  goto out_iput;

 VAR_10->i_mode = VAR_9->mode;
 if (FUNC_2(VAR_10->i_mode))
  VAR_10->i_nlink = 2;
 if (FUNC_3(VAR_10->i_mode))
  VAR_10->i_size = 64;
 if (VAR_9->iop)
  VAR_10->i_op = VAR_9->iop;
 if (VAR_9->fop)
  VAR_10->i_fop = VAR_9->fop;
 VAR_11->op = VAR_9->op;
 VAR_6->d_op = &VAR_4;
 FUNC_4(VAR_6, VAR_10);
 VAR_12 = ((void*)0);
out:
 return VAR_12;
out_iput:
 FUNC_6(VAR_10);
 goto out;
}
