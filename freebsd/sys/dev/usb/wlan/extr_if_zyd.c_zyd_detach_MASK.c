
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {struct zyd_softc* ic_softc; } ;
struct zyd_softc {int sc_mtx; int * sc_xfer; int tx_free; int tx_q; int sc_flags; struct ieee80211com sc_ic; } ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct zyd_softc*) ;
 unsigned int VAR_1 ;
 int FUNC_2 (struct zyd_softc*) ;
 struct zyd_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211com*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned int) ;
 int FUNC_8 (struct zyd_softc*) ;
 int FUNC_9 (struct zyd_softc*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_2)
{
 struct zyd_softc *VAR_3 = FUNC_3(VAR_2);
 struct ieee80211com *VAR_4 = &VAR_3->sc_ic;
 unsigned int VAR_5;





 FUNC_1(VAR_3);
 VAR_3->sc_flags |= VAR_0;
 FUNC_8(VAR_3);
 FUNC_0(&VAR_3->tx_q);
 FUNC_0(&VAR_3->tx_free);
 FUNC_2(VAR_3);


 for (VAR_5 = 0; VAR_5 != VAR_1; VAR_5++)
  FUNC_6(VAR_3->sc_xfer[VAR_5]);


 FUNC_1(VAR_3);
 FUNC_9(VAR_3);
 FUNC_2(VAR_3);


 FUNC_7(VAR_3->sc_xfer, VAR_1);

 if (VAR_4->ic_softc == VAR_3)
  FUNC_4(VAR_4);
 FUNC_5(&VAR_3->sc_mtx);

 return (0);
}
