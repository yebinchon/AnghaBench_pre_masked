
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {int relax_domain_level; } ;
struct cgroup {int dummy; } ;
struct cftype {int private; } ;
typedef int s64 ;
typedef int cpuset_filetype_t ;


 int FUNC_0 () ;

 struct cpuset* FUNC_1 (struct cgroup*) ;

__attribute__((used)) static s64 FUNC_2(struct cgroup *VAR_0, struct cftype *VAR_1)
{
 struct cpuset *VAR_2 = FUNC_1(VAR_0);
 cpuset_filetype_t VAR_3 = VAR_1->private;
 switch (VAR_3) {
 case 128:
  return VAR_2->relax_domain_level;
 default:
  FUNC_0();
 }


 return 0;
}
