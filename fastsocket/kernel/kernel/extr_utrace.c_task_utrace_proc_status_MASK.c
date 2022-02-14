
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int utrace_flags; } ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;

void FUNC_1(struct seq_file *VAR_0, struct task_struct *VAR_1)
{
 FUNC_0(VAR_0, "Utrace:\t%lx\n", VAR_1->utrace_flags);
}
