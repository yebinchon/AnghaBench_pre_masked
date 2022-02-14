
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct task_struct {struct task_struct* group_leader; } ;
struct pid_namespace {int dummy; } ;
struct inode {int i_ino; } ;
struct TYPE_4__ {struct dentry* dentry; } ;
struct file {scalar_t__ f_version; scalar_t__ f_pos; TYPE_3__* f_dentry; TYPE_1__ f_path; } ;
struct dentry {struct inode* d_inode; } ;
typedef int ino_t ;
typedef int (* filldir_t ) (void*,char*,int,scalar_t__,int ,int ) ;
struct TYPE_6__ {TYPE_2__* d_sb; } ;
struct TYPE_5__ {struct pid_namespace* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* FUNC_0 (struct task_struct*,int,scalar_t__,struct pid_namespace*) ;
 struct task_struct* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct task_struct*) ;
 struct task_struct* FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (struct task_struct*) ;
 scalar_t__ FUNC_6 (struct file*,void*,int (*) (void*,char*,int,scalar_t__,int ,int ),struct task_struct*,int) ;
 int FUNC_7 (struct task_struct*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct task_struct*,struct pid_namespace*) ;

__attribute__((used)) static int FUNC_11(struct file * VAR_2, void * VAR_3, filldir_t VAR_4)
{
 struct dentry *VAR_5 = VAR_2->f_path.dentry;
 struct inode *VAR_6 = VAR_5->d_inode;
 struct task_struct *VAR_7 = ((void*)0);
 struct task_struct *VAR_8;
 int VAR_9 = -VAR_1;
 ino_t VAR_10;
 int VAR_11;
 struct pid_namespace *VAR_12;

 VAR_8 = FUNC_1(VAR_6);
 if (!VAR_8)
  goto out_no_task;
 FUNC_8();
 if (FUNC_5(VAR_8)) {
  VAR_7 = VAR_8->group_leader;
  FUNC_2(VAR_7);
 }
 FUNC_9();
 FUNC_7(VAR_8);
 if (!VAR_7)
  goto out_no_task;
 VAR_9 = 0;

 switch ((unsigned long)VAR_2->f_pos) {
 case 0:
  VAR_10 = VAR_6->i_ino;
  if (VAR_4(VAR_3, ".", 1, VAR_2->f_pos, VAR_10, VAR_0) < 0)
   goto out;
  VAR_2->f_pos++;

 case 1:
  VAR_10 = FUNC_4(VAR_5);
  if (VAR_4(VAR_3, "..", 2, VAR_2->f_pos, VAR_10, VAR_0) < 0)
   goto out;
  VAR_2->f_pos++;

 }




 VAR_12 = VAR_2->f_dentry->d_sb->s_fs_info;
 VAR_11 = (int)VAR_2->f_version;
 VAR_2->f_version = 0;
 for (VAR_8 = FUNC_0(VAR_7, VAR_11, VAR_2->f_pos - 2, VAR_12);
      VAR_8;
      VAR_8 = FUNC_3(VAR_8), VAR_2->f_pos++) {
  VAR_11 = FUNC_10(VAR_8, VAR_12);
  if (FUNC_6(VAR_2, VAR_3, VAR_4, VAR_8, VAR_11) < 0) {


   VAR_2->f_version = (u64)VAR_11;
   FUNC_7(VAR_8);
   break;
  }
 }
out:
 FUNC_7(VAR_7);
out_no_task:
 return VAR_9;
}
