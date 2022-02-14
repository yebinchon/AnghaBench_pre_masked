
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
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 struct task_struct* FUNC_3 (unsigned int,struct pid_namespace*) ;
 int FUNC_4 (struct task_struct*) ;
 unsigned int FUNC_5 (struct dentry*) ;
 struct dentry* FUNC_6 (struct inode*,struct dentry*) ;
 struct dentry* FUNC_7 (struct inode*,struct dentry*,struct task_struct*,int *) ;
 int FUNC_8 (struct task_struct*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

struct dentry *FUNC_11(struct inode *VAR_1, struct dentry * VAR_2, struct nameidata *VAR_3)
{
 struct dentry *VAR_4 = FUNC_0(-VAR_0);
 struct task_struct *VAR_5;
 unsigned VAR_6;
 struct pid_namespace *VAR_7;

 VAR_4 = FUNC_6(VAR_1, VAR_2);
 if (!FUNC_1(VAR_4) || FUNC_2(VAR_4) != -VAR_0)
  goto out;

 VAR_6 = FUNC_5(VAR_2);
 if (VAR_6 == ~0U)
  goto out;

 VAR_7 = VAR_2->d_sb->s_fs_info;
 FUNC_9();
 VAR_5 = FUNC_3(VAR_6, VAR_7);
 if (VAR_5)
  FUNC_4(VAR_5);
 FUNC_10();
 if (!VAR_5)
  goto out;

 VAR_4 = FUNC_7(VAR_1, VAR_2, VAR_5, ((void*)0));
 FUNC_8(VAR_5);
out:
 return VAR_4;
}
