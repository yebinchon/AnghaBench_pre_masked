
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {void* utimescaled; void* utime; } ;
struct cpu_usage_stat {void* user; void* nice; } ;
typedef int cputime_t ;
typedef int cputime64_t ;
struct TYPE_2__ {struct cpu_usage_stat cpustat; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*,int ) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*,int ,int ) ;
 void* FUNC_4 (void*,int ) ;
 void* FUNC_5 (void*,int ) ;
 int FUNC_6 (int ) ;
 TYPE_1__ VAR_1 ;

void FUNC_7(struct task_struct *VAR_2, cputime_t VAR_3,
         cputime_t VAR_4)
{
 struct cpu_usage_stat *VAR_5 = &VAR_1.cpustat;
 cputime64_t VAR_6;


 VAR_2->utime = FUNC_5(VAR_2->utime, VAR_3);
 VAR_2->utimescaled = FUNC_5(VAR_2->utimescaled, VAR_4);
 FUNC_1(VAR_2, VAR_3);


 VAR_6 = FUNC_6(VAR_3);
 if (FUNC_0(VAR_2) > 0)
  VAR_5->nice = FUNC_4(VAR_5->nice, VAR_6);
 else
  VAR_5->user = FUNC_4(VAR_5->user, VAR_6);

 FUNC_3(VAR_2, VAR_0, VAR_3);

 FUNC_2(VAR_2);
}
