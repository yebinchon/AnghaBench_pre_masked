
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup_zone {int zone; int mem_cgroup; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mem_cgroup_zone*) ;

__attribute__((used)) static int FUNC_3(struct mem_cgroup_zone *VAR_0)
{
 if (!FUNC_2(VAR_0))
  return FUNC_1(VAR_0->mem_cgroup,
             VAR_0->zone);

 return FUNC_0(VAR_0->zone);
}
