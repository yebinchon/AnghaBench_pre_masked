
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * netdev_ops; } ;
struct br2684_dev {int brvccs; struct net_device* net_dev; } ;


 struct br2684_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct br2684_dev *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_1);
 VAR_2->net_dev = VAR_1;

 VAR_1->netdev_ops = &VAR_0;

 FUNC_1(&VAR_2->brvccs);
}
