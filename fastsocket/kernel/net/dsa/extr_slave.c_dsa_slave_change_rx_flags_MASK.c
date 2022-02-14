
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int flags; } ;
struct dsa_slave_priv {TYPE_2__* parent; } ;
struct TYPE_4__ {TYPE_1__* dst; } ;
struct TYPE_3__ {struct net_device* master_netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int) ;
 struct dsa_slave_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2, int VAR_3)
{
 struct dsa_slave_priv *VAR_4 = FUNC_2(VAR_2);
 struct net_device *VAR_5 = VAR_4->parent->dst->master_netdev;

 if (VAR_3 & VAR_0)
  FUNC_0(VAR_5, VAR_2->flags & VAR_0 ? 1 : -1);
 if (VAR_3 & VAR_1)
  FUNC_1(VAR_5, VAR_2->flags & VAR_1 ? 1 : -1);
}
