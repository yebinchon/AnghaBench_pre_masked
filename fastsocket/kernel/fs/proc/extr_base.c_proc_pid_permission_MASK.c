
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct pid_namespace {int hide_pid; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct pid_namespace* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,int,int *) ;
 struct task_struct* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct pid_namespace*,struct task_struct*,int) ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, int VAR_4)
{
 struct pid_namespace *VAR_5 = VAR_3->i_sb->s_fs_info;
 struct task_struct *VAR_6;
 bool VAR_7;

 VAR_6 = FUNC_1(VAR_3);
 if (!VAR_6)
  return -VAR_2;
 VAR_7 = FUNC_2(VAR_5, VAR_6, 1);
 FUNC_3(VAR_6);

 if (!VAR_7) {
  if (VAR_5->hide_pid == 2) {






   return -VAR_0;
  }

  return -VAR_1;
 }
 return FUNC_0(VAR_3, VAR_4, ((void*)0));
}
