
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {struct cpumask* cpus_allowed; struct cpuset* parent; } ;
struct cpumask {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct cpumask*,struct cpumask*,int ) ;
 int FUNC_2 (struct cpumask*,int ) ;
 int FUNC_3 (struct cpumask*,int ) ;

__attribute__((used)) static void FUNC_4(const struct cpuset *VAR_1,
      struct cpumask *VAR_2)
{
 while (VAR_1 && !FUNC_3(VAR_1->cpus_allowed, VAR_0))
  VAR_1 = VAR_1->parent;
 if (VAR_1)
  FUNC_1(VAR_2, VAR_1->cpus_allowed, VAR_0);
 else
  FUNC_2(VAR_2, VAR_0);
 FUNC_0(!FUNC_3(VAR_2, VAR_0));
}
