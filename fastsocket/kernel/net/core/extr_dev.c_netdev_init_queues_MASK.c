
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int tx_global_lock; int rx_queue; } ;


 int FUNC_0 (struct net_device*,int (*) (struct net_device*,int *,int *),int *) ;
 int FUNC_1 (struct net_device*,int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 FUNC_1(VAR_0, &VAR_0->rx_queue, ((void*)0));
 FUNC_0(VAR_0, FUNC_1, ((void*)0));
 FUNC_2(&VAR_0->tx_global_lock);
}
