
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int personality; } ;
struct seq_file {int dummy; } ;
struct pid_namespace {int dummy; } ;
struct pid {int dummy; } ;


 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, struct pid_namespace *VAR_1,
    struct pid *VAR_2, struct task_struct *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4) {
  FUNC_1(VAR_0, "%08x\n", VAR_3->personality);
  FUNC_2(VAR_3);
 }
 return VAR_4;
}
