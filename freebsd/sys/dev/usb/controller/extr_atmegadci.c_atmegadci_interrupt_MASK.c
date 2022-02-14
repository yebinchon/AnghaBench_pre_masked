
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int status_bus_reset; int status_suspend; int change_suspend; int change_connect; } ;
struct atmegadci_softc {int sc_bus; TYPE_1__ sc_flags; } ;


 int FUNC_0 (struct atmegadci_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct atmegadci_softc*,int ,int) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct atmegadci_softc*) ;
 int FUNC_6 (struct atmegadci_softc*) ;
 int FUNC_7 (struct atmegadci_softc*,int) ;

void
FUNC_8(struct atmegadci_softc *VAR_13)
{
 uint8_t VAR_14;

 FUNC_3(&VAR_13->sc_bus);


 VAR_14 = FUNC_0(VAR_13, VAR_1);


 FUNC_1(VAR_13, VAR_1, (~VAR_14) & 0x7D);

 FUNC_2(14, "UDINT=0x%02x\n", VAR_14);


 if (VAR_14 & VAR_3) {

  FUNC_2(5, "end of reset\n");


  VAR_13->sc_flags.status_bus_reset = 1;
  VAR_13->sc_flags.status_suspend = 0;
  VAR_13->sc_flags.change_suspend = 0;
  VAR_13->sc_flags.change_connect = 1;


  FUNC_1(VAR_13, VAR_0,
      VAR_4 |
      VAR_2);


  FUNC_6(VAR_13);
 }





 if (VAR_14 & VAR_7) {

  FUNC_2(5, "resume interrupt\n");

  if (VAR_13->sc_flags.status_suspend) {

   VAR_13->sc_flags.status_suspend = 0;
   VAR_13->sc_flags.change_suspend = 1;


   FUNC_1(VAR_13, VAR_0,
       VAR_4 |
       VAR_2);


   FUNC_6(VAR_13);
  }
 } else if (VAR_14 & VAR_5) {

  FUNC_2(5, "suspend interrupt\n");

  if (!VAR_13->sc_flags.status_suspend) {

   VAR_13->sc_flags.status_suspend = 1;
   VAR_13->sc_flags.change_suspend = 1;


   FUNC_1(VAR_13, VAR_0,
       VAR_6 |
       VAR_2);


   FUNC_6(VAR_13);
  }
 }

 VAR_14 = FUNC_0(VAR_13, VAR_9);


 FUNC_1(VAR_13, VAR_9, (~VAR_14) & 0x03);

 if (VAR_14 & VAR_10) {
  uint8_t VAR_15;

  FUNC_2(5, "USBINT=0x%02x\n", VAR_14);

  VAR_15 = FUNC_0(VAR_13, VAR_11);
  FUNC_7(VAR_13, VAR_15 & VAR_12);
 }

 VAR_14 = FUNC_0(VAR_13, VAR_8);

 if (VAR_14) {

  FUNC_2(5, "real endpoint interrupt UEINT=0x%02x\n", VAR_14);

  FUNC_5(VAR_13);
 }
 FUNC_4(&VAR_13->sc_bus);
}
