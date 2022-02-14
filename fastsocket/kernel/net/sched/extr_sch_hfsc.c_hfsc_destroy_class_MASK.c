
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfsc_class {int rate_est; int bstats; int qdisc; int filter_list; } ;
struct hfsc_sched {struct hfsc_class root; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct hfsc_class*) ;
 int FUNC_2 (int ) ;
 struct hfsc_sched* FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct Qdisc *VAR_0, struct hfsc_class *VAR_1)
{
 struct hfsc_sched *VAR_2 = FUNC_3(VAR_0);

 FUNC_4(&VAR_1->filter_list);
 FUNC_2(VAR_1->qdisc);
 FUNC_0(&VAR_1->bstats, &VAR_1->rate_est);
 if (VAR_1 != &VAR_2->root)
  FUNC_1(VAR_1);
}
