
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tx_ring {int dummy; } ;
struct rx_ring {int dummy; } ;
struct ifnet {int dummy; } ;
struct adapter {int tx_num_queues; int rx_num_queues; int hw; TYPE_2__* rx_queues; TYPE_1__* tx_queues; int ctx; } ;
typedef int device_t ;
struct TYPE_4__ {struct rx_ring rxr; } ;
struct TYPE_3__ {struct tx_ring txr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (int ) ;
 struct ifnet* FUNC_8 (int ) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10(struct adapter *VAR_2)
{
 device_t VAR_3 = FUNC_7(VAR_2->ctx);
 struct ifnet *VAR_4 = FUNC_8(VAR_2->ctx);
 struct tx_ring *VAR_5 = &VAR_2->tx_queues->txr;
 struct rx_ring *VAR_6 = &VAR_2->rx_queues->rxr;

 if (FUNC_6(VAR_4) & VAR_1)
  FUNC_9("Interface is RUNNING ");
 else
  FUNC_9("Interface is NOT RUNNING\n");

 if (FUNC_6(VAR_4) & VAR_0)
  FUNC_9("and INACTIVE\n");
 else
  FUNC_9("and ACTIVE\n");

 for (int VAR_7 = 0; VAR_7 < VAR_2->tx_num_queues; VAR_7++, VAR_5++) {
  FUNC_5(VAR_3, "TX Queue %d ------\n", VAR_7);
  FUNC_5(VAR_3, "hw tdh = %d, hw tdt = %d\n",
   FUNC_2(&VAR_2->hw, FUNC_3(VAR_7)),
   FUNC_2(&VAR_2->hw, FUNC_4(VAR_7)));

 }
 for (int VAR_8=0; VAR_8 < VAR_2->rx_num_queues; VAR_8++, VAR_6++) {
  FUNC_5(VAR_3, "RX Queue %d ------\n", VAR_8);
  FUNC_5(VAR_3, "hw rdh = %d, hw rdt = %d\n",
   FUNC_2(&VAR_2->hw, FUNC_0(VAR_8)),
   FUNC_2(&VAR_2->hw, FUNC_1(VAR_8)));
 }
}
