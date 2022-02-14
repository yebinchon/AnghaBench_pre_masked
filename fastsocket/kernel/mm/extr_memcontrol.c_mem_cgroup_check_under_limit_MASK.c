
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int res; int memsw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct mem_cgroup *VAR_1)
{
 if (VAR_0) {
  if (FUNC_0(&VAR_1->res) &&
   FUNC_0(&VAR_1->memsw))
   return 1;
 } else
  if (FUNC_0(&VAR_1->res))
   return 1;
 return 0;
}
