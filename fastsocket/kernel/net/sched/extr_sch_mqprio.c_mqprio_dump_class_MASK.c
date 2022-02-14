
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcmsg {int tcm_handle; scalar_t__ tcm_info; int tcm_parent; } ;
struct sk_buff {int dummy; } ;
struct netdev_tc_txq {int offset; int count; } ;
struct netdev_queue {TYPE_1__* qdisc_sleeping; } ;
struct netdev_qos_info {struct netdev_tc_txq* tc_to_txq; } ;
struct net_device {int dummy; } ;
struct Qdisc {int handle; } ;
struct TYPE_4__ {struct netdev_qos_info qos_data; } ;
struct TYPE_3__ {scalar_t__ handle; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned long) ;
 int VAR_0 ;
 struct netdev_queue* FUNC_3 (struct Qdisc*,unsigned long) ;
 TYPE_2__* FUNC_4 (struct net_device*) ;
 unsigned long FUNC_5 (struct net_device*) ;
 struct net_device* FUNC_6 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_7(struct Qdisc *VAR_1, unsigned long VAR_2,
    struct sk_buff *VAR_3, struct tcmsg *VAR_4)
{
 struct net_device *VAR_5 = FUNC_6(VAR_1);
 struct netdev_qos_info *VAR_6 = &FUNC_4(VAR_5)->qos_data;

 if (VAR_2 <= FUNC_5(VAR_5)) {
  VAR_4->tcm_parent = VAR_0;
  VAR_4->tcm_info = 0;
 } else {
  int VAR_7;
  struct netdev_queue *VAR_8;

  VAR_8 = FUNC_3(VAR_1, VAR_2);
  VAR_4->tcm_parent = 0;
  for (VAR_7 = 0; VAR_7 < FUNC_5(VAR_5); VAR_7++) {
   struct netdev_tc_txq VAR_9 = VAR_6->tc_to_txq[VAR_7];
   int VAR_10 = VAR_2 - FUNC_5(VAR_5);

   if (VAR_10 > VAR_9.offset &&
       VAR_10 <= VAR_9.offset + VAR_9.count) {
    VAR_4->tcm_parent =
     FUNC_1(FUNC_0(VAR_1->handle),
        FUNC_2(VAR_7 + 1));
    break;
   }
  }
  VAR_4->tcm_info = VAR_8->qdisc_sleeping->handle;
 }
 VAR_4->tcm_handle |= FUNC_2(VAR_2);
 return 0;
}
