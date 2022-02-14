
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tgid_iter {scalar_t__ tgid; struct task_struct* task; } ;
struct task_struct {int dummy; } ;
struct pid_namespace {int dummy; } ;
struct pid_entry {int dummy; } ;
struct TYPE_6__ {TYPE_1__* dentry; } ;
struct file {scalar_t__ f_pos; TYPE_4__* f_dentry; TYPE_2__ f_path; } ;
typedef int filldir_t ;
struct TYPE_8__ {TYPE_3__* d_sb; } ;
struct TYPE_7__ {struct pid_namespace* s_fs_info; } ;
struct TYPE_5__ {int d_inode; } ;


 unsigned int FUNC_0 (struct pid_entry*) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct task_struct* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct pid_namespace*,struct task_struct*,int) ;
 struct tgid_iter FUNC_3 (struct pid_namespace*,struct tgid_iter) ;
 scalar_t__ FUNC_4 (struct file*,void*,int ,struct task_struct*,struct pid_entry const*) ;
 struct pid_entry* VAR_4 ;
 scalar_t__ FUNC_5 (struct file*,void*,int ,struct tgid_iter) ;
 int FUNC_6 (struct task_struct*) ;

int FUNC_7(struct file * VAR_5, void * VAR_6, filldir_t VAR_7)
{
 unsigned int VAR_8;
 struct task_struct *VAR_9;
 struct tgid_iter VAR_10;
 struct pid_namespace *VAR_11;
 filldir_t VAR_12;

 if (VAR_5->f_pos >= VAR_1 + VAR_2)
  goto out_no_task;
 VAR_8 = VAR_5->f_pos - VAR_0;

 VAR_9 = FUNC_1(VAR_5->f_path.dentry->d_inode);
 if (!VAR_9)
  goto out_no_task;

 for (; VAR_8 < FUNC_0(VAR_4); VAR_5->f_pos++, VAR_8++) {
  const struct pid_entry *VAR_13 = &VAR_4[VAR_8];
  if (FUNC_4(VAR_5, VAR_6, VAR_7, VAR_9, VAR_13) < 0)
   goto out;
 }

 VAR_11 = VAR_5->f_dentry->d_sb->s_fs_info;
 VAR_10.task = ((void*)0);
 VAR_10.tgid = VAR_5->f_pos - VAR_2;
 for (VAR_10 = FUNC_3(VAR_11, VAR_10);
      VAR_10.task;
      VAR_10.tgid += 1, VAR_10 = FUNC_3(VAR_11, VAR_10)) {
  if (FUNC_2(VAR_11, VAR_10.task, 2))
   VAR_12 = VAR_7;
  else
   VAR_12 = VAR_3;

  VAR_5->f_pos = VAR_10.tgid + VAR_2;
  if (FUNC_5(VAR_5, VAR_6, VAR_12, VAR_10) < 0) {
   FUNC_6(VAR_10.task);
   goto out;
  }
 }
 VAR_5->f_pos = VAR_1 + VAR_2;
out:
 FUNC_6(VAR_9);
out_no_task:
 return 0;
}
