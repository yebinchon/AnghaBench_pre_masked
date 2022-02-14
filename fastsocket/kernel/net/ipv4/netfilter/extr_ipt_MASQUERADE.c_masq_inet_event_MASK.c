
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct in_ifaddr {TYPE_1__* ifa_dev; } ;
struct TYPE_2__ {struct net_device* dev; } ;


 int FUNC_0 (struct notifier_block*,unsigned long,struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_0,
      unsigned long VAR_1,
      void *VAR_2)
{
 struct net_device *VAR_3 = ((struct in_ifaddr *)VAR_2)->ifa_dev->dev;
 return FUNC_0(VAR_0, VAR_1, VAR_3);
}
