
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct usb_endpoint {TYPE_2__* edesc; } ;
struct TYPE_3__ {scalar_t__ usb_mode; } ;
struct usb_device {int bus; TYPE_1__ flags; } ;
struct dwc_otg_softc {int* sc_in_ctl; int* sc_out_ctl; unsigned int sc_active_rx_ep; scalar_t__ sc_last_rx_status; int sc_bus; } ;
struct TYPE_4__ {int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,int) ;
 struct dwc_otg_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct dwc_otg_softc*,int,int) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (struct dwc_otg_softc*) ;
 int FUNC_10 (struct dwc_otg_softc*) ;
 int FUNC_11 (struct dwc_otg_softc*) ;

__attribute__((used)) static void
FUNC_12(struct usb_device *VAR_6,
    struct usb_endpoint *VAR_7, uint8_t *VAR_8)
{
 struct dwc_otg_softc *VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;
 uint8_t VAR_12;

 FUNC_6(VAR_6->bus, VAR_2);


 if (VAR_6->flags.usb_mode != VAR_5) {

  return;
 }

 VAR_9 = FUNC_3(VAR_6->bus);

 FUNC_7(&VAR_9->sc_bus);


 VAR_12 = VAR_7->edesc->bEndpointAddress;

 FUNC_2(5, "endpoint=0x%x\n", VAR_12);

 if (VAR_12 & VAR_4) {
  VAR_11 = FUNC_0(VAR_12 & VAR_3);
  VAR_10 = VAR_9->sc_in_ctl[VAR_12 & VAR_3];
 } else {
  VAR_11 = FUNC_1(VAR_12 & VAR_3);
  VAR_10 = VAR_9->sc_out_ctl[VAR_12 & VAR_3];
 }


 FUNC_4(VAR_9, VAR_11, VAR_10 | VAR_0);
 FUNC_4(VAR_9, VAR_11, VAR_10 | VAR_1);


 if (!(VAR_12 & VAR_4)) {

  VAR_9->sc_active_rx_ep &= ~(1U << (VAR_12 & VAR_3));

  if (VAR_9->sc_last_rx_status != 0 &&
      (VAR_12 & VAR_3) == FUNC_5(
      VAR_9->sc_last_rx_status)) {

   FUNC_9(VAR_9);

   FUNC_11(VAR_9);
   FUNC_10(VAR_9);
  }
 }
 FUNC_8(&VAR_9->sc_bus);
}
