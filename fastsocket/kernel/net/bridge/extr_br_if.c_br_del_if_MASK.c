
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct net_bridge_port* br_port; } ;
struct net_bridge_port {struct net_bridge* br; } ;
struct net_bridge {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_bridge*) ;
 int FUNC_1 (struct net_bridge*) ;
 int FUNC_2 (struct net_bridge_port*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct net_bridge *VAR_1, struct net_device *VAR_2)
{
 struct net_bridge_port *VAR_3 = VAR_2->br_port;

 if (!VAR_3 || VAR_3->br != VAR_1)
  return -VAR_0;

 FUNC_2(VAR_3);

 FUNC_3(&VAR_1->lock);
 FUNC_1(VAR_1);
 FUNC_4(&VAR_1->lock);

 FUNC_0(VAR_1);

 return 0;
}
