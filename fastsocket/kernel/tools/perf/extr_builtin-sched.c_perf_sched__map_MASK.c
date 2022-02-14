
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sched {int max_cpu; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct perf_sched*,int,int *) ;
 int FUNC_1 (struct perf_sched*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct perf_sched *VAR_1)
{
 VAR_1->max_cpu = FUNC_3(VAR_0);

 FUNC_2();
 if (FUNC_0(VAR_1, 1, ((void*)0)))
  return -1;
 FUNC_1(VAR_1);
 return 0;
}
