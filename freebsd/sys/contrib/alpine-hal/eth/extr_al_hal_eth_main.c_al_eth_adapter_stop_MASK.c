
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct al_hal_eth_adapter {int name; TYPE_1__ rx_udma; TYPE_1__ tx_udma; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (char*,int ,int) ;

int FUNC_3(struct al_hal_eth_adapter *VAR_1)
{
 int VAR_2;

 FUNC_0("eth [%s]: stop controller's UDMA\n", VAR_1->name);


 VAR_2 = FUNC_1(&VAR_1->tx_udma, VAR_0);
 if (VAR_2 != 0) {
  FUNC_2("[%s] warn: failed to change state, error %d\n",
    VAR_1->tx_udma.name, VAR_2);
  return VAR_2;
 }

 FUNC_0("eth [%s]: controller's TX UDMA stopped\n",
   VAR_1->name);

 VAR_2 = FUNC_1(&VAR_1->rx_udma, VAR_0);
 if (VAR_2 != 0) {
  FUNC_2("[%s] warn: failed to change state, error %d\n",
    VAR_1->rx_udma.name, VAR_2);
  return VAR_2;
 }

 FUNC_0("eth [%s]: controller's RX UDMA stopped\n",
   VAR_1->name);
 return 0;
}
