
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int features; TYPE_1__* ethtool_ops; } ;
struct TYPE_2__ {int (* get_flags ) (struct net_device*) ;int (* set_flags ) (struct net_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int) ;
 struct net_device* FUNC_4 (struct net_device*) ;

void FUNC_5(struct net_device *VAR_2)
{




 if (FUNC_1(VAR_2))
  VAR_2 = FUNC_4(VAR_2);

 if (VAR_2->ethtool_ops && VAR_2->ethtool_ops->get_flags &&
     VAR_2->ethtool_ops->set_flags) {
  u32 VAR_3 = VAR_2->ethtool_ops->get_flags(VAR_2);
  if (VAR_3 & VAR_0) {
   VAR_3 &= ~VAR_0;
   VAR_2->ethtool_ops->set_flags(VAR_2, VAR_3);
  }
 }
 FUNC_0(VAR_2->features & VAR_1);
}
