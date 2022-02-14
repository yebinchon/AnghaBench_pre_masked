
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vlan_group {int rcu; int hlist; int nr_vlans; } ;
struct vlan_dev_info {int vlan_id; struct net_device* real_dev; } ;
struct net_device_ops {int (* ndo_vlan_rx_add_vid ) (struct net_device*,int ) ;int (* ndo_vlan_rx_register ) (struct net_device*,struct vlan_group*) ;} ;
struct net_device {int features; struct net_device_ops* netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vlan_group* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,struct vlan_group*) ;
 int FUNC_8 (struct net_device*,int ) ;
 struct vlan_dev_info* FUNC_9 (struct net_device*) ;
 struct vlan_group* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct vlan_group*,int ) ;
 int FUNC_12 (struct vlan_group*,int ,struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int VAR_3 ;

int FUNC_15(struct net_device *VAR_4)
{
 struct vlan_dev_info *VAR_5 = FUNC_9(VAR_4);
 struct net_device *VAR_6 = VAR_5->real_dev;
 const struct net_device_ops *VAR_7 = VAR_6->netdev_ops;
 u16 VAR_8 = VAR_5->vlan_id;
 struct vlan_group *VAR_9, *VAR_10 = ((void*)0);
 int VAR_11;

 VAR_9 = FUNC_0(VAR_6);
 if (!VAR_9) {
  VAR_10 = VAR_9 = FUNC_10(VAR_6);
  if (!VAR_9)
   return -VAR_0;
  VAR_11 = FUNC_13(VAR_6);
  if (VAR_11 < 0)
   goto out_free_group;
 }

 VAR_11 = FUNC_11(VAR_9, VAR_8);
 if (VAR_11 < 0)
  goto out_uninit_applicant;

 VAR_11 = FUNC_6(VAR_4);
 if (VAR_11 < 0)
  goto out_uninit_applicant;


 FUNC_2(VAR_6);

 FUNC_5(VAR_6, VAR_4);
 FUNC_4(VAR_4);




 FUNC_12(VAR_9, VAR_8, VAR_4);
 VAR_9->nr_vlans++;

 if (VAR_10 && VAR_6->features & VAR_2)
  VAR_7->ndo_vlan_rx_register(VAR_6, VAR_10);
 if (VAR_6->features & VAR_1)
  VAR_7->ndo_vlan_rx_add_vid(VAR_6, VAR_8);

 return 0;

out_uninit_applicant:
 if (VAR_10)
  FUNC_14(VAR_6);
out_free_group:
 if (VAR_10) {
  FUNC_3(&VAR_10->hlist);

  FUNC_1(&VAR_10->rcu, VAR_3);
 }
 return VAR_11;
}
