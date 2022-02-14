
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int trans_start; int rx_queue; int * qdisc; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_2 (struct net_device*,int (*) (struct net_device*,int *,int *),int*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_4 (struct net_device*,int *,int *) ;

void FUNC_5(struct net_device *VAR_2)
{
 int VAR_3;







 if (VAR_2->qdisc == &VAR_1)
  FUNC_0(VAR_2);

 if (!FUNC_3(VAR_2))

  return;

 VAR_3 = 0;
 FUNC_2(VAR_2, FUNC_4, &VAR_3);
 FUNC_4(VAR_2, &VAR_2->rx_queue, ((void*)0));

 if (VAR_3) {
  VAR_2->trans_start = VAR_0;
  FUNC_1(VAR_2);
 }
}
