
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int memsw; int res; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_1(struct mem_cgroup *VAR_1, unsigned long VAR_2)
{
 if (!FUNC_0(&VAR_1->res, VAR_2))
  return 0;
 if (!VAR_0)
  return 1;
 return FUNC_0(&VAR_1->memsw, VAR_2);
}
