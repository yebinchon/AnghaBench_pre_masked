
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {struct run_softc* ic_softc; } ;
struct run_softc {int sc_detached; int sc_mtx; int ratectl_task; int cmdq_task; int ratectl_ch; struct ieee80211com sc_ic; int * sc_epq; int cmdq_key_set; int cmdq_run; int ratectl_run; int sc_xfer; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct run_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct run_softc*) ;
 struct run_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211com*,int *) ;
 int FUNC_4 (struct ieee80211com*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct run_softc*) ;
 int FUNC_7 (struct run_softc*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_4)
{
 struct run_softc *VAR_5 = FUNC_2(VAR_4);
 struct ieee80211com *VAR_6 = &VAR_5->sc_ic;
 int VAR_7;

 FUNC_0(VAR_5);
 VAR_5->sc_detached = 1;
 FUNC_1(VAR_5);


 FUNC_9(VAR_5->sc_xfer, VAR_2);

 FUNC_0(VAR_5);
 VAR_5->ratectl_run = VAR_3;
 VAR_5->cmdq_run = VAR_5->cmdq_key_set = VAR_0;


 for (VAR_7 = 0; VAR_7 != VAR_1; VAR_7++)
  FUNC_7(VAR_5, &VAR_5->sc_epq[VAR_7]);


 FUNC_6(VAR_5);
 FUNC_1(VAR_5);

 if (VAR_5->sc_ic.ic_softc == VAR_5) {

  FUNC_8(&VAR_5->ratectl_ch);
  FUNC_3(VAR_6, &VAR_5->cmdq_task);
  FUNC_3(VAR_6, &VAR_5->ratectl_task);
  FUNC_4(VAR_6);
 }

 FUNC_5(&VAR_5->sc_mtx);

 return (0);
}
