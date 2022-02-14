
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {TYPE_1__* ethtool_ops; } ;
struct TYPE_2__ {int (* set_tso ) (struct net_device*,int ) ;int (* set_ufo ) (struct net_device*,int ) ;int (* set_sg ) (struct net_device*,int ) ;} ;


 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, u32 VAR_1)
{
 int VAR_2;

 if (!VAR_1 && VAR_0->ethtool_ops->set_tso) {
  VAR_2 = VAR_0->ethtool_ops->set_tso(VAR_0, 0);
  if (VAR_2)
   return VAR_2;
 }

 if (!VAR_1 && VAR_0->ethtool_ops->set_ufo) {
  VAR_2 = VAR_0->ethtool_ops->set_ufo(VAR_0, 0);
  if (VAR_2)
   return VAR_2;
 }
 return VAR_0->ethtool_ops->set_sg(VAR_0, VAR_1);
}
