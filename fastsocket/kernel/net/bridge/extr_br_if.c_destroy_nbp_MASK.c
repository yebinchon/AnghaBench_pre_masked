
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net_bridge_port {int kobj; struct net_device* dev; int * br; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct net_bridge_port *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->dev;

 VAR_0->br = ((void*)0);
 VAR_0->dev = ((void*)0);
 FUNC_0(VAR_1);

 FUNC_1(&VAR_0->kobj);
}
