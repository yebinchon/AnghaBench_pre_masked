
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int under_oom; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct mem_cgroup*) ;

__attribute__((used)) static void FUNC_2(struct mem_cgroup *VAR_0)
{
 if (VAR_0 && FUNC_0(&VAR_0->under_oom))
  FUNC_1(VAR_0);
}
