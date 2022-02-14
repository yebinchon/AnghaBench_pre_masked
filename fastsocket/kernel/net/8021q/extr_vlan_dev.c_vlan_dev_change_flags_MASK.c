
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vlan_dev_info {int flags; TYPE_1__* real_dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int features; int vlan_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 struct vlan_dev_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_1__*,struct net_device*) ;

int FUNC_5(struct net_device *VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct vlan_dev_info *VAR_9 = FUNC_1(VAR_6);
 u32 VAR_10 = VAR_9->flags;

 if (VAR_8 & ~(VAR_5 | VAR_4))
  return -VAR_1;






 if (FUNC_0(VAR_6) &&
     !(VAR_9->real_dev->features & VAR_3) &&
     (VAR_9->real_dev->vlan_features & VAR_2) &&
     ((VAR_7 ^ VAR_10) & VAR_5))
  return -VAR_0;

 VAR_9->flags = (VAR_10 & ~VAR_8) | (VAR_7 & VAR_8);

 if (FUNC_0(VAR_6) && (VAR_9->flags ^ VAR_10) & VAR_4) {
  if (VAR_9->flags & VAR_4)
   FUNC_2(VAR_6);
  else
   FUNC_3(VAR_6);
 }
 if ((VAR_9->flags ^ VAR_10) & VAR_5)
  FUNC_4(VAR_9->real_dev, VAR_6);
 return 0;
}
