
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct task_struct {int dummy; } ;
struct pid_namespace {int dummy; } ;
struct kstat {int gid; int uid; } ;
struct inode {int i_mode; } ;
struct dentry {TYPE_1__* d_sb; struct inode* d_inode; } ;
struct cred {int egid; int euid; } ;
struct TYPE_2__ {struct pid_namespace* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cred* FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct inode*,struct kstat*) ;
 int FUNC_2 (struct pid_namespace*,struct task_struct*,int) ;
 struct task_struct* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct task_struct*) ;

int FUNC_8(struct vfsmount *VAR_5, struct dentry *VAR_6, struct kstat *VAR_7)
{
 struct inode *VAR_8 = VAR_6->d_inode;
 struct task_struct *VAR_9;
 const struct cred *VAR_10;
 struct pid_namespace *VAR_11 = VAR_6->d_sb->s_fs_info;

 FUNC_1(VAR_8, VAR_7);

 FUNC_5();
 VAR_7->uid = 0;
 VAR_7->gid = 0;
 VAR_9 = FUNC_3(FUNC_4(VAR_8), VAR_1);
 if (VAR_9) {
  if (!FUNC_2(VAR_11, VAR_9, 2)) {
   FUNC_6();




   return -VAR_0;
  }
  if ((VAR_8->i_mode == (VAR_2|VAR_3|VAR_4)) ||
      FUNC_7(VAR_9)) {
   VAR_10 = FUNC_0(VAR_9);
   VAR_7->uid = VAR_10->euid;
   VAR_7->gid = VAR_10->egid;
  }
 }
 FUNC_6();
 return 0;
}
