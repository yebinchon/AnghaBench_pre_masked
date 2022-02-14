
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct in_ifaddr {TYPE_1__* ifa_dev; } ;
struct TYPE_2__ {int * ifa_list; struct net_device* dev; } ;




 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct in_ifaddr*) ;
 int FUNC_2 (struct in_ifaddr*) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_1, unsigned long VAR_2, void *VAR_3)
{
 struct in_ifaddr *VAR_4 = (struct in_ifaddr *)VAR_3;
 struct net_device *VAR_5 = VAR_4->ifa_dev->dev;

 switch (VAR_2) {
 case 128:
  FUNC_1(VAR_4);



  FUNC_5(FUNC_0(VAR_5), -1);
  break;
 case 129:
  FUNC_2(VAR_4);
  if (VAR_4->ifa_dev->ifa_list == ((void*)0)) {



   FUNC_3(VAR_5, 1);
  } else {
   FUNC_5(FUNC_0(VAR_5), -1);
  }
  break;
 }
 return VAR_0;
}
