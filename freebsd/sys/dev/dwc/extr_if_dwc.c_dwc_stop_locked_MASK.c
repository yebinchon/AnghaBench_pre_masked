
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {int if_drv_flags; } ;
struct dwc_softc {int dwc_callout; scalar_t__ stats_harvest_count; scalar_t__ tx_watchdog_count; struct ifnet* ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dwc_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct dwc_softc*,int ) ;
 int FUNC_2 (struct dwc_softc*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct dwc_softc *VAR_9)
{
 struct ifnet *VAR_10;
 uint32_t VAR_11;

 FUNC_0(VAR_9);

 VAR_10 = VAR_9->ifp;
 VAR_10->if_drv_flags &= ~(VAR_3 | VAR_2);
 VAR_9->tx_watchdog_count = 0;
 VAR_9->stats_harvest_count = 0;

 FUNC_3(&VAR_9->dwc_callout);


 VAR_11 = FUNC_1(VAR_9, VAR_8);
 VAR_11 &= ~(VAR_7);
 FUNC_2(VAR_9, VAR_8, VAR_11);


 VAR_11 = FUNC_1(VAR_9, VAR_8);
 VAR_11 |= (VAR_5);
 FUNC_2(VAR_9, VAR_8, VAR_11);


 VAR_11 = FUNC_1(VAR_9, VAR_4);
 VAR_11 &= ~(VAR_1 | VAR_0);
 FUNC_2(VAR_9, VAR_4, VAR_11);


 VAR_11 = FUNC_1(VAR_9, VAR_8);
 VAR_11 &= ~(VAR_6);
 FUNC_2(VAR_9, VAR_8, VAR_11);
}
