
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct netpoll_info {int tx_work; int txq; } ;
struct netpoll {TYPE_1__* dev; } ;
struct netdev_queue {int dummy; } ;
struct net_device_ops {int (* ndo_start_xmit ) (struct sk_buff*,struct net_device*) ;} ;
struct net_device {int name; int priv_flags; struct net_device_ops* netdev_ops; } ;
struct TYPE_2__ {int npinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int,char*,int ,int (*) (struct sk_buff*,struct net_device*)) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct netdev_queue*) ;
 int FUNC_4 (struct netdev_queue*) ;
 int FUNC_5 () ;
 unsigned long FUNC_6 (int) ;
 struct netdev_queue* FUNC_7 (struct net_device*,struct sk_buff*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct netdev_queue*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct netpoll*) ;
 struct netpoll_info* FUNC_13 (int ) ;
 int FUNC_14 (int *,int ) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *,struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,struct net_device*) ;
 int FUNC_18 (struct netdev_queue*) ;
 int FUNC_19 (unsigned long) ;

void FUNC_20(struct netpoll *VAR_4, struct sk_buff *VAR_5,
        struct net_device *VAR_6)
{
 int VAR_7 = VAR_1;
 unsigned long VAR_8;
 const struct net_device_ops *VAR_9 = VAR_6->netdev_ops;

 struct netpoll_info *VAR_10;

 FUNC_1(!FUNC_5());

 VAR_10 = FUNC_13(VAR_4->dev->npinfo);
 if (!VAR_10 || !FUNC_9(VAR_6) || !FUNC_8(VAR_6)) {
  FUNC_2(VAR_5);
  return;
 }


 if (FUNC_15(&VAR_10->txq) == 0 && !FUNC_11(VAR_6)) {
  struct netdev_queue *VAR_11;

  VAR_11 = FUNC_7(VAR_6, VAR_5);


  for (VAR_8 = FUNC_6(1)/VAR_3;
       VAR_8 > 0; --VAR_8) {
   if (FUNC_3(VAR_11)) {
    if (!FUNC_10(VAR_11)) {
     VAR_6->priv_flags |= VAR_0;
     VAR_7 = VAR_9->ndo_start_xmit(VAR_5, VAR_6);
     VAR_6->priv_flags &= ~VAR_0;
     if (VAR_7 == VAR_2)
      FUNC_18(VAR_11);
    }
    FUNC_4(VAR_11);

    if (VAR_7 == VAR_2)
     break;

   }


   FUNC_12(VAR_4);

   FUNC_19(VAR_3);
  }

  FUNC_0(!FUNC_5(),
   "netpoll_send_skb_on_dev(): %s enabled interrupts in poll (%pF)\n",
   VAR_6->name, VAR_9->ndo_start_xmit);

 }

 if (VAR_7 != VAR_2) {
  FUNC_16(&VAR_10->txq, VAR_5);
  FUNC_14(&VAR_10->tx_work,0);
 }
}
