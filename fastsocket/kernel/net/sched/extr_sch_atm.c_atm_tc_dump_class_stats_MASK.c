
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gnet_dump {int dummy; } ;
struct TYPE_6__ {int qlen; } ;
struct atm_flow_data {TYPE_3__ qstats; int bstats; TYPE_2__* q; } ;
struct Qdisc {int dummy; } ;
struct TYPE_4__ {int qlen; } ;
struct TYPE_5__ {TYPE_1__ q; } ;


 scalar_t__ FUNC_0 (struct gnet_dump*,int *) ;
 scalar_t__ FUNC_1 (struct gnet_dump*,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_2(struct Qdisc *VAR_0, unsigned long VAR_1,
   struct gnet_dump *VAR_2)
{
 struct atm_flow_data *VAR_3 = (struct atm_flow_data *)VAR_1;

 VAR_3->qstats.qlen = VAR_3->q->q.qlen;

 if (FUNC_0(VAR_2, &VAR_3->bstats) < 0 ||
     FUNC_1(VAR_2, &VAR_3->qstats) < 0)
  return -1;

 return 0;
}
