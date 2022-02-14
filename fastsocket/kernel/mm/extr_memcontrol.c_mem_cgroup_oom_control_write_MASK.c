
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mem_cgroup {int oom_kill_disable; scalar_t__ use_hierarchy; } ;
struct cgroup {int children; struct cgroup* parent; } ;
struct cftype {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 struct mem_cgroup* FUNC_3 (struct cgroup*) ;
 int FUNC_4 (struct mem_cgroup*) ;

__attribute__((used)) static int FUNC_5(struct cgroup *VAR_1,
 struct cftype *VAR_2, u64 VAR_3)
{
 struct mem_cgroup *VAR_4 = FUNC_3(VAR_1);
 struct mem_cgroup *VAR_5;


 if (!VAR_1->parent || !((VAR_3 == 0) || (VAR_3 == 1)))
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_1->parent);

 FUNC_0();

 if ((VAR_5->use_hierarchy) ||
     (VAR_4->use_hierarchy && !FUNC_2(&VAR_1->children))) {
  FUNC_1();
  return -VAR_0;
 }
 VAR_4->oom_kill_disable = VAR_3;
 if (!VAR_3)
  FUNC_4(VAR_4);
 FUNC_1();
 return 0;
}
