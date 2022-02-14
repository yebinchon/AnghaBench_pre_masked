
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {int cpus_allowed; } ;
struct cgroup_subsys {int dummy; } ;
struct cgroup {int dummy; } ;


 int VAR_0 ;
 struct cpuset* FUNC_0 (struct cgroup*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct cpuset*) ;
 int FUNC_3 (struct cpuset*) ;
 int VAR_1 ;
 int FUNC_4 (int ,struct cpuset*,int ) ;

__attribute__((used)) static void FUNC_5(struct cgroup_subsys *VAR_2, struct cgroup *VAR_3)
{
 struct cpuset *VAR_4 = FUNC_0(VAR_3);

 if (FUNC_2(VAR_4))
  FUNC_4(VAR_0, VAR_4, 0);

 VAR_1--;
 FUNC_1(VAR_4->cpus_allowed);
 FUNC_3(VAR_4);
}
