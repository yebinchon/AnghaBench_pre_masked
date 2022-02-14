
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int dummy; } ;
struct inet6_ifaddr {int addr; TYPE_1__* idev; } ;
struct arg_dev_net_ip {int * addr; struct net* net; int dev; } ;
struct TYPE_2__ {int dev; } ;


 struct net* FUNC_0 (int ) ;
 int FUNC_1 (struct net*,int ,int ,struct arg_dev_net_ip*) ;
 int VAR_0 ;

void FUNC_2(struct inet6_ifaddr *VAR_1)
{
 struct net *VAR_2 = FUNC_0(VAR_1->idev->dev);
 struct arg_dev_net_ip VAR_3 = {
  .dev = VAR_1->idev->dev,
  .net = VAR_2,
  .addr = &VAR_1->addr,
 };
 FUNC_1(VAR_2, VAR_0, 0, &VAR_3);
}
