
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


 int FUNC_0 (char*) ;
 int VAR_0 ;

 int FUNC_1 (struct usb_xfer*) ;
 int FUNC_2 (struct usb_xfer*,int ) ;

__attribute__((used)) static void
FUNC_3(struct usb_xfer *VAR_1)
{
 FUNC_0("\n");

 FUNC_2(VAR_1, VAR_0);

 if (VAR_1->flags_int.isochronous_xfr) {
  switch (VAR_1->xroot->udev->speed) {
  case 128:
   break;
  default:
   FUNC_1(VAR_1);
   break;
  }
 }
}
