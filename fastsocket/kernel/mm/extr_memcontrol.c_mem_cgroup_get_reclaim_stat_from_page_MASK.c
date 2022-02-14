
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone_reclaim_stat {int dummy; } ;
struct page_cgroup {int mem_cgroup; } ;
struct page {int dummy; } ;
struct mem_cgroup_per_zone {struct zone_reclaim_stat reclaim_stat; } ;


 int FUNC_0 (struct page_cgroup*) ;
 struct page_cgroup* FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 () ;
 struct mem_cgroup_per_zone* FUNC_3 (int ,struct page*) ;
 int FUNC_4 () ;

struct zone_reclaim_stat *
FUNC_5(struct page *VAR_0)
{
 struct page_cgroup *VAR_1;
 struct mem_cgroup_per_zone *VAR_2;

 if (FUNC_2())
  return ((void*)0);

 VAR_1 = FUNC_1(VAR_0);
 if (!FUNC_0(VAR_1))
  return ((void*)0);

 FUNC_4();
 VAR_2 = FUNC_3(VAR_1->mem_cgroup, VAR_0);
 if (!VAR_2)
  return ((void*)0);

 return &VAR_2->reclaim_stat;
}
