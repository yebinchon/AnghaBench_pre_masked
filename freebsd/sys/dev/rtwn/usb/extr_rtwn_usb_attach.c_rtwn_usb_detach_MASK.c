
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int sc_mtx; } ;
struct rtwn_usb_softc {int uc_xfer; struct rtwn_softc uc_sc; } ;
typedef int device_t ;


 int VAR_0 ;
 struct rtwn_usb_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtwn_softc*) ;
 int FUNC_3 (struct rtwn_softc*) ;
 int FUNC_4 (struct rtwn_softc*) ;
 int FUNC_5 (struct rtwn_softc*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 struct rtwn_usb_softc *VAR_2 = FUNC_0(VAR_1);
 struct rtwn_softc *VAR_3 = &VAR_2->uc_sc;


 FUNC_2(VAR_3);


 FUNC_5(VAR_3);
 FUNC_4(VAR_3);


 FUNC_6(VAR_2->uc_xfer, VAR_0);

 FUNC_3(VAR_3);
 FUNC_1(&VAR_3->sc_mtx);

 return (0);
}
