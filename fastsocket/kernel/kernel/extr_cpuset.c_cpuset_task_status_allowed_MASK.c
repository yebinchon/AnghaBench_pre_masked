
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int mems_allowed; int cpus_allowed; } ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,int *) ;
 int FUNC_1 (struct seq_file*,int *) ;
 int FUNC_2 (struct seq_file*,int *) ;
 int FUNC_3 (struct seq_file*,int *) ;
 int FUNC_4 (struct seq_file*,char*) ;

void FUNC_5(struct seq_file *VAR_0, struct task_struct *VAR_1)
{
 FUNC_4(VAR_0, "Cpus_allowed:\t");
 FUNC_0(VAR_0, &VAR_1->cpus_allowed);
 FUNC_4(VAR_0, "\n");
 FUNC_4(VAR_0, "Cpus_allowed_list:\t");
 FUNC_1(VAR_0, &VAR_1->cpus_allowed);
 FUNC_4(VAR_0, "\n");
 FUNC_4(VAR_0, "Mems_allowed:\t");
 FUNC_2(VAR_0, &VAR_1->mems_allowed);
 FUNC_4(VAR_0, "\n");
 FUNC_4(VAR_0, "Mems_allowed_list:\t");
 FUNC_3(VAR_0, &VAR_1->mems_allowed);
 FUNC_4(VAR_0, "\n");
}
