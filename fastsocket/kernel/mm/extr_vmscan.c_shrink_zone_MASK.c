
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;
struct scan_control {unsigned long nr_reclaimed; unsigned long nr_scanned; struct mem_cgroup* target_mem_cgroup; } ;
struct mem_cgroup_zone {struct zone* zone; struct mem_cgroup* mem_cgroup; } ;
struct mem_cgroup_reclaim_cookie {int priority; struct zone* zone; } ;
struct mem_cgroup {int dummy; } ;


 int FUNC_0 (struct scan_control*) ;
 struct mem_cgroup* FUNC_1 (struct mem_cgroup*,struct mem_cgroup*,struct mem_cgroup_reclaim_cookie*) ;
 int FUNC_2 (struct mem_cgroup*,struct mem_cgroup*) ;
 scalar_t__ FUNC_3 (struct zone*,unsigned long,unsigned long,int,struct scan_control*) ;
 int FUNC_4 (int,struct mem_cgroup_zone*,struct scan_control*) ;

__attribute__((used)) static void FUNC_5(int VAR_0, struct zone *VAR_1,
   struct scan_control *VAR_2)
{
 unsigned long VAR_3, VAR_4;

 do {
  struct mem_cgroup *VAR_5 = VAR_2->target_mem_cgroup;
  struct mem_cgroup_reclaim_cookie VAR_6 = {
   .zone = VAR_1,
   .priority = VAR_0,
  };
  struct mem_cgroup *VAR_7;

  VAR_3 = VAR_2->nr_reclaimed;
  VAR_4 = VAR_2->nr_scanned;

  VAR_7 = FUNC_1(VAR_5, ((void*)0), &VAR_6);
  do {
   struct mem_cgroup_zone VAR_8 = {
    .mem_cgroup = VAR_7,
    .zone = VAR_1,
   };

   FUNC_4(VAR_0, &VAR_8, VAR_2);
   if (!FUNC_0(VAR_2)) {
    FUNC_2(VAR_5, VAR_7);
    break;
   }
   VAR_7 = FUNC_1(VAR_5, VAR_7, &VAR_6);
  } while (VAR_7);
 } while (FUNC_3(VAR_1, VAR_2->nr_reclaimed - VAR_3,
      VAR_2->nr_scanned - VAR_4, VAR_0,
      VAR_2));
}
