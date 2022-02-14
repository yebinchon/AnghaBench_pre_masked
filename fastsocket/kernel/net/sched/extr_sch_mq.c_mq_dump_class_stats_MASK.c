
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netdev_queue {struct Qdisc* qdisc_sleeping; } ;
struct gnet_dump {int dummy; } ;
struct TYPE_4__ {int qlen; } ;
struct TYPE_3__ {int qlen; } ;
struct Qdisc {TYPE_2__ qstats; int bstats; TYPE_1__ q; } ;


 scalar_t__ FUNC_0 (struct gnet_dump*,int *) ;
 scalar_t__ FUNC_1 (struct gnet_dump*,TYPE_2__*) ;
 struct netdev_queue* FUNC_2 (struct Qdisc*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct Qdisc *VAR_0, unsigned long VAR_1,
          struct gnet_dump *VAR_2)
{
 struct netdev_queue *VAR_3 = FUNC_2(VAR_0, VAR_1);

 VAR_0 = VAR_3->qdisc_sleeping;
 VAR_0->qstats.qlen = VAR_0->q.qlen;
 if (FUNC_0(VAR_2, &VAR_0->bstats) < 0 ||
     FUNC_1(VAR_2, &VAR_0->qstats) < 0)
  return -1;
 return 0;
}
