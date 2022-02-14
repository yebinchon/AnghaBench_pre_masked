
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {unsigned long features; unsigned long vlan_features; int fcoe_ddp_xid; int gso_max_size; } ;
struct TYPE_2__ {int flags; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_7, struct net_device *VAR_8)
{
 unsigned long VAR_9 = VAR_8->features;
 unsigned long VAR_10 = ((VAR_9 & ~VAR_7->vlan_features) |
          (VAR_7->features & VAR_7->vlan_features));




 if (!(VAR_7->features & VAR_4) &&
     !(FUNC_1(VAR_8)->flags & VAR_6))
  VAR_10 &= ~(VAR_0 | VAR_5 |
      VAR_2 | VAR_3 |
      VAR_1);
 VAR_8->features = VAR_10;
 VAR_8->gso_max_size = VAR_7->gso_max_size;



 if (VAR_9 != VAR_8->features)
  FUNC_0(VAR_8);
}
