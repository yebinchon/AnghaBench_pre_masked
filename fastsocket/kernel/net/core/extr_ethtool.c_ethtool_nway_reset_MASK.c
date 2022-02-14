
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* ethtool_ops; } ;
struct TYPE_2__ {int (* nway_reset ) (struct net_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1)
{
 if (!VAR_1->ethtool_ops->nway_reset)
  return -VAR_0;

 return VAR_1->ethtool_ops->nway_reset(VAR_1);
}
