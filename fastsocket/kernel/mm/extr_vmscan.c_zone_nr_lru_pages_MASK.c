
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup_zone {int zone; int mem_cgroup; } ;
typedef enum lru_list { ____Placeholder_lru_list } lru_list ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct mem_cgroup_zone*) ;
 unsigned long FUNC_2 (int ,int) ;

__attribute__((used)) static unsigned long FUNC_3(struct mem_cgroup_zone *VAR_1,
           enum lru_list VAR_2)
{
 if (!FUNC_1(VAR_1))
  return FUNC_0(VAR_1->mem_cgroup, VAR_1->zone, VAR_2);

 return FUNC_2(VAR_1->zone, VAR_0 + VAR_2);
}
