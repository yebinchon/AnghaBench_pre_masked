
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_target {scalar_t__ cpu_list; scalar_t__ system_wide; } ;



__attribute__((used)) static inline bool FUNC_0(struct perf_target *VAR_0)
{
 return VAR_0->system_wide || VAR_0->cpu_list;
}
