
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct al_udma_q_params {int dummy; } ;
struct al_eth_adapter {int dev; int hal_adapter; TYPE_1__* rx_ring; TYPE_2__* tx_ring; } ;
typedef enum al_udma_type { ____Placeholder_al_udma_type } al_udma_type ;
struct TYPE_4__ {struct al_udma_q_params q_params; } ;
struct TYPE_3__ {struct al_udma_q_params q_params; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,struct al_udma_q_params*) ;
 int FUNC_1 (int ,char*,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct al_eth_adapter *VAR_1, enum al_udma_type VAR_2,
    int VAR_3)
{
 int VAR_4 = 0;
 char *VAR_5 = (VAR_2 == VAR_0) ? "Tx" : "Rx";
 struct al_udma_q_params *VAR_6;

 if (VAR_2 == VAR_0)
  VAR_6 = &VAR_1->tx_ring[VAR_3].q_params;
 else
  VAR_6 = &VAR_1->rx_ring[VAR_3].q_params;

 VAR_4 = FUNC_0(&VAR_1->hal_adapter, VAR_2, VAR_3, VAR_6);
 if (VAR_4 < 0) {
  FUNC_1(VAR_1->dev, "config %s queue %u failed\n", VAR_5,
      VAR_3);
  return (VAR_4);
 }
 return (VAR_4);
}
