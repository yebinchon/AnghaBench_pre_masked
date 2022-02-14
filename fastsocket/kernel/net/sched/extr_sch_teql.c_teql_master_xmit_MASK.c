
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct teql_master {struct Qdisc* slaves; } ;
struct sk_buff {int dummy; } ;
struct netdev_queue {unsigned int tx_bytes; int tx_dropped; int tx_packets; struct Qdisc* qdisc_sleeping; } ;
struct net_device_ops {int (* ndo_start_xmit ) (struct sk_buff*,struct net_device*) ;} ;
struct TYPE_2__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; struct net_device_ops* netdev_ops; } ;
struct Qdisc {int dummy; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct Qdisc*) ;
 scalar_t__ FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct netdev_queue*) ;
 int FUNC_3 (struct netdev_queue*) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 struct netdev_queue* FUNC_6 (struct net_device*,int ) ;
 struct teql_master* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct netdev_queue*) ;
 int FUNC_12 (struct netdev_queue*) ;
 int FUNC_13 (struct net_device*) ;
 struct net_device* FUNC_14 (struct Qdisc*) ;
 unsigned int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*,struct net_device*) ;
 int FUNC_19 (struct sk_buff*,struct sk_buff*,struct net_device*) ;
 int FUNC_20 (struct netdev_queue*) ;

__attribute__((used)) static netdev_tx_t FUNC_21(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct teql_master *VAR_4 = FUNC_7(VAR_3);
 struct netdev_queue *VAR_5 = FUNC_6(VAR_3, 0);
 struct Qdisc *VAR_6, *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10 = FUNC_16(VAR_2);
 struct sk_buff *VAR_11 = ((void*)0);

 VAR_6 = VAR_4->slaves;

restart:
 VAR_9 = 0;
 VAR_8 = 0;

 if ((VAR_7 = VAR_6) == ((void*)0))
  goto drop;

 do {
  struct net_device *VAR_12 = FUNC_14(VAR_7);
  struct netdev_queue *VAR_13 = FUNC_6(VAR_12, 0);
  const struct net_device_ops *VAR_14 = VAR_12->netdev_ops;

  if (VAR_13->qdisc_sleeping != VAR_7)
   continue;
  if (FUNC_1(VAR_12, VAR_10) ||
      !FUNC_9(VAR_12)) {
   VAR_8 = 1;
   continue;
  }

  switch (FUNC_19(VAR_2, VAR_11, VAR_12)) {
  case 0:
   if (FUNC_2(VAR_13)) {
    unsigned int VAR_15 = FUNC_15(VAR_2);

    if (!FUNC_12(VAR_13) &&
        !FUNC_11(VAR_13) &&
        VAR_14->ndo_start_xmit(VAR_2, VAR_12) == VAR_1) {
     FUNC_20(VAR_13);
     FUNC_3(VAR_13);
     VAR_4->slaves = FUNC_0(VAR_7);
     FUNC_13(VAR_3);
     VAR_5->tx_packets++;
     VAR_5->tx_bytes += VAR_15;
     return VAR_1;
    }
    FUNC_3(VAR_13);
   }
   if (FUNC_8(VAR_3))
    VAR_8 = 1;
   break;
  case 1:
   VAR_4->slaves = FUNC_0(VAR_7);
   return VAR_1;
  default:
   VAR_9 = 1;
   break;
  }
  FUNC_4(VAR_2, FUNC_17(VAR_2));
 } while ((VAR_7 = FUNC_0(VAR_7)) != VAR_6);

 if (VAR_9 && VAR_11 == ((void*)0)) {
  VAR_11 = VAR_2;
  goto restart;
 }

 if (VAR_8) {
  FUNC_10(VAR_3);
  return VAR_0;
 }
 VAR_3->stats.tx_errors++;

drop:
 VAR_5->tx_dropped++;
 FUNC_5(VAR_2);
 return VAR_1;
}
