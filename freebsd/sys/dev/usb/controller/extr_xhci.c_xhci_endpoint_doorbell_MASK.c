
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct xhci_softc {int dummy; } ;
struct TYPE_8__ {scalar_t__ control_xfr; } ;
struct usb_xfer {int endpointno; int stream_id; TYPE_3__* xroot; TYPE_4__ flags_int; } ;
struct TYPE_7__ {TYPE_2__* udev; int bus; } ;
struct TYPE_5__ {scalar_t__ self_suspended; } ;
struct TYPE_6__ {int controller_slot_id; TYPE_1__ flags; } ;


 int VAR_0 ;
 struct xhci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct xhci_softc*,int ,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct usb_xfer *VAR_2)
{
 struct xhci_softc *VAR_3 = FUNC_0(VAR_2->xroot->bus);
 uint8_t VAR_4;
 uint8_t VAR_5;

 VAR_4 = VAR_2->endpointno;
 if (VAR_2->flags_int.control_xfr)
  VAR_4 |= VAR_0;

 VAR_4 = FUNC_3(VAR_4);
 VAR_5 = VAR_2->xroot->udev->controller_slot_id;

 if (VAR_2->xroot->udev->flags.self_suspended == 0) {
  FUNC_4(VAR_3, VAR_1, FUNC_2(VAR_5),
      VAR_4 | FUNC_1(VAR_2->stream_id));
 }
}
