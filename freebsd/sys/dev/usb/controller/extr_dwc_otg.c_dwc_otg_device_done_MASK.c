
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_error_t ;
struct TYPE_4__ {scalar_t__ usb_mode; } ;
struct usb_xfer {struct dwc_otg_td* td_transfer_cache; TYPE_2__ flags_int; int endpoint; TYPE_1__* xroot; } ;
struct dwc_otg_td {int dummy; } ;
struct dwc_otg_softc {int sc_bus; } ;
struct TYPE_3__ {int bus; } ;


 int FUNC_0 (int,char*,struct usb_xfer*,int ,int ) ;
 struct dwc_otg_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct dwc_otg_softc*,struct dwc_otg_td*) ;
 int FUNC_5 (struct usb_xfer*,int ) ;

__attribute__((used)) static void
FUNC_6(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 struct dwc_otg_softc *VAR_3 = FUNC_1(VAR_1->xroot->bus);

 FUNC_0(9, "xfer=%p, endpoint=%p, error=%d\n",
     VAR_1, VAR_1->endpoint, VAR_2);

 FUNC_2(&VAR_3->sc_bus);

 if (VAR_1->flags_int.usb_mode == VAR_0) {

 } else {
  struct dwc_otg_td *VAR_4;

  VAR_4 = VAR_1->td_transfer_cache;
   if (VAR_4 != ((void*)0))
   FUNC_4(VAR_3, VAR_4);
 }

 FUNC_5(VAR_1, VAR_2);

 FUNC_3(&VAR_3->sc_bus);
}
