
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {int mems_allowed; int cpus_allowed; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct cpuset const*) ;
 scalar_t__ FUNC_2 (struct cpuset const*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(const struct cpuset *VAR_0, const struct cpuset *VAR_1)
{
 return FUNC_0(VAR_0->cpus_allowed, VAR_1->cpus_allowed) &&
  FUNC_3(VAR_0->mems_allowed, VAR_1->mems_allowed) &&
  FUNC_1(VAR_0) <= FUNC_1(VAR_1) &&
  FUNC_2(VAR_0) <= FUNC_2(VAR_1);
}
