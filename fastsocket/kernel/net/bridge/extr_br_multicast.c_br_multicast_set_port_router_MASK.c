
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {scalar_t__ state; unsigned long multicast_router; int multicast_router_timer; int rlist; struct net_bridge* br; } ;
struct net_bridge {int multicast_lock; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_bridge*,struct net_bridge_port*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct net_bridge_port *VAR_3, unsigned long VAR_4)
{
 struct net_bridge *VAR_5 = VAR_3->br;
 int VAR_6 = -VAR_2;

 FUNC_5(&VAR_5->multicast_lock);
 if (!FUNC_4(VAR_5->dev) || VAR_3->state == VAR_0)
  goto unlock;

 switch (VAR_4) {
 case 0:
 case 1:
 case 2:
  VAR_3->multicast_router = VAR_4;
  VAR_6 = 0;

  if (VAR_4 < 2 && !FUNC_3(&VAR_3->rlist))
   FUNC_2(&VAR_3->rlist);

  if (VAR_4 == 1)
   break;

  FUNC_1(&VAR_3->multicast_router_timer);

  if (VAR_4 == 0)
   break;

  FUNC_0(VAR_5, VAR_3);
  break;

 default:
  VAR_6 = -VAR_1;
  break;
 }

unlock:
 FUNC_6(&VAR_5->multicast_lock);

 return VAR_6;
}
