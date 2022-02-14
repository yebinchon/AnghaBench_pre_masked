
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {int cpus_allowed; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct cpuset*) ;
 struct cpuset* FUNC_3 (struct cpuset const*,int,int ) ;

__attribute__((used)) static struct cpuset *FUNC_4(const struct cpuset *VAR_1)
{
 struct cpuset *VAR_2;

 VAR_2 = FUNC_3(VAR_1, sizeof(*VAR_1), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 if (!FUNC_0(&VAR_2->cpus_allowed, VAR_0)) {
  FUNC_2(VAR_2);
  return ((void*)0);
 }
 FUNC_1(VAR_2->cpus_allowed, VAR_1->cpus_allowed);

 return VAR_2;
}
