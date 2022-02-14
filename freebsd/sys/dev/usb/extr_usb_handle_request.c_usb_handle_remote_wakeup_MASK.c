
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_xfer {TYPE_1__* xroot; } ;
struct TYPE_4__ {int remote_wakeup; } ;
struct usb_device {struct usb_bus* bus; TYPE_2__ flags; } ;
struct usb_bus {int dummy; } ;
struct TYPE_3__ {struct usb_device* udev; } ;


 int FUNC_0 (struct usb_bus*) ;
 int FUNC_1 (struct usb_bus*) ;
 int FUNC_2 (struct usb_bus*) ;

__attribute__((used)) static usb_error_t
FUNC_3(struct usb_xfer *VAR_0, uint8_t VAR_1)
{
 struct usb_device *VAR_2;
 struct usb_bus *VAR_3;

 VAR_2 = VAR_0->xroot->udev;
 VAR_3 = VAR_2->bus;

 FUNC_0(VAR_3);

 if (VAR_1) {
  VAR_2->flags.remote_wakeup = 1;
 } else {
  VAR_2->flags.remote_wakeup = 0;
 }

 FUNC_1(VAR_3);





 return (0);
}
