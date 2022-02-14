
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cpu_time_count {int sched; int cpu; } ;
struct task_struct {int dummy; } ;
typedef int clockid_t ;





 int FUNC_0 (int const) ;
 int VAR_0 ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static int FUNC_4(const clockid_t VAR_1, struct task_struct *VAR_2,
       union cpu_time_count *VAR_3)
{
 switch (FUNC_0(VAR_1)) {
 default:
  return -VAR_0;
 case 130:
  VAR_3->cpu = FUNC_1(VAR_2);
  break;
 case 128:
  VAR_3->cpu = FUNC_3(VAR_2);
  break;
 case 129:
  VAR_3->sched = FUNC_2(VAR_2);
  break;
 }
 return 0;
}
