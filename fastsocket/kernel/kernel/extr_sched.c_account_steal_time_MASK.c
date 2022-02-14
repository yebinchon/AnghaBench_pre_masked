
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpu_usage_stat {int steal; } ;
typedef int cputime_t ;
typedef int cputime64_t ;
struct TYPE_2__ {struct cpu_usage_stat cpustat; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;

void FUNC_2(cputime_t VAR_1)
{
 struct cpu_usage_stat *VAR_2 = &VAR_0.cpustat;
 cputime64_t VAR_3 = FUNC_1(VAR_1);

 VAR_2->steal = FUNC_0(VAR_2->steal, VAR_3);
}
