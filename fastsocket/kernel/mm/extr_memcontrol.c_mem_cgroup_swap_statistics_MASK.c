
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup_stat_cpu {int dummy; } ;
struct mem_cgroup_stat {struct mem_cgroup_stat_cpu* cpustat; } ;
struct mem_cgroup {struct mem_cgroup_stat stat; } ;


 int VAR_0 ;
 int FUNC_0 (struct mem_cgroup_stat_cpu*,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct mem_cgroup *VAR_1,
      bool VAR_2)
{
 int VAR_3 = (VAR_2) ? 1 : -1;
 struct mem_cgroup_stat *VAR_4 = &VAR_1->stat;
 struct mem_cgroup_stat_cpu *VAR_5;
 int VAR_6 = FUNC_1();

 VAR_5 = &VAR_4->cpustat[VAR_6];
 FUNC_0(VAR_5, VAR_0, VAR_3);
 FUNC_2();
}
