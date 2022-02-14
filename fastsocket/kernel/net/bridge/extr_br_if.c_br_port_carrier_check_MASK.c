
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net_bridge_port {scalar_t__ state; int path_cost; struct net_bridge* br; struct net_device* dev; } ;
struct net_bridge {int lock; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_bridge_port*) ;
 int FUNC_1 (struct net_bridge_port*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct net_bridge_port *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->dev;
 struct net_bridge *VAR_3 = VAR_1->br;

 if (FUNC_2(VAR_2))
  VAR_1->path_cost = FUNC_4(VAR_2);

 if (FUNC_3(VAR_3->dev)) {
  FUNC_5(&VAR_3->lock);
  if (FUNC_2(VAR_2)) {
   if (VAR_1->state == VAR_0)
    FUNC_1(VAR_1);
  } else {
   if (VAR_1->state != VAR_0)
    FUNC_0(VAR_1);
  }
  FUNC_6(&VAR_3->lock);
 }
}
