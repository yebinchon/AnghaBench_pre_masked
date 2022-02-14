
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
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ) ;
 struct dsa_slave_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4)
{
 struct dsa_slave_priv *VAR_5 = FUNC_5(VAR_4);
 struct net_device *VAR_6 = VAR_5->parent->dst->master_netdev;
 int VAR_7;

 if (!(VAR_6->flags & VAR_3))
  return -VAR_0;

 if (FUNC_0(VAR_4->dev_addr, VAR_6->dev_addr)) {
  VAR_7 = FUNC_3(VAR_6, VAR_4->dev_addr);
  if (VAR_7 < 0)
   goto out;
 }

 if (VAR_4->flags & VAR_1) {
  VAR_7 = FUNC_1(VAR_6, 1);
  if (VAR_7 < 0)
   goto del_unicast;
 }
 if (VAR_4->flags & VAR_2) {
  VAR_7 = FUNC_2(VAR_6, 1);
  if (VAR_7 < 0)
   goto clear_allmulti;
 }

 return 0;

clear_allmulti:
 if (VAR_4->flags & VAR_1)
  FUNC_1(VAR_6, -1);
del_unicast:
 if (FUNC_0(VAR_4->dev_addr, VAR_6->dev_addr))
  FUNC_4(VAR_6, VAR_4->dev_addr);
out:
 return VAR_7;
}
