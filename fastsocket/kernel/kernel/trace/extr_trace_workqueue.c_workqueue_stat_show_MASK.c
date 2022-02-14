
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int comm; } ;
struct seq_file {int dummy; } ;
struct pid {int dummy; } ;
struct cpu_workqueue_stats {int executed; int inserted; int cpu; int pid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct pid* FUNC_1 (int ) ;
 struct task_struct* FUNC_2 (struct pid*,int ) ;
 int FUNC_3 (struct pid*) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct seq_file*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_1, void *VAR_2)
{
 struct cpu_workqueue_stats *VAR_3 = VAR_2;
 struct pid *VAR_4;
 struct task_struct *VAR_5;

 VAR_4 = FUNC_1(VAR_3->pid);
 if (VAR_4) {
  VAR_5 = FUNC_2(VAR_4, VAR_0);
  if (VAR_5) {
   FUNC_5(VAR_1, "%3d %6d     %6u       %s\n", VAR_3->cpu,
       FUNC_0(&VAR_3->inserted), VAR_3->executed,
       VAR_5->comm);
   FUNC_4(VAR_5);
  }
  FUNC_3(VAR_4);
 }

 return 0;
}
