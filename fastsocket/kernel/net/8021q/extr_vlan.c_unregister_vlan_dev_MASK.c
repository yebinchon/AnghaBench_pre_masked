
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct vlan_group {scalar_t__ nr_vlans; int rcu; int hlist; } ;
struct vlan_dev_info {scalar_t__ vlan_id; struct net_device* real_dev; } ;
struct net_device_ops {int (* ndo_vlan_rx_register ) (struct net_device*,int *) ;int (* ndo_vlan_rx_kill_vid ) (struct net_device*,scalar_t__) ;} ;
struct net_device {int features; struct net_device_ops* netdev_ops; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct vlan_group* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*,scalar_t__) ;
 int FUNC_7 (struct net_device*,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (struct net_device*) ;
 struct vlan_dev_info* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct vlan_group*,scalar_t__,int *) ;
 int FUNC_12 (struct net_device*) ;
 int VAR_2 ;

void FUNC_13(struct net_device *VAR_3)
{
 struct vlan_dev_info *VAR_4 = FUNC_10(VAR_3);
 struct net_device *VAR_5 = VAR_4->real_dev;
 const struct net_device_ops *VAR_6 = VAR_5->netdev_ops;
 struct vlan_group *VAR_7;
 u16 VAR_8 = VAR_4->vlan_id;

 FUNC_0();

 VAR_7 = FUNC_2(VAR_5);
 FUNC_1(!VAR_7);





 if (VAR_8 && (VAR_5->features & VAR_0))
  VAR_6->ndo_vlan_rx_kill_vid(VAR_5, VAR_8);

 FUNC_11(VAR_7, VAR_8, ((void*)0));
 VAR_7->nr_vlans--;

 FUNC_8();

 FUNC_9(VAR_3);


 if (VAR_7->nr_vlans == 0) {
  FUNC_12(VAR_5);

  if (VAR_5->features & VAR_1)
   VAR_6->ndo_vlan_rx_register(VAR_5, ((void*)0));

  FUNC_5(&VAR_7->hlist);


  FUNC_3(&VAR_7->rcu, VAR_2);
 }


 FUNC_4(VAR_5);
}
