
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tbf_sched_data {int watchdog; int mtu; int ptokens; int buffer; int tokens; int t_c; int qdisc; } ;
struct TYPE_2__ {scalar_t__ qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 int FUNC_0 () ;
 struct tbf_sched_data* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct Qdisc* VAR_0)
{
 struct tbf_sched_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->qdisc);
 VAR_0->q.qlen = 0;
 VAR_1->t_c = FUNC_0();
 VAR_1->tokens = VAR_1->buffer;
 VAR_1->ptokens = VAR_1->mtu;
 FUNC_3(&VAR_1->watchdog);
}
