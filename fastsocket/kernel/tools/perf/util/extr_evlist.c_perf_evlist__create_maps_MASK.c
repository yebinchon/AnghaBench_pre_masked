
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_target {int cpu_list; int uses_mmap; int uid; int tid; int pid; } ;
struct perf_evlist {int * threads; int * cpus; } ;


 void* FUNC_0 () ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (struct perf_target*) ;
 scalar_t__ FUNC_3 (struct perf_target*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ,int ) ;

int FUNC_6(struct perf_evlist *VAR_0,
        struct perf_target *VAR_1)
{
 VAR_0->threads = FUNC_5(VAR_1->pid, VAR_1->tid,
           VAR_1->uid);

 if (VAR_0->threads == ((void*)0))
  return -1;

 if (FUNC_3(VAR_1))
  VAR_0->cpus = FUNC_0();
 else if (!FUNC_2(VAR_1) && !VAR_1->uses_mmap)
  VAR_0->cpus = FUNC_0();
 else
  VAR_0->cpus = FUNC_1(VAR_1->cpu_list);

 if (VAR_0->cpus == ((void*)0))
  goto out_delete_threads;

 return 0;

out_delete_threads:
 FUNC_4(VAR_0->threads);
 return -1;
}
