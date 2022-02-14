
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct seq_file {int dummy; } ;
struct pid_namespace {int dummy; } ;
struct pid {int dummy; } ;
struct mm_struct {int dummy; } ;


 struct mm_struct* FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct mm_struct*) ;
 int FUNC_2 (struct seq_file*,char*,int,int,int,int,int,int,int ) ;
 int FUNC_3 (struct mm_struct*,int*,int*,int*,int*) ;

int FUNC_4(struct seq_file *VAR_0, struct pid_namespace *VAR_1,
   struct pid *VAR_2, struct task_struct *VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0, VAR_6 = 0, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 struct mm_struct *VAR_10 = FUNC_0(VAR_3);

 if (VAR_10) {
  VAR_4 = FUNC_3(VAR_10, &VAR_6, &VAR_7, &VAR_9, &VAR_5);
  FUNC_1(VAR_10);
 }
 FUNC_2(VAR_0, "%d %d %d %d %d %d %d\n",
   VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, 0);

 return 0;
}
