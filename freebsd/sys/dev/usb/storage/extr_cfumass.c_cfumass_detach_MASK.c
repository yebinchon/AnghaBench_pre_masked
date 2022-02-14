
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfumass_softc {int sc_ctl_initid; int sc_mtx; int sc_xfer; } ;
typedef int device_t ;


 int FUNC_0 (struct cfumass_softc*,char*) ;
 int FUNC_1 (struct cfumass_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct cfumass_softc*) ;
 int FUNC_3 (struct cfumass_softc*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct cfumass_softc*) ;
 int FUNC_5 (int *,int) ;
 struct cfumass_softc* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_3)
{
 struct cfumass_softc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_6(VAR_3);

 FUNC_0(VAR_4, "go");

 FUNC_1(VAR_4);
 FUNC_4(VAR_4);
 FUNC_2(VAR_4);
 FUNC_9(VAR_4->sc_xfer, VAR_0);

 if (VAR_4->sc_ctl_initid != -1) {
  VAR_5 = FUNC_5(&VAR_1, VAR_4->sc_ctl_initid);
  if (VAR_5 != 0) {
   FUNC_3(VAR_4, "ctl_remove_initiator() failed "
       "with error %d", VAR_5);
  }
  VAR_4->sc_ctl_initid = -1;
 }

 FUNC_7(&VAR_4->sc_mtx);
 FUNC_8(&VAR_2);

 return (0);
}
