
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct mem_cgroup {int css; int use_hierarchy; } const mem_cgroup ;


 int FUNC_0 (int *,int *) ;

bool FUNC_1(const struct mem_cgroup *VAR_0,
      struct mem_cgroup *VAR_1)
{
 if (VAR_0 == VAR_1)
  return 1;
 if (!VAR_0->use_hierarchy || !VAR_1)
  return 0;
 return FUNC_0(&VAR_1->css, &VAR_0->css);
}
