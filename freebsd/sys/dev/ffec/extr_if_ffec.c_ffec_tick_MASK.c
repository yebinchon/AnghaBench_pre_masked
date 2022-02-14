
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; } ;
struct ffec_softc {scalar_t__ tx_watchdog_count; int link_is_up; int ffec_callout; int mii_softc; struct ifnet* ifp; } ;


 int FUNC_0 (struct ffec_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,void (*) (void*),struct ffec_softc*) ;
 int FUNC_2 (struct ffec_softc*) ;
 int FUNC_3 (struct ffec_softc*) ;
 int FUNC_4 (struct ffec_softc*) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void *VAR_2)
{
 struct ffec_softc *VAR_3;
 struct ifnet *VAR_4;
 int VAR_5;

 VAR_3 = VAR_2;

 FUNC_0(VAR_3);

 VAR_4 = VAR_3->ifp;

 if (!(VAR_4->if_drv_flags & VAR_0))
     return;






 if (VAR_3->tx_watchdog_count > 0) {
  if (--VAR_3->tx_watchdog_count == 0) {
   FUNC_3(VAR_3);
  }
 }


 FUNC_2(VAR_3);


 VAR_5 = VAR_3->link_is_up;
 FUNC_5(VAR_3->mii_softc);
 if (VAR_3->link_is_up && !VAR_5)
  FUNC_4(VAR_3);


 FUNC_1(&VAR_3->ffec_callout, VAR_1, FUNC_6, VAR_3);
}
