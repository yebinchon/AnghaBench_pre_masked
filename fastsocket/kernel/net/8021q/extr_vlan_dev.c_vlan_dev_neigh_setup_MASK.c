
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device_ops {int (* ndo_neigh_setup ) (struct net_device*,struct neigh_parms*) ;} ;
struct net_device {struct net_device_ops* netdev_ops; } ;
struct neigh_parms {int dummy; } ;
struct TYPE_2__ {struct net_device* real_dev; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,struct neigh_parms*) ;
 TYPE_1__* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, struct neigh_parms *VAR_1)
{
 struct net_device *VAR_2 = FUNC_2(VAR_0)->real_dev;
 const struct net_device_ops *VAR_3 = VAR_2->netdev_ops;
 int VAR_4 = 0;

 if (FUNC_0(VAR_2) && VAR_3->ndo_neigh_setup)
  VAR_4 = VAR_3->ndo_neigh_setup(VAR_2, VAR_1);

 return VAR_4;
}
