
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int watchdog_timer; int * qdisc; int rx_queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,int (*) (struct net_device*,int *,int *),int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*,int *,int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct net_device *VAR_1)
{
 FUNC_1(VAR_1, FUNC_3, &VAR_0);
 FUNC_3(VAR_1, &VAR_1->rx_queue, &VAR_0);
 FUNC_2(VAR_1->qdisc);
 VAR_1->qdisc = &VAR_0;

 FUNC_0(FUNC_4(&VAR_1->watchdog_timer));
}
