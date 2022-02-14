
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int iflink; } ;
struct dsa_slave_priv {TYPE_3__* parent; } ;
struct TYPE_6__ {TYPE_2__* dst; } ;
struct TYPE_5__ {TYPE_1__* master_netdev; } ;
struct TYPE_4__ {int ifindex; } ;


 struct dsa_slave_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0)
{
 struct dsa_slave_priv *VAR_1 = FUNC_0(VAR_0);

 VAR_0->iflink = VAR_1->parent->dst->master_netdev->ifindex;

 return 0;
}
