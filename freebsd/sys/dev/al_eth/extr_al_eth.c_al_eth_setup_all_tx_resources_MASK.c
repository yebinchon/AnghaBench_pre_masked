
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_eth_adapter {int num_tx_queues; int dev; } ;


 int FUNC_0 (struct al_eth_adapter*,int) ;
 int FUNC_1 (struct al_eth_adapter*,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct al_eth_adapter *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_tx_queues; VAR_1++) {
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  if (VAR_2 == 0)
   continue;

  FUNC_2(VAR_0->dev,
      "Allocation for Tx Queue %u failed\n", VAR_1);
  goto err_setup_tx;
 }

 return (0);

err_setup_tx:

 while (VAR_1--)
  FUNC_0(VAR_0, VAR_1);

 return (VAR_2);
}
