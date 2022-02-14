
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int proc_get_link; } ;
struct proc_inode {unsigned int fd; TYPE_1__ op; } ;
struct inode {int i_mode; int i_size; int * i_op; int i_sb; } ;
struct files_struct {int file_lock; } ;
struct file {int f_mode; } ;
struct dentry {int * d_op; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct proc_inode* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 struct file* FUNC_3 (struct files_struct*,unsigned int) ;
 struct files_struct* FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct inode*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct inode* FUNC_6 (int ,struct task_struct*) ;
 int FUNC_7 (struct files_struct*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (struct dentry*,int *) ;

__attribute__((used)) static struct dentry *FUNC_11(struct inode *VAR_10,
 struct dentry *VAR_11, struct task_struct *VAR_12, const void *VAR_13)
{
 unsigned VAR_14 = *(const unsigned *)VAR_13;
 struct file *VAR_15;
 struct files_struct *VAR_16;
  struct inode *VAR_17;
  struct proc_inode *VAR_18;
 struct dentry *VAR_19 = FUNC_0(-VAR_0);

 VAR_17 = FUNC_6(VAR_10->i_sb, VAR_12);
 if (!VAR_17)
  goto out;
 VAR_18 = FUNC_1(VAR_17);
 VAR_18->fd = VAR_14;
 VAR_16 = FUNC_4(VAR_12);
 if (!VAR_16)
  goto out_iput;
 VAR_17->i_mode = VAR_3;





 FUNC_8(&VAR_16->file_lock);
 VAR_15 = FUNC_3(VAR_16, VAR_14);
 if (!VAR_15)
  goto out_unlock;
 if (VAR_15->f_mode & VAR_1)
  VAR_17->i_mode |= VAR_4 | VAR_6;
 if (VAR_15->f_mode & VAR_2)
  VAR_17->i_mode |= VAR_5 | VAR_6;
 FUNC_9(&VAR_16->file_lock);
 FUNC_7(VAR_16);

 VAR_17->i_op = &VAR_8;
 VAR_17->i_size = 64;
 VAR_18->op.proc_get_link = VAR_7;
 VAR_11->d_op = &VAR_9;
 FUNC_2(VAR_11, VAR_17);

 if (FUNC_10(VAR_11, ((void*)0)))
  VAR_19 = ((void*)0);

 out:
 return VAR_19;
out_unlock:
 FUNC_9(&VAR_16->file_lock);
 FUNC_7(VAR_16);
out_iput:
 FUNC_5(VAR_17);
 goto out;
}
