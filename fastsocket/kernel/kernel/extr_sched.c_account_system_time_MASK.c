
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int flags; void* stimescaled; void* stime; } ;
struct cpu_usage_stat {void* system; void* softirq; void* irq; } ;
typedef int cputime_t ;
typedef int cputime64_t ;
struct TYPE_2__ {struct cpu_usage_stat cpustat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct task_struct*,int ) ;
 int FUNC_1 (struct task_struct*,int ,int ) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*,int ,int ) ;
 void* FUNC_4 (void*,int ) ;
 void* FUNC_5 (void*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 () ;
 TYPE_1__ VAR_2 ;

void FUNC_10(struct task_struct *VAR_3, int VAR_4,
    cputime_t VAR_5, cputime_t VAR_6)
{
 struct cpu_usage_stat *VAR_7 = &VAR_2.cpustat;
 cputime64_t VAR_8;

 if ((VAR_3->flags & VAR_1) && (FUNC_9() - VAR_4 == 0)) {
  FUNC_1(VAR_3, VAR_5, VAR_6);
  return;
 }


 VAR_3->stime = FUNC_5(VAR_3->stime, VAR_5);
 VAR_3->stimescaled = FUNC_5(VAR_3->stimescaled, VAR_6);
 FUNC_0(VAR_3, VAR_5);


 VAR_8 = FUNC_6(VAR_5);
 if (FUNC_7() - VAR_4)
  VAR_7->irq = FUNC_4(VAR_7->irq, VAR_8);
 else if (FUNC_8())
  VAR_7->softirq = FUNC_4(VAR_7->softirq, VAR_8);
 else
  VAR_7->system = FUNC_4(VAR_7->system, VAR_8);

 FUNC_3(VAR_3, VAR_0, VAR_5);


 FUNC_2(VAR_3);
}
