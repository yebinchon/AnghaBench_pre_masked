
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct seq_operations {int dummy; } ;
struct path {int dummy; } ;
struct TYPE_2__ {struct proc_mounts* private; } ;
struct proc_mounts {int event; struct path root; struct mnt_namespace* ns; TYPE_1__ m; } ;
struct nsproxy {struct mnt_namespace* mnt_ns; } ;
struct mnt_namespace {int event; } ;
struct inode {int dummy; } ;
struct file {TYPE_1__* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct task_struct*,struct path*,int) ;
 int FUNC_1 (struct mnt_namespace*) ;
 struct task_struct* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct proc_mounts*) ;
 struct proc_mounts* FUNC_4 (int,int ) ;
 int FUNC_5 (struct path*) ;
 int FUNC_6 (struct mnt_namespace*) ;
 int FUNC_7 (struct task_struct*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct file*,struct seq_operations const*) ;
 struct nsproxy* FUNC_11 (struct task_struct*) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_3, struct file *VAR_4,
         const struct seq_operations *VAR_5)
{
 struct task_struct *VAR_6 = FUNC_2(VAR_3);
 struct nsproxy *VAR_7;
 struct mnt_namespace *VAR_8 = ((void*)0);
 struct path VAR_9;
 struct proc_mounts *VAR_10;
 int VAR_11 = -VAR_0;

 if (VAR_6) {
  FUNC_8();
  VAR_7 = FUNC_11(VAR_6);
  if (VAR_7) {
   VAR_8 = VAR_7->mnt_ns;
   if (VAR_8)
    FUNC_1(VAR_8);
  }
  FUNC_9();
  if (VAR_8 && FUNC_0(VAR_6, &VAR_9, 1) == 0)
   VAR_11 = 0;
  FUNC_7(VAR_6);
 }

 if (!VAR_8)
  goto err;
 if (VAR_11)
  goto err_put_ns;

 VAR_11 = -VAR_1;
 VAR_10 = FUNC_4(sizeof(struct proc_mounts), VAR_2);
 if (!VAR_10)
  goto err_put_path;

 VAR_4->private_data = &VAR_10->m;
 VAR_11 = FUNC_10(VAR_4, VAR_5);
 if (VAR_11)
  goto err_free;

 VAR_10->m.private = VAR_10;
 VAR_10->ns = VAR_8;
 VAR_10->root = VAR_9;
 VAR_10->event = VAR_8->event;

 return 0;

 err_free:
 FUNC_3(VAR_10);
 err_put_path:
 FUNC_5(&VAR_9);
 err_put_ns:
 FUNC_6(VAR_8);
 err:
 return VAR_11;
}
