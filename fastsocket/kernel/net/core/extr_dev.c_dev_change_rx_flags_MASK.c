
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_ops {int (* ndo_change_rx_flags ) (struct net_device*,int) ;} ;
struct net_device {int flags; struct net_device_ops* netdev_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1, int VAR_2)
{
 const struct net_device_ops *VAR_3 = VAR_1->netdev_ops;

 if ((VAR_1->flags & VAR_0) && VAR_3->ndo_change_rx_flags)
  VAR_3->ndo_change_rx_flags(VAR_1, VAR_2);
}
