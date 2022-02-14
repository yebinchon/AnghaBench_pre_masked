
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct seq_file {struct inode* private; } ;
struct pid_namespace {int dummy; } ;
struct pid {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_5__ {int (* proc_show ) (struct seq_file*,struct pid_namespace*,struct pid*,struct task_struct*) ;} ;
struct TYPE_6__ {TYPE_2__ op; } ;
struct TYPE_4__ {struct pid_namespace* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 struct task_struct* FUNC_1 (struct pid*,int ) ;
 struct pid* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct seq_file*,struct pid_namespace*,struct pid*,struct task_struct*) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_2, void *VAR_3)
{
 struct inode *VAR_4 = VAR_2->private;
 struct pid_namespace *VAR_5;
 struct pid *VAR_6;
 struct task_struct *VAR_7;
 int VAR_8;

 VAR_5 = VAR_4->i_sb->s_fs_info;
 VAR_6 = FUNC_2(VAR_4);
 VAR_7 = FUNC_1(VAR_6, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_4)->op.proc_show(VAR_2, VAR_5, VAR_6, VAR_7);

 FUNC_3(VAR_7);
 return VAR_8;
}
