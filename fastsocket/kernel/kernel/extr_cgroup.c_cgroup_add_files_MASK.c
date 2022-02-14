
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys {int dummy; } ;
struct cgroup {int dummy; } ;
struct cftype {int dummy; } ;


 int FUNC_0 (struct cgroup*,struct cgroup_subsys*,struct cftype const*) ;

int FUNC_1(struct cgroup *VAR_0,
   struct cgroup_subsys *VAR_1,
   const struct cftype VAR_2[],
   int VAR_3)
{
 int VAR_4, VAR_5;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_2[VAR_4]);
  if (VAR_5)
   return VAR_5;
 }
 return 0;
}
