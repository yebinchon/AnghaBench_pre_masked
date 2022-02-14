
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zone_reclaim_stat {int dummy; } ;
struct mem_cgroup_zone {TYPE_1__* zone; int mem_cgroup; } ;
struct TYPE_2__ {struct zone_reclaim_stat reclaim_stat; } ;


 struct zone_reclaim_stat* FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (struct mem_cgroup_zone*) ;

__attribute__((used)) static struct zone_reclaim_stat *FUNC_2(struct mem_cgroup_zone *VAR_0)
{
 if (!FUNC_1(VAR_0))
  return FUNC_0(VAR_0->mem_cgroup, VAR_0->zone);

 return &VAR_0->zone->reclaim_stat;
}
