
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct drr_sched {int active; int clhash; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct drr_sched* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_3(struct Qdisc *VAR_0, struct nlattr *VAR_1)
{
 struct drr_sched *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2->clhash);
 if (VAR_3 < 0)
  return VAR_3;
 FUNC_0(&VAR_2->active);
 return 0;
}
