
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pid_namespace {int hide_pid; int pid_gid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct task_struct*,int ) ;

__attribute__((used)) static bool FUNC_2(struct pid_namespace *VAR_1,
     struct task_struct *VAR_2,
     int VAR_3)
{
 if (VAR_1->hide_pid < VAR_3)
  return 1;
 if (FUNC_0(VAR_1->pid_gid))
  return 1;
 return FUNC_1(VAR_2, VAR_0);
}
