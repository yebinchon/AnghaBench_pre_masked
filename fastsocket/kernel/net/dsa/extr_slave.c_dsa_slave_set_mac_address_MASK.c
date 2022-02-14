
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int flags; int dev_addr; } ;
struct dsa_slave_priv {TYPE_1__* parent; } ;
struct TYPE_4__ {struct net_device* master_netdev; } ;
struct TYPE_3__ {TYPE_2__* dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 struct dsa_slave_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3, void *VAR_4)
{
 struct dsa_slave_priv *VAR_5 = FUNC_5(VAR_3);
 struct net_device *VAR_6 = VAR_5->parent->dst->master_netdev;
 struct sockaddr *VAR_7 = VAR_4;
 int VAR_8;

 if (!FUNC_3(VAR_7->sa_data))
  return -VAR_0;

 if (!(VAR_3->flags & VAR_2))
  goto out;

 if (FUNC_0(VAR_7->sa_data, VAR_6->dev_addr)) {
  VAR_8 = FUNC_1(VAR_6, VAR_7->sa_data);
  if (VAR_8 < 0)
   return VAR_8;
 }

 if (FUNC_0(VAR_3->dev_addr, VAR_6->dev_addr))
  FUNC_2(VAR_6, VAR_3->dev_addr);

out:
 FUNC_4(VAR_3->dev_addr, VAR_7->sa_data, VAR_1);

 return 0;
}
