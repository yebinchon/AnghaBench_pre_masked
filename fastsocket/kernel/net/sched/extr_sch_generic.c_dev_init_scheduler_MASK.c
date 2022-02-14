
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int watchdog_timer; int rx_queue; int * qdisc; } ;


 int FUNC_0 (struct net_device*,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct net_device*,int (*) (struct net_device*,int *,int *),int *) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,unsigned long) ;

void FUNC_3(struct net_device *VAR_2)
{
 VAR_2->qdisc = &VAR_1;
 FUNC_1(VAR_2, FUNC_0, &VAR_1);
 FUNC_0(VAR_2, &VAR_2->rx_queue, &VAR_1);

 FUNC_2(&VAR_2->watchdog_timer, VAR_0, (unsigned long)VAR_2);
}
