
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_sched {int clhash; } ;
struct qfq_class {scalar_t__ filter_cnt; scalar_t__ refcnt; int common; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 struct qfq_sched* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct qfq_class*) ;
 int FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_1, unsigned long VAR_2)
{
 struct qfq_sched *VAR_3 = FUNC_2(VAR_1);
 struct qfq_class *VAR_4 = (struct qfq_class *)VAR_2;

 if (VAR_4->filter_cnt > 0)
  return -VAR_0;

 FUNC_4(VAR_1);

 FUNC_3(VAR_4);
 FUNC_1(&VAR_3->clhash, &VAR_4->common);

 FUNC_0(--VAR_4->refcnt == 0);





 FUNC_5(VAR_1);
 return 0;
}
