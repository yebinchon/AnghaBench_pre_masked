
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_xfer {scalar_t__ timeout; TYPE_1__* xroot; struct dwc_otg_td* td_transfer_cache; } ;
struct dwc_otg_td {scalar_t__ ep_type; int hcchar; } ;
struct TYPE_5__ {scalar_t__ status_device_mode; } ;
struct dwc_otg_softc {int sc_bus; TYPE_2__ sc_flags; } ;
struct TYPE_6__ {int intr_q; } ;
struct TYPE_4__ {TYPE_3__* bus; } ;


 int FUNC_0 (int,char*) ;
 struct dwc_otg_softc* FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dwc_otg_softc*) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (struct dwc_otg_softc*,struct usb_xfer*) ;
 int FUNC_6 (struct dwc_otg_softc*,struct usb_xfer*) ;
 int FUNC_7 (int *,struct usb_xfer*) ;
 int FUNC_8 (struct usb_xfer*,int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_9(struct usb_xfer *VAR_3)
{
 struct dwc_otg_softc *VAR_4 = FUNC_1(VAR_3->xroot->bus);

 FUNC_0(9, "\n");






 FUNC_2(&VAR_4->sc_bus);

 if (VAR_4->sc_flags.status_device_mode != 0) {
  FUNC_6(VAR_4, VAR_3);
  if (FUNC_5(VAR_4, VAR_3))
   goto done;
 } else {
  struct dwc_otg_td *VAR_5 = VAR_3->td_transfer_cache;
  if (VAR_5->ep_type == VAR_1 &&
      (VAR_5->hcchar & VAR_0) == 0) {





   FUNC_6(VAR_4, VAR_3);
   if (FUNC_5(VAR_4, VAR_3))
    goto done;
  }
 }


 FUNC_7(&VAR_3->xroot->bus->intr_q, VAR_3);


 if (VAR_3->timeout != 0) {
  FUNC_8(VAR_3,
      &VAR_2, VAR_3->timeout);
 }

 if (VAR_4->sc_flags.status_device_mode != 0)
  goto done;


 FUNC_4(VAR_4);
done:
 FUNC_3(&VAR_4->sc_bus);
}
