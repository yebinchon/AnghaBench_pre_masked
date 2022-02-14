
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cgroup {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct cgroup *VAR_1, struct task_struct *VAR_2)
{
 FUNC_1();
 if (FUNC_0(VAR_2)) {
  FUNC_2();
  return -VAR_0;
 }
 FUNC_2();
 return 0;
}
