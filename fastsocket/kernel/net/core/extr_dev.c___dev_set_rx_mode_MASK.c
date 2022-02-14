
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device_ops {int (* ndo_set_multicast_list ) (struct net_device*) ;int (* ndo_set_rx_mode ) (struct net_device*) ;} ;
struct net_device {int flags; int uc_promisc; struct net_device_ops* netdev_ops; } ;
struct TYPE_2__ {int ext_priv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

void FUNC_6(struct net_device *VAR_2)
{
 const struct net_device_ops *VAR_3 = VAR_2->netdev_ops;


 if (!(VAR_2->flags&VAR_1))
  return;

 if (!FUNC_3(VAR_2))
  return;

 if (VAR_3->ndo_set_rx_mode && !(FUNC_1(VAR_2)->ext_priv_flags &
          VAR_0))
  VAR_3->ndo_set_rx_mode(VAR_2);
 else {



  if (!FUNC_2(VAR_2) && !VAR_2->uc_promisc) {
   FUNC_0(VAR_2, 1);
   VAR_2->uc_promisc = 1;
  } else if (FUNC_2(VAR_2) && VAR_2->uc_promisc) {
   FUNC_0(VAR_2, -1);
   VAR_2->uc_promisc = 0;
  }

  if (VAR_3->ndo_set_multicast_list)
   VAR_3->ndo_set_multicast_list(VAR_2);
 }
}
