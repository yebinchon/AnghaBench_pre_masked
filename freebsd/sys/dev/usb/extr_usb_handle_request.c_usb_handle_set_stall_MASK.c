
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_xfer {TYPE_1__* xroot; } ;
struct usb_device {int dummy; } ;
struct TYPE_2__ {struct usb_device* udev; } ;


 int FUNC_0 (struct usb_xfer*) ;
 int FUNC_1 (struct usb_xfer*) ;
 int FUNC_2 (struct usb_device*,int ) ;
 int FUNC_3 (struct usb_device*,int ,int ) ;

__attribute__((used)) static usb_error_t
FUNC_4(struct usb_xfer *VAR_0, uint8_t VAR_1, uint8_t VAR_2)
{
 struct usb_device *VAR_3 = VAR_0->xroot->udev;
 usb_error_t VAR_4;

 FUNC_1(VAR_0);
 VAR_4 = FUNC_3(VAR_3,
     FUNC_2(VAR_3, VAR_1), VAR_2);
 FUNC_0(VAR_0);
 return (VAR_4);
}
