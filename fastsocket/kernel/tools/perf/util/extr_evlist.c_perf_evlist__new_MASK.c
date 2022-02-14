
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_map {int dummy; } ;
struct perf_evlist {int dummy; } ;
struct cpu_map {int dummy; } ;


 int FUNC_0 (struct perf_evlist*,struct cpu_map*,struct thread_map*) ;
 struct perf_evlist* FUNC_1 (int) ;

struct perf_evlist *FUNC_2(struct cpu_map *VAR_0,
         struct thread_map *VAR_1)
{
 struct perf_evlist *VAR_2 = FUNC_1(sizeof(*VAR_2));

 if (VAR_2 != ((void*)0))
  FUNC_0(VAR_2, VAR_0, VAR_1);

 return VAR_2;
}
