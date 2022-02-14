
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_map {int dummy; } ;
struct perf_evlist {struct thread_map* threads; struct cpu_map* cpus; } ;
struct cpu_map {int dummy; } ;



__attribute__((used)) static inline void FUNC_0(struct perf_evlist *VAR_0,
      struct cpu_map *VAR_1,
      struct thread_map *VAR_2)
{
 VAR_0->cpus = VAR_1;
 VAR_0->threads = VAR_2;
}
