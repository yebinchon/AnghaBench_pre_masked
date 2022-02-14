
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scan_control {int dummy; } ;
struct mem_cgroup_zone {int dummy; } ;
typedef enum lru_list { ____Placeholder_lru_list } lru_list ;


 scalar_t__ FUNC_0 (struct mem_cgroup_zone*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned long,struct mem_cgroup_zone*,struct scan_control*,int,int) ;
 unsigned long FUNC_4 (unsigned long,struct mem_cgroup_zone*,struct scan_control*,int,int) ;

__attribute__((used)) static unsigned long FUNC_5(enum lru_list VAR_0, unsigned long VAR_1,
     struct mem_cgroup_zone *VAR_2,
     struct scan_control *VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_2(VAR_0);

 if (FUNC_1(VAR_0)) {
  if (FUNC_0(VAR_2, VAR_5))
   FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  return 0;
 }

 return FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
