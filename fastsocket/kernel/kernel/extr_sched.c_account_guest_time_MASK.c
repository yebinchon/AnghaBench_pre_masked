
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {void* gtime; void* utimescaled; void* utime; } ;
struct cpu_usage_stat {void* guest; void* user; } ;
typedef int cputime_t ;
typedef int cputime64_t ;
struct TYPE_2__ {struct cpu_usage_stat cpustat; } ;


 int FUNC_0 (struct task_struct*,int ) ;
 void* FUNC_1 (void*,int ) ;
 void* FUNC_2 (void*,int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_4(struct task_struct *VAR_1, cputime_t VAR_2,
          cputime_t VAR_3)
{
 cputime64_t VAR_4;
 struct cpu_usage_stat *VAR_5 = &VAR_0.cpustat;

 VAR_4 = FUNC_3(VAR_2);


 VAR_1->utime = FUNC_2(VAR_1->utime, VAR_2);
 VAR_1->utimescaled = FUNC_2(VAR_1->utimescaled, VAR_3);
 FUNC_0(VAR_1, VAR_2);
 VAR_1->gtime = FUNC_2(VAR_1->gtime, VAR_2);


 VAR_5->user = FUNC_1(VAR_5->user, VAR_4);
 VAR_5->guest = FUNC_1(VAR_5->guest, VAR_4);
}
