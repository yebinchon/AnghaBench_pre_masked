
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct hrtimer_cpu_base {TYPE_1__* clock_base; } ;
typedef int ktime_t ;
struct TYPE_2__ {int softirq_time; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct timespec*,struct timespec*,struct timespec*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct timespec) ;

__attribute__((used)) static void FUNC_3(struct hrtimer_cpu_base *VAR_2)
{
 ktime_t VAR_3, VAR_4;
 struct timespec VAR_5, VAR_6, VAR_7;

 FUNC_0(&VAR_5, &VAR_6, &VAR_7);

 VAR_3 = FUNC_2(VAR_5);
 VAR_4 = FUNC_2(VAR_6);
 VAR_2->clock_base[VAR_1].softirq_time = VAR_3;
 VAR_2->clock_base[VAR_0].softirq_time =
  FUNC_1(VAR_3, VAR_4);
}
