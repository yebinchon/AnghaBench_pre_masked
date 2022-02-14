
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * dev_addr; int dev_addrs; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0)
{


 FUNC_0(&VAR_0->dev_addrs);
 VAR_0->dev_addr = ((void*)0);
}
