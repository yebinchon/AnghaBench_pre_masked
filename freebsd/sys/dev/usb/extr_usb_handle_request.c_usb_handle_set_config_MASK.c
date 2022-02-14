
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_xfer {TYPE_1__* xroot; } ;
struct usb_device {int dummy; } ;
struct TYPE_2__ {struct usb_device* udev; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct usb_xfer*) ;
 int FUNC_2 (struct usb_xfer*) ;
 scalar_t__ FUNC_3 (struct usb_device*,int ) ;
 scalar_t__ FUNC_4 (struct usb_device*) ;
 int FUNC_5 (struct usb_device*) ;
 scalar_t__ FUNC_6 (struct usb_device*,scalar_t__) ;

__attribute__((used)) static usb_error_t
FUNC_7(struct usb_xfer *VAR_4, uint8_t VAR_5)
{
 struct usb_device *VAR_6 = VAR_4->xroot->udev;
 usb_error_t VAR_7 = 0;
 uint8_t VAR_8;





 FUNC_2(VAR_4);


 VAR_8 = FUNC_4(VAR_6);

 if (VAR_5 == VAR_3) {
  VAR_5 = VAR_2;
 } else {




  VAR_5--;
 }

 if (FUNC_6(VAR_6, VAR_5)) {
  FUNC_0("set config %d failed\n", VAR_5);
  VAR_7 = VAR_0;
  goto done;
 }
 if (FUNC_3(VAR_6, VAR_1)) {
  FUNC_0("probe and attach failed\n");
  VAR_7 = VAR_0;
  goto done;
 }
done:
 if (VAR_8)
  FUNC_5(VAR_6);
 FUNC_1(VAR_4);
 return (VAR_7);
}
