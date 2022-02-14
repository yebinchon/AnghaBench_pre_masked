
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread_map {int dummy; } ;
struct perf_evsel {int dummy; } ;
struct cpu_map {int dummy; } ;
struct TYPE_4__ {struct cpu_map map; } ;
struct TYPE_3__ {struct thread_map map; } ;


 int FUNC_0 (struct perf_evsel*,struct cpu_map*,struct thread_map*) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;

int FUNC_1(struct perf_evsel *VAR_2, struct cpu_map *VAR_3,
       struct thread_map *VAR_4)
{
 if (VAR_3 == ((void*)0)) {

  VAR_3 = &VAR_0.map;
 }

 if (VAR_4 == ((void*)0))
  VAR_4 = &VAR_1.map;

 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
