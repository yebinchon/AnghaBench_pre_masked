
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_evsel {struct cpu_map* cpus; } ;
struct cpu_map {int dummy; } ;
struct TYPE_4__ {struct cpu_map* cpus; } ;
struct TYPE_3__ {int cpu_list; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static inline struct cpu_map *FUNC_0(struct perf_evsel *VAR_2)
{
 return (VAR_2->cpus && !VAR_1.cpu_list) ? VAR_2->cpus : VAR_0->cpus;
}
