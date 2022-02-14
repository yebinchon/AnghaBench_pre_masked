
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct teql_sched_data {int ncache; int q; } ;
struct TYPE_2__ {scalar_t__ qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 struct teql_sched_data* FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(struct Qdisc* VAR_0)
{
 struct teql_sched_data *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->q);
 VAR_0->q.qlen = 0;
 FUNC_2(FUNC_3(&VAR_1->ncache, ((void*)0)));
}
