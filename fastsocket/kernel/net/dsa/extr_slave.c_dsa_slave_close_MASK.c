
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int flags; int dev_addr; } ;
struct dsa_slave_priv {TYPE_2__* parent; } ;
struct TYPE_4__ {TYPE_1__* dst; } ;
struct TYPE_3__ {struct net_device* master_netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct net_device*,struct net_device*) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,struct net_device*) ;
 struct dsa_slave_priv* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2)
{
 struct dsa_slave_priv *VAR_3 = FUNC_6(VAR_2);
 struct net_device *VAR_4 = VAR_3->parent->dst->master_netdev;

 FUNC_1(VAR_4, VAR_2);
 FUNC_5(VAR_4, VAR_2);
 if (VAR_2->flags & VAR_0)
  FUNC_2(VAR_4, -1);
 if (VAR_2->flags & VAR_1)
  FUNC_3(VAR_4, -1);

 if (FUNC_0(VAR_2->dev_addr, VAR_4->dev_addr))
  FUNC_4(VAR_4, VAR_2->dev_addr);

 return 0;
}
