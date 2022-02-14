
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlan_group {int nr_vlans; } ;
struct notifier_block {int dummy; } ;
struct net_device {int features; int flags; int reg_state; int mtu; TYPE_1__* netdev_ops; int name; } ;
struct TYPE_2__ {int (* ndo_vlan_rx_add_vid ) (struct net_device*,int ) ;} ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,unsigned long) ;
 struct vlan_group* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,struct net_device*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (struct net_device*,int ) ;
 int FUNC_9 (struct net_device*) ;
 struct net_device* FUNC_10 (struct vlan_group*,int) ;
 int FUNC_11 (struct net_device*,struct net_device*) ;
 int FUNC_12 (struct net_device*,struct net_device*) ;

__attribute__((used)) static int FUNC_13(struct notifier_block *VAR_5, unsigned long VAR_6,
        void *VAR_7)
{
 struct net_device *VAR_8 = VAR_7;
 struct vlan_group *VAR_9;
 int VAR_10, VAR_11;
 struct net_device *VAR_12;

 if (FUNC_5(VAR_8))
  FUNC_0(VAR_8, VAR_6);

 if ((VAR_6 == 128) &&
     (VAR_8->features & VAR_1) &&
     VAR_8->netdev_ops->ndo_vlan_rx_add_vid) {
  FUNC_7("8021q: adding VLAN 0 to HW filter on device %s\n",
   VAR_8->name);
  VAR_8->netdev_ops->ndo_vlan_rx_add_vid(VAR_8, 0);
 }

 VAR_9 = FUNC_1(VAR_8);
 if (!VAR_9)
  goto out;





 switch (VAR_6) {
 case 134:

  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
   if (FUNC_4(VAR_8, VAR_10))
    continue;
   VAR_12 = FUNC_10(VAR_9, VAR_10);
   if (!VAR_12)
    continue;

   FUNC_6(VAR_8, VAR_12);
  }
  break;

 case 133:

  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
   if (FUNC_4(VAR_8, VAR_10))
    continue;
   VAR_12 = FUNC_10(VAR_9, VAR_10);
   if (!VAR_12)
    continue;

   VAR_11 = VAR_12->flags;
   if (!(VAR_11 & VAR_0))
    continue;

   FUNC_11(VAR_8, VAR_12);
  }
  break;

 case 132:
  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
   if (FUNC_4(VAR_8, VAR_10))
    continue;
   VAR_12 = FUNC_10(VAR_9, VAR_10);
   if (!VAR_12)
    continue;

   if (VAR_12->mtu <= VAR_8->mtu)
    continue;

   FUNC_3(VAR_12, VAR_8->mtu);
  }
  break;

 case 130:

  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
   if (FUNC_4(VAR_8, VAR_10))
    continue;
   VAR_12 = FUNC_10(VAR_9, VAR_10);
   if (!VAR_12)
    continue;

   FUNC_12(VAR_8, VAR_12);
  }

  break;

 case 131:

  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
   if (FUNC_4(VAR_8, VAR_10))
    continue;
   VAR_12 = FUNC_10(VAR_9, VAR_10);
   if (!VAR_12)
    continue;

   VAR_11 = VAR_12->flags;
   if (!(VAR_11 & VAR_0))
    continue;

   FUNC_2(VAR_12, VAR_11 & ~VAR_0);
   FUNC_6(VAR_8, VAR_12);
  }
  break;

 case 128:

  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
   if (FUNC_4(VAR_8, VAR_10))
    continue;
   VAR_12 = FUNC_10(VAR_9, VAR_10);
   if (!VAR_12)
    continue;

   VAR_11 = VAR_12->flags;
   if (VAR_11 & VAR_0)
    continue;

   FUNC_2(VAR_12, VAR_11 | VAR_0);
   FUNC_6(VAR_8, VAR_12);
  }
  break;

 case 129:

  if (VAR_8->reg_state != VAR_2)
   break;


  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
   if (FUNC_4(VAR_8, VAR_10))
    continue;
   VAR_12 = FUNC_10(VAR_9, VAR_10);
   if (!VAR_12)
    continue;



   if (VAR_9->nr_vlans == 1)
    VAR_10 = VAR_4;

   FUNC_9(VAR_12);
  }
  break;
 }

out:
 return VAR_3;
}
