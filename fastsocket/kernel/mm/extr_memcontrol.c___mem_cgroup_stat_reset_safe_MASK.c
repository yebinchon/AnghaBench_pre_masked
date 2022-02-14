
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup_stat_cpu {scalar_t__* count; } ;
typedef enum mem_cgroup_stat_index { ____Placeholder_mem_cgroup_stat_index } mem_cgroup_stat_index ;



__attribute__((used)) static inline void
FUNC_0(struct mem_cgroup_stat_cpu *VAR_0,
    enum mem_cgroup_stat_index VAR_1)
{
 VAR_0->count[VAR_1] = 0;
}
