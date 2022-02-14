
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_softc {scalar_t__ fe_int_enable; scalar_t__ rt_chipid; scalar_t__ gdma1_base; int periodic_task; int taskqueue; int tx_done_task; int rx_done_task; int tx_watchdog_ch; int periodic_ch; scalar_t__ tx_timer; struct ifnet* ifp; } ;
struct ifnet {int if_drv_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct rt_softc*,int ,char*) ;
 int FUNC_1 (struct rt_softc*) ;
 int FUNC_2 (struct rt_softc*) ;
 int FUNC_3 (struct rt_softc*) ;
 int FUNC_4 (struct rt_softc*,scalar_t__,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(void *VAR_19)
{
 struct rt_softc *VAR_20;
 struct ifnet *VAR_21;

 VAR_20 = VAR_19;
 VAR_21 = VAR_20->ifp;

 FUNC_0(VAR_20, VAR_18, "stopping\n");

 FUNC_1(VAR_20);
 VAR_20->tx_timer = 0;
 VAR_21->if_drv_flags &= ~(VAR_13 | VAR_12);
 FUNC_5(&VAR_20->periodic_ch);
 FUNC_5(&VAR_20->tx_watchdog_ch);
 FUNC_3(VAR_20);
 FUNC_6(VAR_20->taskqueue);
 FUNC_2(VAR_20);


 FUNC_4(VAR_20, VAR_20->fe_int_enable, 0);

 if(VAR_20->rt_chipid != VAR_17 &&
    VAR_20->rt_chipid != VAR_15 &&
    VAR_20->rt_chipid != VAR_16) {

  FUNC_4(VAR_20, VAR_11 + VAR_0, VAR_14);
 }

 if (VAR_20->gdma1_base != 0)
  FUNC_4(VAR_20, VAR_20->gdma1_base + VAR_1,
  (
  VAR_4 |
  VAR_8 |
  VAR_9 |
  VAR_7 |
  VAR_3 << VAR_10 |
  VAR_3 << VAR_2 |
  VAR_3 << VAR_5 |
  VAR_3 << VAR_6
  ));
}
