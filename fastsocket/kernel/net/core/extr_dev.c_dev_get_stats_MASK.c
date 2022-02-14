
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct net_device_ops {struct net_device_stats const* (* ndo_get_stats ) (struct net_device*) ;} ;
struct net_device {struct net_device_stats const stats; struct net_device_ops* netdev_ops; } ;


 int FUNC_0 (struct net_device*,struct net_device_stats const*) ;
 struct net_device_stats const* FUNC_1 (struct net_device*) ;

const struct net_device_stats *FUNC_2(struct net_device *VAR_0)
{
 const struct net_device_ops *VAR_1 = VAR_0->netdev_ops;

 if (VAR_1->ndo_get_stats)
  return VAR_1->ndo_get_stats(VAR_0);

 FUNC_0(VAR_0, &VAR_0->stats);
 return &VAR_0->stats;
}
