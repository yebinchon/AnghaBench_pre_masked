
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruvec {int dummy; } ;
struct zone {struct lruvec lruvec; } ;
struct mem_cgroup_per_zone {struct lruvec lruvec; } ;
struct mem_cgroup {int dummy; } ;


 scalar_t__ FUNC_0 () ;
 struct mem_cgroup_per_zone* FUNC_1 (struct mem_cgroup*,int ,int ) ;
 int FUNC_2 (struct zone*) ;
 int FUNC_3 (struct zone*) ;

struct lruvec *FUNC_4(struct zone *VAR_0,
          struct mem_cgroup *VAR_1)
{
 struct mem_cgroup_per_zone *VAR_2;

 if (FUNC_0())
  return &VAR_0->lruvec;

 VAR_2 = FUNC_1(VAR_1, FUNC_3(VAR_0), FUNC_2(VAR_0));
 return &VAR_2->lruvec;
}
