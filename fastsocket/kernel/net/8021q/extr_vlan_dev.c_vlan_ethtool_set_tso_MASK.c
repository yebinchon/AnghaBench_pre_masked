
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int vlan_features; int features; } ;
struct TYPE_2__ {struct net_device* real_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3, u32 VAR_4)
{
       if (VAR_4) {
  struct net_device *VAR_5 = FUNC_0(VAR_3)->real_dev;




  if (!(VAR_5->vlan_features & VAR_2))
   return -VAR_1;
  if (!(VAR_5->features & VAR_2))
   return -VAR_0;
  VAR_3->features |= VAR_2;
 } else {
  VAR_3->features &= ~VAR_2;
 }
 return 0;
}
