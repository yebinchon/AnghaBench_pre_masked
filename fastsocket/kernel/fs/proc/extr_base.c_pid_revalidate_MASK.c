
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct nameidata {int dummy; } ;
struct inode {int i_mode; scalar_t__ i_gid; scalar_t__ i_uid; } ;
struct dentry {struct inode* d_inode; } ;
struct cred {scalar_t__ egid; scalar_t__ euid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cred* FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct dentry*) ;
 struct task_struct* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct task_struct*,struct inode*) ;
 scalar_t__ FUNC_7 (struct task_struct*) ;

int FUNC_8(struct dentry *VAR_5, struct nameidata *VAR_6)
{
 struct inode *VAR_7 = VAR_5->d_inode;
 struct task_struct *VAR_8 = FUNC_2(VAR_7);
 const struct cred *VAR_9;

 if (VAR_8) {
  if ((VAR_7->i_mode == (VAR_0|VAR_1|VAR_4)) ||
      FUNC_7(VAR_8)) {
   FUNC_4();
   VAR_9 = FUNC_0(VAR_8);
   VAR_7->i_uid = VAR_9->euid;
   VAR_7->i_gid = VAR_9->egid;
   FUNC_5();
  } else {
   VAR_7->i_uid = 0;
   VAR_7->i_gid = 0;
  }
  VAR_7->i_mode &= ~(VAR_3 | VAR_2);
  FUNC_6(VAR_8, VAR_7);
  FUNC_3(VAR_8);
  return 1;
 }
 FUNC_1(VAR_5);
 return 0;
}
