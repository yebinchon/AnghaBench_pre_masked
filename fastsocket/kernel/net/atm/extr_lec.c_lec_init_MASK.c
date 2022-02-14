
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; int * netdev_ops; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1)
{
 VAR_1->netdev_ops = &VAR_0;
 FUNC_0("%s: Initialized!\n", VAR_1->name);
}
