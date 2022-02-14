
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_map {int dummy; } ;
struct TYPE_2__ {int pid; } ;
struct perf_evlist {TYPE_1__ workload; int entries; int * heads; } ;
struct cpu_map {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct perf_evlist*,struct cpu_map*,struct thread_map*) ;

void FUNC_3(struct perf_evlist *VAR_1, struct cpu_map *VAR_2,
         struct thread_map *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
  FUNC_0(&VAR_1->heads[VAR_4]);
 FUNC_1(&VAR_1->entries);
 FUNC_2(VAR_1, VAR_2, VAR_3);
 VAR_1->workload.pid = -1;
}
