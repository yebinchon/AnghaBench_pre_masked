
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {unsigned long multicast_router; int multicast_lock; int multicast_router_timer; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct net_bridge *VAR_2, unsigned long VAR_3)
{
 int VAR_4 = -VAR_1;

 FUNC_2(&VAR_2->multicast_lock);
 if (!FUNC_1(VAR_2->dev))
  goto unlock;

 switch (VAR_3) {
 case 0:
 case 2:
  FUNC_0(&VAR_2->multicast_router_timer);

 case 1:
  VAR_2->multicast_router = VAR_3;
  VAR_4 = 0;
  break;

 default:
  VAR_4 = -VAR_0;
  break;
 }

unlock:
 FUNC_3(&VAR_2->multicast_lock);

 return VAR_4;
}
