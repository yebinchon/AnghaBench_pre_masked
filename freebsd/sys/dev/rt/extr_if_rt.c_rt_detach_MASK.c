
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_softc {int rx_ring_count; int mem; int mem_rid; int irq; int irq_rid; int irqh; int lock; int taskqueue; int * rt_miibus; int * rx_ring; int * tx_ring; int periodic_task; int tx_done_task; int rx_done_task; int tx_watchdog_ch; int periodic_ch; struct ifnet* ifp; } ;
struct ifnet {int if_drv_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rt_softc*,int ,char*) ;
 int FUNC_1 (struct rt_softc*) ;
 int VAR_3 ;
 int FUNC_2 (struct rt_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 struct rt_softc* FUNC_8 (int ) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct ifnet*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct rt_softc*,int *) ;
 int FUNC_13 (struct rt_softc*,int *) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_6)
{
 struct rt_softc *VAR_7;
 struct ifnet *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_8(VAR_6);
 VAR_8 = VAR_7->ifp;

 FUNC_0(VAR_7, VAR_2, "detaching\n");

 FUNC_1(VAR_7);

 VAR_8->if_drv_flags &= ~(VAR_1 | VAR_0);

 FUNC_6(&VAR_7->periodic_ch);
 FUNC_6(&VAR_7->tx_watchdog_ch);

 FUNC_14(VAR_7->taskqueue, &VAR_7->rx_done_task);
 FUNC_14(VAR_7->taskqueue, &VAR_7->tx_done_task);
 FUNC_14(VAR_7->taskqueue, &VAR_7->periodic_task);


 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  FUNC_13(VAR_7, &VAR_7->tx_ring[VAR_9]);
 for (VAR_9 = 0; VAR_9 < VAR_7->rx_ring_count; VAR_9++)
  FUNC_12(VAR_7, &VAR_7->rx_ring[VAR_9]);

 FUNC_2(VAR_7);






 FUNC_9(VAR_8);
 FUNC_10(VAR_8);

 FUNC_15(VAR_7->taskqueue);

 FUNC_11(&VAR_7->lock);

 FUNC_3(VAR_6);
 FUNC_5(VAR_6, VAR_7->irq, VAR_7->irqh);
 FUNC_4(VAR_6, VAR_4, VAR_7->irq_rid, VAR_7->irq);
 FUNC_4(VAR_6, VAR_5, VAR_7->mem_rid, VAR_7->mem);

 return (0);
}
