
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdev_rps_info {int queues_kset; } ;
struct net_device {int real_num_tx_queues; } ;
struct TYPE_2__ {int real_num_rx_queues; struct netdev_rps_info rps_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,int,int ) ;
 TYPE_1__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 int VAR_1 = 0, VAR_2 = 0;
 struct netdev_rps_info *VAR_3 = &FUNC_2(VAR_0)->rps_data;





 VAR_2 = VAR_0->real_num_tx_queues;

 FUNC_1(VAR_0, VAR_1, 0);
 FUNC_3(VAR_0, VAR_2, 0);



}
