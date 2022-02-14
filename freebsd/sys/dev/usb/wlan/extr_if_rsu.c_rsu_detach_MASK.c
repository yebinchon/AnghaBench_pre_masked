
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct rsu_softc {int sc_mtx; int tx_task; int del_key_task; int calib_task; int sc_xfer; struct ieee80211com sc_ic; } ;
typedef int device_t ;


 int FUNC_0 (struct rsu_softc*) ;
 int FUNC_1 (struct rsu_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct rsu_softc*) ;
 struct rsu_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211com*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rsu_softc*) ;
 int FUNC_7 (struct rsu_softc*) ;
 int FUNC_8 (struct rsu_softc*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int *) ;
 int VAR_1 ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_2)
{
 struct rsu_softc *VAR_3 = FUNC_3(VAR_2);
 struct ieee80211com *VAR_4 = &VAR_3->sc_ic;

 FUNC_8(VAR_3);

 FUNC_11(VAR_3->sc_xfer, VAR_0);






 FUNC_1(VAR_3);
 FUNC_7(VAR_3);
 FUNC_6(VAR_3);
 FUNC_2(VAR_3);


 FUNC_4(VAR_4);

 FUNC_10(VAR_1, &VAR_3->calib_task);
 FUNC_9(VAR_1, &VAR_3->del_key_task);
 FUNC_9(VAR_1, &VAR_3->tx_task);

 FUNC_0(VAR_3);
 FUNC_5(&VAR_3->sc_mtx);

 return (0);
}
