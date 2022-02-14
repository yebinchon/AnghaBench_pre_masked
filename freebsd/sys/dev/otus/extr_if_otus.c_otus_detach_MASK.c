
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct otus_softc {int sc_mtx; int sc_udev; int sc_task; int tx_task; int calib_to; int scan_to; int sc_xfer; struct ieee80211com sc_ic; } ;
typedef int device_t ;


 int VAR_0 ;
 struct otus_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211com*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct otus_softc*) ;
 int FUNC_4 (struct otus_softc*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int VAR_1 ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_2)
{
 struct otus_softc *VAR_3 = FUNC_0(VAR_2);
 struct ieee80211com *VAR_4 = &VAR_3->sc_ic;

 FUNC_4(VAR_3);

 FUNC_9(VAR_3->sc_xfer, VAR_0);

 FUNC_6(VAR_1, &VAR_3->scan_to);
 FUNC_6(VAR_1, &VAR_3->calib_to);
 FUNC_5(VAR_1, &VAR_3->tx_task);

 FUNC_3(VAR_3);







 FUNC_1(VAR_4);
 FUNC_2(&VAR_3->sc_mtx);
 return 0;
}
