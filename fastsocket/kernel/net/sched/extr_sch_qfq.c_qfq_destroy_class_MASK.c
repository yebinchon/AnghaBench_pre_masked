
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_sched {int wsum; } ;
struct qfq_class {int inv_w; int qdisc; int rate_est; int bstats; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct qfq_class*) ;
 int FUNC_2 (int ) ;
 struct qfq_sched* FUNC_3 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_4(struct Qdisc *VAR_1, struct qfq_class *VAR_2)
{
 struct qfq_sched *VAR_3 = FUNC_3(VAR_1);

 if (VAR_2->inv_w) {
  VAR_3->wsum -= VAR_0 / VAR_2->inv_w;
  VAR_2->inv_w = 0;
 }

 FUNC_0(&VAR_2->bstats, &VAR_2->rate_est);
 FUNC_2(VAR_2->qdisc);
 FUNC_1(VAR_2);
}
