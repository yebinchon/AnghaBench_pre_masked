
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ isochronous_xfr; } ;
struct usb_xfer {TYPE_3__* xroot; TYPE_1__ flags_int; } ;
struct TYPE_6__ {TYPE_2__* udev; } ;
struct TYPE_5__ {int speed; } ;



 int FUNC_0 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_1(struct usb_xfer *VAR_0)
{
 if (VAR_0->flags_int.isochronous_xfr) {
  switch (VAR_0->xroot->udev->speed) {
  case 128:
   break;
  default:
   FUNC_0(VAR_0);
   break;
  }
 }
}
