
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {int relax_domain_level; int cpus_allowed; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct cpuset*) ;

__attribute__((used)) static int FUNC_3(struct cpuset *VAR_2, s64 VAR_3)
{





 if (VAR_3 != VAR_2->relax_domain_level) {
  VAR_2->relax_domain_level = VAR_3;
  if (!FUNC_1(VAR_2->cpus_allowed) &&
      FUNC_2(VAR_2))
   FUNC_0();
 }

 return 0;
}
