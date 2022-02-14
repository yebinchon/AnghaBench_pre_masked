
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rq {int nr_iowait; } ;
struct cpu_usage_stat {void* idle; void* iowait; } ;
typedef int cputime_t ;
typedef int cputime64_t ;
struct TYPE_2__ {struct cpu_usage_stat cpustat; } ;


 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (void*,int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_0 ;
 struct rq* FUNC_3 () ;

void FUNC_4(cputime_t VAR_1)
{
 struct cpu_usage_stat *VAR_2 = &VAR_0.cpustat;
 cputime64_t VAR_3 = FUNC_2(VAR_1);
 struct rq *VAR_4 = FUNC_3();

 if (FUNC_0(&VAR_4->nr_iowait) > 0)
  VAR_2->iowait = FUNC_1(VAR_2->iowait, VAR_3);
 else
  VAR_2->idle = FUNC_1(VAR_2->idle, VAR_3);
}
