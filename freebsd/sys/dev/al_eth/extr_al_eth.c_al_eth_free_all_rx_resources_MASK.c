
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct al_eth_adapter {int num_rx_queues; TYPE_2__* rx_ring; } ;
struct TYPE_3__ {scalar_t__ desc_base; } ;
struct TYPE_4__ {TYPE_1__ q_params; } ;


 int FUNC_0 (struct al_eth_adapter*,int) ;

__attribute__((used)) static void
FUNC_1(struct al_eth_adapter *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_rx_queues; VAR_1++)
  if (VAR_0->rx_ring[VAR_1].q_params.desc_base != 0)
   FUNC_0(VAR_0, VAR_1);
}
