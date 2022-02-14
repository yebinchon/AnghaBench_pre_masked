
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device_ops {int (* ndo_vlan_rx_add_vid ) (TYPE_1__*,int) ;int (* ndo_vlan_rx_register ) (TYPE_1__*,int ) ;} ;
struct net_device {int dummy; } ;
struct net_bridge_port {TYPE_1__* dev; } ;
struct net_bridge {int vlgrp; } ;
struct TYPE_3__ {int features; struct net_device_ops* netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 struct net_device* FUNC_2 (int ,int) ;

void FUNC_3(struct net_bridge *VAR_2, struct net_bridge_port *VAR_3)
{
 int VAR_4;
 struct net_device *VAR_5;
 const struct net_device_ops *VAR_6 = VAR_3->dev->netdev_ops;

 if (!VAR_2->vlgrp)
  return;

 if ((VAR_3->dev->features & VAR_1) &&
     VAR_6->ndo_vlan_rx_register)
  VAR_6->ndo_vlan_rx_register(VAR_3->dev, VAR_2->vlgrp);

 if (!(VAR_3->dev->features & VAR_0) ||
     !VAR_6->ndo_vlan_rx_add_vid)
  return;




 for (VAR_4 = 1; VAR_4 < 4096; VAR_4++) {
  VAR_5 = FUNC_2(VAR_2->vlgrp, VAR_4);
  if (VAR_5)
   VAR_6->ndo_vlan_rx_add_vid(VAR_3->dev, VAR_4);
 }
}
