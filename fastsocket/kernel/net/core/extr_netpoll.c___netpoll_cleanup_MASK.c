
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netpoll_info {int txq; int tx_work; int arp_tx; int refcnt; int rx_lock; int rx_flags; int rx_np; } ;
struct netpoll {TYPE_1__* dev; } ;
struct net_device_ops {int (* ndo_netpoll_cleanup ) (TYPE_1__*) ;} ;
struct TYPE_2__ {struct netpoll_info* npinfo; struct net_device_ops* netdev_ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct netpoll_info*) ;
 int FUNC_4 (struct netpoll_info*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 () ;

void FUNC_10(struct netpoll *VAR_1)
{
 struct netpoll_info *VAR_2;
 unsigned long VAR_3;

 VAR_2 = VAR_1->dev->npinfo;
 if (!VAR_2)
  return;

 if (!VAR_2->rx_np) {
  FUNC_6(&VAR_2->rx_lock, VAR_3);
  VAR_2->rx_flags &= ~VAR_0;
  FUNC_7(&VAR_2->rx_lock, VAR_3);
 }

 if (FUNC_1(&VAR_2->refcnt)) {
  const struct net_device_ops *VAR_4;

  VAR_4 = VAR_1->dev->netdev_ops;
  if (VAR_4->ndo_netpoll_cleanup)
   VAR_4->ndo_netpoll_cleanup(VAR_1->dev);

  FUNC_4(VAR_1->dev->npinfo, ((void*)0));


  FUNC_9();

  FUNC_5(&VAR_2->arp_tx);
  FUNC_5(&VAR_2->txq);
  FUNC_2(&VAR_2->tx_work);


  FUNC_0(&VAR_2->txq);
  FUNC_3(VAR_2);
 }
}
