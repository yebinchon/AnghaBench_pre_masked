
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_cgroup_stat_cpu {int dummy; } ;
struct TYPE_2__ {struct mem_cgroup_stat_cpu* cpustat; } ;
struct mem_cgroup {TYPE_1__ stat; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct mem_cgroup_stat_cpu*,int ) ;
 int FUNC_1 (struct mem_cgroup_stat_cpu*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(struct mem_cgroup *VAR_2)
{
 bool VAR_3 = 0;
 int VAR_4;
 s64 VAR_5;
 struct mem_cgroup_stat_cpu *VAR_6;

 VAR_4 = FUNC_2();
 VAR_6 = &VAR_2->stat.cpustat[VAR_4];
 VAR_5 = FUNC_0(VAR_6, VAR_0);
 if (FUNC_4(VAR_5 > VAR_1)) {
  FUNC_1(VAR_6, VAR_0);
  VAR_3 = 1;
 }
 FUNC_3();
 return VAR_3;
}
