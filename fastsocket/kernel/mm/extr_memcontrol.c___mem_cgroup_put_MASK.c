
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int refcnt; } ;


 int FUNC_0 (struct mem_cgroup*) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (struct mem_cgroup*) ;
 struct mem_cgroup* FUNC_3 (struct mem_cgroup*) ;

__attribute__((used)) static void FUNC_4(struct mem_cgroup *VAR_0, int VAR_1)
{
 if (FUNC_1(VAR_1, &VAR_0->refcnt)) {
  struct mem_cgroup *VAR_2 = FUNC_3(VAR_0);
  FUNC_0(VAR_0);
  if (VAR_2)
   FUNC_2(VAR_2);
 }
}
