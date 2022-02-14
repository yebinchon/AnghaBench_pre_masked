
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zone {TYPE_1__* zone_pgdat; } ;
struct mem_cgroup_per_zone {int dummy; } ;
struct mem_cgroup {int dummy; } ;
typedef enum lru_list { ____Placeholder_lru_list } lru_list ;
struct TYPE_2__ {int node_id; } ;


 unsigned long FUNC_0 (struct mem_cgroup_per_zone*,int) ;
 struct mem_cgroup_per_zone* FUNC_1 (struct mem_cgroup*,int,int) ;
 int FUNC_2 (struct zone*) ;

unsigned long FUNC_3(struct mem_cgroup *VAR_0,
           struct zone *VAR_1,
           enum lru_list VAR_2)
{
 int VAR_3 = VAR_1->zone_pgdat->node_id;
 int VAR_4 = FUNC_2(VAR_1);
 struct mem_cgroup_per_zone *VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_4);

 return FUNC_0(VAR_5, VAR_2);
}
