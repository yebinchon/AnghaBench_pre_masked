
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int status_bus_reset; int status_suspend; int change_suspend; int change_connect; } ;
struct uss820dci_softc {scalar_t__ sc_xfer_complete; int sc_bus; TYPE_1__ sc_flags; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (struct uss820dci_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct uss820dci_softc*) ;
 int FUNC_7 (struct uss820dci_softc*) ;
 int FUNC_8 (struct uss820dci_softc*,int ,int,int ) ;
 int FUNC_9 (struct uss820dci_softc*,int) ;

void
FUNC_10(void *VAR_7)
{
 struct uss820dci_softc *VAR_8 = VAR_7;
 uint8_t VAR_9;
 uint8_t VAR_10;

 FUNC_1(&VAR_8->sc_bus);
 FUNC_2(&VAR_8->sc_bus);

 VAR_9 = FUNC_5(VAR_8, VAR_3);



 FUNC_8(VAR_8, VAR_3, ~VAR_0, 0);



 if (VAR_9 & VAR_0) {

  VAR_10 = 0;

  if (VAR_9 & VAR_4) {
   VAR_8->sc_flags.status_bus_reset = 1;
   VAR_8->sc_flags.status_suspend = 0;
   VAR_8->sc_flags.change_suspend = 0;
   VAR_8->sc_flags.change_connect = 1;


   FUNC_9(VAR_8, 1);

   VAR_10 = 1;
  }






  if (VAR_9 & VAR_5) {
   if (VAR_8->sc_flags.status_suspend) {
    VAR_8->sc_flags.status_suspend = 0;
    VAR_8->sc_flags.change_suspend = 1;

    FUNC_9(VAR_8, 1);
    VAR_10 = 1;
   }
  } else if (VAR_9 & VAR_6) {
   if (!VAR_8->sc_flags.status_suspend) {
    VAR_8->sc_flags.status_suspend = 1;
    VAR_8->sc_flags.change_suspend = 1;

    FUNC_9(VAR_8, 0);
    VAR_10 = 1;
   }
  }
  if (VAR_10) {

   FUNC_0("real bus interrupt 0x%02x\n", VAR_9);


   FUNC_7(VAR_8);
  }
 }

 FUNC_8(VAR_8, VAR_1, 0, 0);


 FUNC_8(VAR_8, VAR_2, 0, 0);

 if (VAR_8->sc_xfer_complete != 0) {
  VAR_8->sc_xfer_complete = 0;


  FUNC_6(VAR_8);
 }
 FUNC_3(&VAR_8->sc_bus);
 FUNC_4(&VAR_8->sc_bus);
}
