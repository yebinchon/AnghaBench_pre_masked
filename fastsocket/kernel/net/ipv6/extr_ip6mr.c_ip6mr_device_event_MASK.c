
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int maxvif; struct mif_device* vif6_table; } ;
struct net {TYPE_1__ ipv6; } ;
struct mif_device {struct net_device* dev; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 struct net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net*,int) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_2,
         unsigned long VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = VAR_4;
 struct net *VAR_6 = FUNC_0(VAR_5);
 struct mif_device *VAR_7;
 int VAR_8;

 if (VAR_3 != VAR_0)
  return VAR_1;

 VAR_7 = &VAR_6->ipv6.vif6_table[0];
 for (VAR_8 = 0; VAR_8 < VAR_6->ipv6.maxvif; VAR_8++, VAR_7++) {
  if (VAR_7->dev == VAR_5)
   FUNC_1(VAR_6, VAR_8);
 }
 return VAR_1;
}
