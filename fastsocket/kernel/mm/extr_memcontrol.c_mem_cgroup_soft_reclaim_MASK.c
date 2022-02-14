
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zone {TYPE_1__* zone_pgdat; } ;
struct mem_cgroup_reclaim_cookie {int priority; struct zone* zone; } ;
struct mem_cgroup {int res; int stat; } ;
typedef int gfp_t ;
struct TYPE_2__ {int node_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct mem_cgroup*) ;
 unsigned long FUNC_1 (struct mem_cgroup*) ;
 struct mem_cgroup* FUNC_2 (struct mem_cgroup*,struct mem_cgroup*,struct mem_cgroup_reclaim_cookie*) ;
 int FUNC_3 (struct mem_cgroup*,struct mem_cgroup*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct mem_cgroup*,int ,int,int ,struct zone*,int ) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct mem_cgroup *VAR_1,
       struct zone *VAR_2,
       gfp_t VAR_3)
{
 struct mem_cgroup *VAR_4 = ((void*)0);
 int VAR_5 = 0;
 int VAR_6 = 0;
 unsigned long VAR_7 = FUNC_1(VAR_1);
 struct mem_cgroup_reclaim_cookie VAR_8 = {
  .zone = VAR_2,
  .priority = 0,
 };

 while (1) {
  VAR_4 = FUNC_2(VAR_1, VAR_4, &VAR_8);
  if (!VAR_4) {
   VAR_6++;
   if (VAR_6 >= 2) {





    if (!VAR_5)
     break;






    if (VAR_5 >= (VAR_7 >> 2) ||
     (VAR_6 > VAR_0))
     break;
   }
   continue;
  }
  if (!FUNC_4(&VAR_4->stat)) {

   continue;
  }

  VAR_5 += FUNC_5(VAR_4, VAR_3, 0,
      FUNC_0(VAR_4), VAR_2,
      VAR_2->zone_pgdat->node_id);
  if (FUNC_6(&VAR_1->res))
   break;
 }
 FUNC_3(VAR_1, VAR_4);
 return VAR_5;
}
