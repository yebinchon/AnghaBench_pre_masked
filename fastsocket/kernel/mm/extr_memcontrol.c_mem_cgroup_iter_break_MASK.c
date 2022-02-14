
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int css; } ;


 int FUNC_0 (int *) ;
 struct mem_cgroup* VAR_0 ;

void FUNC_1(struct mem_cgroup *VAR_1,
      struct mem_cgroup *VAR_2)
{
 if (!VAR_1)
  VAR_1 = VAR_0;
 if (VAR_2 && VAR_2 != VAR_1)
  FUNC_0(&VAR_2->css);
}
