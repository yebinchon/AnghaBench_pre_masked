
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zone_reclaim_stat {int dummy; } ;
struct zone {TYPE_1__* zone_pgdat; } ;
struct mem_cgroup_per_zone {struct zone_reclaim_stat reclaim_stat; } ;
struct mem_cgroup {int dummy; } ;
struct TYPE_2__ {int node_id; } ;


 struct mem_cgroup_per_zone* FUNC_0 (struct mem_cgroup*,int,int) ;
 int FUNC_1 (struct zone*) ;

struct zone_reclaim_stat *FUNC_2(struct mem_cgroup *VAR_0,
            struct zone *VAR_1)
{
 int VAR_2 = VAR_1->zone_pgdat->node_id;
 int VAR_3 = FUNC_1(VAR_1);
 struct mem_cgroup_per_zone *VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3);

 return &VAR_4->reclaim_stat;
}
