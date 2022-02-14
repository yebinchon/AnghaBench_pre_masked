
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_ring {int first_interrupt; } ;
struct ena_que {int id; struct ena_ring* rx_ring; struct ena_ring* tx_ring; struct ena_adapter* adapter; } ;
struct ena_eth_io_intr_reg {int dummy; } ;
struct ena_com_io_cq {int dummy; } ;
struct ena_adapter {TYPE_1__* ena_dev; int ifp; } ;
typedef int if_t ;
struct TYPE_2__ {struct ena_com_io_cq* io_cq_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ena_com_io_cq*,struct ena_eth_io_intr_reg*) ;
 int FUNC_2 (struct ena_eth_io_intr_reg*,int ,int ,int) ;
 int FUNC_3 (struct ena_ring*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct ena_ring*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

void
FUNC_8(void *VAR_7, int VAR_8)
{
 struct ena_que *VAR_9 = VAR_7;
 struct ena_adapter *VAR_10 = VAR_9->adapter;
 if_t VAR_11 = VAR_10->ifp;
 struct ena_ring *VAR_12;
 struct ena_ring *VAR_13;
 struct ena_com_io_cq* VAR_14;
 struct ena_eth_io_intr_reg VAR_15;
 int VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20;

 if (FUNC_7((FUNC_6(VAR_11) & VAR_2) == 0))
  return;

 FUNC_4(VAR_1, "MSI-X TX/RX routine\n");

 VAR_12 = VAR_9->tx_ring;
 VAR_13 = VAR_9->rx_ring;
 VAR_16 = VAR_9->id;
 VAR_17 = FUNC_0(VAR_16);
 VAR_14 = &VAR_10->ena_dev->io_cq_queues[VAR_17];

 VAR_12->first_interrupt = 1;
 VAR_13->first_interrupt = 1;

 for (VAR_20 = 0; VAR_20 < VAR_0; ++VAR_20) {
  VAR_19 = FUNC_3(VAR_13);
  VAR_18 = FUNC_5(VAR_12);

  if (FUNC_7((FUNC_6(VAR_11) & VAR_2) == 0))
   return;

  if ((VAR_18 != VAR_5) && (VAR_19 != VAR_3))
         break;
 }


 FUNC_2(&VAR_15,
     VAR_4,
     VAR_6,
     1);
 FUNC_1(VAR_14, &VAR_15);
}
