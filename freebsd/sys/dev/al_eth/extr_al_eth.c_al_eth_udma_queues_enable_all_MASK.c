
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_eth_adapter {int num_tx_queues; int num_rx_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct al_eth_adapter*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct al_eth_adapter *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_tx_queues; VAR_3++)
  FUNC_0(VAR_2, VAR_1, VAR_3);

 for (VAR_3 = 0; VAR_3 < VAR_2->num_rx_queues; VAR_3++)
  FUNC_0(VAR_2, VAR_0, VAR_3);

 return (0);
}
