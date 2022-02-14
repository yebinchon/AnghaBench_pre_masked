
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int ip_summed; int data_len; int len; TYPE_1__* sk; struct net_device* dev; } ;
struct net_device {long features; TYPE_2__* ethtool_ops; } ;
struct ethtool_drvinfo {int driver; } ;
struct TYPE_4__ {int (* get_drvinfo ) (struct net_device*,struct ethtool_drvinfo*) ;} ;
struct TYPE_3__ {long sk_route_caps; } ;


 int FUNC_0 (int,char*,int ,long,long,int ,int ,int ) ;
 int FUNC_1 (struct net_device*,struct ethtool_drvinfo*) ;

__attribute__((used)) static void FUNC_2(const struct sk_buff *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->dev;
 struct ethtool_drvinfo VAR_2 = {};

 if (VAR_1 && VAR_1->ethtool_ops && VAR_1->ethtool_ops->get_drvinfo)
  VAR_1->ethtool_ops->get_drvinfo(VAR_1, &VAR_2);

 FUNC_0(1, "%s: caps=(0x%lx, 0x%lx) len=%d data_len=%d "
  "ip_summed=%d",
      VAR_2.driver, VAR_1 ? VAR_1->features : 0L,
      VAR_0->sk ? VAR_0->sk->sk_route_caps : 0L,
      VAR_0->len, VAR_0->data_len, VAR_0->ip_summed);
}
