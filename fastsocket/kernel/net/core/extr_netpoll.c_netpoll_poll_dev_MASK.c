
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; } ;
struct netpoll_info {int arp_tx; } ;
struct net_device_ops {int (* ndo_poll_controller ) (struct net_device*) ;} ;
struct net_device {int priv_flags; int npinfo; struct net_device* master; struct net_device_ops* netdev_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct netpoll_info* FUNC_2 (int ) ;
 int FUNC_3 (struct netpoll_info*) ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 () ;

void FUNC_8(struct net_device *VAR_1)
{
 const struct net_device_ops *VAR_2;
 struct netpoll_info *VAR_3 = FUNC_2(VAR_1->npinfo);

 if (!VAR_1 || !FUNC_0(VAR_1))
  return;

 VAR_2 = VAR_1->netdev_ops;
 if (!VAR_2->ndo_poll_controller)
  return;


 VAR_2->ndo_poll_controller(VAR_1);

 FUNC_1(VAR_1);

 if (VAR_1->priv_flags & VAR_0) {
  if (VAR_3) {
   struct net_device *VAR_4 = VAR_1->master;
   struct sk_buff *VAR_5;
   struct netpoll_info *VAR_6 = FUNC_2(VAR_4->npinfo);
   while ((VAR_5 = FUNC_4(&VAR_3->arp_tx))) {
    VAR_5->dev = VAR_4;
    FUNC_5(&VAR_6->arp_tx, VAR_5);
   }
  }
 }

 FUNC_3(VAR_3);

 FUNC_7();
}
