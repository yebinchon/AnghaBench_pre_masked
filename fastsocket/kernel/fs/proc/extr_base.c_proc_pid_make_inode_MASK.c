
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct super_block {int dummy; } ;
struct proc_inode {int pid; } ;
struct inode {int i_gid; int i_uid; int * i_op; int i_ctime; int i_atime; int i_mtime; } ;
struct cred {int egid; int euid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct proc_inode* FUNC_0 (struct inode*) ;
 struct cred* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*,int ) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct super_block*) ;
 int VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct task_struct*,struct inode*) ;
 scalar_t__ FUNC_8 (struct task_struct*) ;

struct inode *FUNC_9(struct super_block * VAR_3, struct task_struct *VAR_4)
{
 struct inode * VAR_5;
 struct proc_inode *VAR_6;
 const struct cred *VAR_7;



 VAR_5 = FUNC_4(VAR_3);
 if (!VAR_5)
  goto out;


 VAR_6 = FUNC_0(VAR_5);
 VAR_5->i_mtime = VAR_5->i_atime = VAR_5->i_ctime = VAR_0;
 VAR_5->i_op = &VAR_2;




 VAR_6->pid = FUNC_2(VAR_4, VAR_1);
 if (!VAR_6->pid)
  goto out_unlock;

 if (FUNC_8(VAR_4)) {
  FUNC_5();
  VAR_7 = FUNC_1(VAR_4);
  VAR_5->i_uid = VAR_7->euid;
  VAR_5->i_gid = VAR_7->egid;
  FUNC_6();
 }
 FUNC_7(VAR_4, VAR_5);

out:
 return VAR_5;

out_unlock:
 FUNC_3(VAR_5);
 return ((void*)0);
}
