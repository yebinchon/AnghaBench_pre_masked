
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_error_t ;
struct uss820dci_softc {int sc_bus; } ;
struct TYPE_3__ {scalar_t__ usb_mode; } ;
struct usb_xfer {TYPE_1__ flags_int; int endpoint; TYPE_2__* xroot; } ;
struct TYPE_4__ {int bus; } ;


 int FUNC_0 (int,char*,struct usb_xfer*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 struct uss820dci_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct usb_xfer*,int ) ;
 int FUNC_6 (struct usb_xfer*,int ) ;

__attribute__((used)) static void
FUNC_7(struct usb_xfer *VAR_2, usb_error_t VAR_3)
{
 struct uss820dci_softc *VAR_4 = FUNC_4(VAR_2->xroot->bus);

 FUNC_1(VAR_2->xroot->bus, VAR_0);

 FUNC_0(2, "xfer=%p, endpoint=%p, error=%d\n",
     VAR_2, VAR_2->endpoint, VAR_3);

 FUNC_2(&VAR_4->sc_bus);

 if (VAR_2->flags_int.usb_mode == VAR_1) {
  FUNC_6(VAR_2, 0);
 }

 FUNC_5(VAR_2, VAR_3);

 FUNC_3(&VAR_4->sc_bus);
}
