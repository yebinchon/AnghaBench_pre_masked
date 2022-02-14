
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {TYPE_2__* xroot; } ;
struct TYPE_4__ {TYPE_1__* udev; } ;
struct TYPE_3__ {int ctrlreq_cv; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct usb_xfer*) ;

 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_xfer*) ;

void
FUNC_4(struct usb_xfer *VAR_0, usb_error_t VAR_1)
{
 ;

 FUNC_0("st=%u\n", FUNC_1(VAR_0));

 switch (FUNC_1(VAR_0)) {
 case 128:
  FUNC_3(VAR_0);
  break;
 default:
  FUNC_2(&VAR_0->xroot->udev->ctrlreq_cv);
  break;
 }
}
