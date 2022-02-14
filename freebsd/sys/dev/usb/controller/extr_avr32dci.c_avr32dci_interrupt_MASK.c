
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int status_bus_reset; int status_suspend; int change_suspend; int change_connect; } ;
struct avr32dci_softc {int sc_bus; TYPE_1__ sc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct avr32dci_softc*,int ) ;
 int FUNC_2 (struct avr32dci_softc*,int ,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct avr32dci_softc*) ;
 int FUNC_7 (struct avr32dci_softc*,int,int) ;
 int FUNC_8 (struct avr32dci_softc*) ;

void
FUNC_9(struct avr32dci_softc *VAR_5)
{
 uint32_t VAR_6;

 FUNC_4(&VAR_5->sc_bus);


 VAR_6 = FUNC_1(VAR_5, VAR_1);


 FUNC_2(VAR_5, VAR_0, VAR_6);

 FUNC_3(14, "INTSTA=0x%08x\n", VAR_6);


 if (VAR_6 & VAR_3) {

  FUNC_3(5, "end of reset\n");


  VAR_5->sc_flags.status_bus_reset = 1;
  VAR_5->sc_flags.status_suspend = 0;
  VAR_5->sc_flags.change_suspend = 0;
  VAR_5->sc_flags.change_connect = 1;


  FUNC_7(VAR_5, VAR_2 |
      VAR_3, VAR_4);


  FUNC_8(VAR_5);
 }





 if (VAR_6 & VAR_4) {

  FUNC_3(5, "resume interrupt\n");

  if (VAR_5->sc_flags.status_suspend) {

   VAR_5->sc_flags.status_suspend = 0;
   VAR_5->sc_flags.change_suspend = 1;


   FUNC_7(VAR_5, VAR_2 |
       VAR_3, VAR_4);


   FUNC_8(VAR_5);
  }
 } else if (VAR_6 & VAR_2) {

  FUNC_3(5, "suspend interrupt\n");

  if (!VAR_5->sc_flags.status_suspend) {

   VAR_5->sc_flags.status_suspend = 1;
   VAR_5->sc_flags.change_suspend = 1;


   FUNC_7(VAR_5, VAR_4 |
       VAR_3, VAR_2);


   FUNC_8(VAR_5);
  }
 }

 if (VAR_6 & -FUNC_0(0)) {

  FUNC_3(5, "real endpoint interrupt\n");

  FUNC_6(VAR_5);
 }
 FUNC_5(&VAR_5->sc_bus);
}
