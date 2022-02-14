
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_xfer*) ;


 int FUNC_1 (struct usb_xfer*) ;
 int FUNC_2 (struct usb_xfer*) ;
 int FUNC_3 (struct usb_xfer*,int ,int ) ;
 int FUNC_4 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_5(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 switch (FUNC_0(VAR_1)) {
 case 128:
 case 129:
tr_setup:
  FUNC_3(VAR_1, 0, FUNC_2(VAR_1));
  FUNC_1(VAR_1);
  return;

 default:
  if (VAR_2 != VAR_0) {

   FUNC_4(VAR_1);
   goto tr_setup;
  }
  return;
 }
}
