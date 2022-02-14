
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct path {int dummy; } ;
struct mm_struct {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct path f_path; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*) ;
 struct file* FUNC_1 (struct mm_struct*) ;
 struct task_struct* FUNC_2 (struct inode*) ;
 struct mm_struct* FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct mm_struct*) ;
 int FUNC_5 (struct path*) ;
 int FUNC_6 (struct task_struct*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, struct path *VAR_2)
{
 struct task_struct *VAR_3;
 struct mm_struct *VAR_4;
 struct file *VAR_5;

 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3)
  return -VAR_0;
 VAR_4 = FUNC_3(VAR_3);
 FUNC_6(VAR_3);
 if (!VAR_4)
  return -VAR_0;
 VAR_5 = FUNC_1(VAR_4);
 FUNC_4(VAR_4);
 if (VAR_5) {
  *VAR_2 = VAR_5->f_path;
  FUNC_5(&VAR_5->f_path);
  FUNC_0(VAR_5);
  return 0;
 } else
  return -VAR_0;
}
