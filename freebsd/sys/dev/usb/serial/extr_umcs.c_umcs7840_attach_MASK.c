
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_config {int callback; scalar_t__ endpoint; } ;
struct TYPE_4__ {int idProduct; } ;
struct usb_attach_arg {int device; TYPE_1__ info; } ;
struct umcs7840_softc {int sc_numports; int sc_super_ucom; int sc_mtx; TYPE_3__* sc_ucom; TYPE_2__* sc_ports; int sc_intr_xfer; int sc_udev; int sc_dev; } ;
typedef int device_t ;
struct TYPE_6__ {int sc_portno; } ;
struct TYPE_5__ {int * sc_xfer; } ;


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
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 struct usb_attach_arg* FUNC_0 (int ) ;
 struct umcs7840_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_3__*,int,struct umcs7840_softc*,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 struct usb_config* VAR_16 ;
 int VAR_17 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct umcs7840_softc*,int ,int*) ;
 struct usb_config* VAR_18 ;
 int ** VAR_19 ;
 int FUNC_12 (int ,int*,int *,struct usb_config*,int,struct umcs7840_softc*,int *) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_20)
{
 struct usb_config VAR_21[VAR_15];
 struct usb_attach_arg *VAR_22 = FUNC_0(VAR_20);
 struct umcs7840_softc *VAR_23 = FUNC_1(VAR_20);

 uint8_t VAR_24 = VAR_11;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 uint8_t VAR_28;

 for (VAR_27 = 0; VAR_27 < VAR_15; ++VAR_27)
  VAR_21[VAR_27] = VAR_16[VAR_27];

 FUNC_3(VAR_20);
 FUNC_4(&VAR_23->sc_mtx, "umcs7840", ((void*)0), VAR_12);
 FUNC_8(&VAR_23->sc_super_ucom);

 VAR_23->sc_dev = VAR_20;
 VAR_23->sc_udev = VAR_22->device;
 FUNC_11(VAR_23, VAR_9, &VAR_28);
 if (VAR_28 & VAR_1) {
  VAR_23->sc_numports = 4;

  VAR_23->sc_ucom[0].sc_portno = 0;
  VAR_23->sc_ucom[1].sc_portno = 1;
  VAR_23->sc_ucom[2].sc_portno = 2;
  VAR_23->sc_ucom[3].sc_portno = 3;
 } else {
  VAR_23->sc_numports = 2;

  VAR_23->sc_ucom[0].sc_portno = 0;
  VAR_23->sc_ucom[1].sc_portno = 2;
 }
 FUNC_2(VAR_20, "Chip mcs%04x, found %d active ports\n", VAR_22->info.idProduct, VAR_23->sc_numports);
 if (!FUNC_11(VAR_23, VAR_10, &VAR_28)) {
  FUNC_2(VAR_20, "On-die confguration: RST: active %s, HRD: %s, PLL: %s, POR: %s, Ports: %s, EEPROM write %s, IrDA is %savailable\n",
      (VAR_28 & VAR_6) ? "low" : "high",
      (VAR_28 & VAR_8) ? "yes" : "no",
      (VAR_28 & VAR_4) ? "bypassed" : "avail",
      (VAR_28 & VAR_5) ? "bypassed" : "avail",
      (VAR_28 & VAR_7) ? "2" : "4",
      (VAR_28 & VAR_2) ? "enabled" : "disabled",
      (VAR_28 & VAR_3) ? "" : "not ");
 }

 for (VAR_26 = 0; VAR_26 < VAR_23->sc_numports; ++VAR_26) {
  for (VAR_27 = 0; VAR_27 < VAR_15; ++VAR_27) {

   VAR_21[VAR_27].endpoint = VAR_16[VAR_27].endpoint + 2 * VAR_23->sc_ucom[VAR_26].sc_portno;
   VAR_21[VAR_27].callback = VAR_19[VAR_26][VAR_27];
  }
  VAR_25 = FUNC_12(VAR_22->device,
      &VAR_24, VAR_23->sc_ports[VAR_23->sc_ucom[VAR_26].sc_portno].sc_xfer, VAR_21,
      VAR_15, VAR_23, &VAR_23->sc_mtx);
  if (VAR_25) {
   FUNC_2(VAR_20, "allocating USB transfers failed for subunit %d of %d\n",
       VAR_26 + 1, VAR_23->sc_numports);
   goto detach;
  }
 }
 VAR_25 = FUNC_12(VAR_22->device,
     &VAR_24, &VAR_23->sc_intr_xfer, VAR_18,
     1, VAR_23, &VAR_23->sc_mtx);
 if (VAR_25) {
  FUNC_2(VAR_20, "allocating USB transfers failed for interrupt\n");
  goto detach;
 }

 FUNC_5(&VAR_23->sc_mtx);
 for (VAR_26 = 0; VAR_26 < VAR_23->sc_numports; ++VAR_26) {
  FUNC_13(VAR_23->sc_ports[VAR_23->sc_ucom[VAR_26].sc_portno].sc_xfer[VAR_13]);
  FUNC_13(VAR_23->sc_ports[VAR_23->sc_ucom[VAR_26].sc_portno].sc_xfer[VAR_14]);
 }
 FUNC_6(&VAR_23->sc_mtx);

 VAR_25 = FUNC_7(&VAR_23->sc_super_ucom, VAR_23->sc_ucom, VAR_23->sc_numports, VAR_23,
     &VAR_17, &VAR_23->sc_mtx);
 if (VAR_25)
  goto detach;

 FUNC_9(&VAR_23->sc_super_ucom, VAR_20);

 return (0);

detach:
 FUNC_10(VAR_20);
 return (VAR_0);
}
