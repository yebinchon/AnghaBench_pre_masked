
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct pid_namespace {int dummy; } ;
struct nameidata {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {struct pid_namespace* s_fs_info; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 struct task_struct* FUNC_1 (unsigned int,struct pid_namespace*) ;
 struct task_struct* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct task_struct*) ;
 unsigned int FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (struct inode*,struct dentry*,struct task_struct*,int *) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct task_struct*,struct task_struct*) ;

__attribute__((used)) static struct dentry *FUNC_10(struct inode *VAR_1, struct dentry * VAR_2, struct nameidata *VAR_3)
{
 struct dentry *VAR_4 = FUNC_0(-VAR_0);
 struct task_struct *VAR_5;
 struct task_struct *VAR_6 = FUNC_2(VAR_1);
 unsigned VAR_7;
 struct pid_namespace *VAR_8;

 if (!VAR_6)
  goto out_no_task;

 VAR_7 = FUNC_4(VAR_2);
 if (VAR_7 == ~0U)
  goto out;

 VAR_8 = VAR_2->d_sb->s_fs_info;
 FUNC_7();
 VAR_5 = FUNC_1(VAR_7, VAR_8);
 if (VAR_5)
  FUNC_3(VAR_5);
 FUNC_8();
 if (!VAR_5)
  goto out;
 if (!FUNC_9(VAR_6, VAR_5))
  goto out_drop_task;

 VAR_4 = FUNC_5(VAR_1, VAR_2, VAR_5, ((void*)0));
out_drop_task:
 FUNC_6(VAR_5);
out:
 FUNC_6(VAR_6);
out_no_task:
 return VAR_4;
}
