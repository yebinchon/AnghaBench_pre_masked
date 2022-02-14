
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_softc {scalar_t__ tx_timer; int tx_watchdog_ch; int tx_watchdog_timeouts; int dev; struct ifnet* ifp; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,void (*) (void*),struct rt_softc*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct ifnet*,int ,int) ;
 int FUNC_3 (struct rt_softc*) ;
 int FUNC_4 (struct rt_softc*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2)
{
 struct rt_softc *VAR_3;
 struct ifnet *VAR_4;

 VAR_3 = VAR_2;
 VAR_4 = VAR_3->ifp;

 if (VAR_3->tx_timer == 0)
  return;

 if (--VAR_3->tx_timer == 0) {
  FUNC_1(VAR_3->dev, "Tx watchdog timeout: resetting\n");







  FUNC_2(VAR_4, VAR_0, 1);
  VAR_3->tx_watchdog_timeouts++;
 }
 FUNC_0(&VAR_3->tx_watchdog_ch, VAR_1, FUNC_5, VAR_3);
}
