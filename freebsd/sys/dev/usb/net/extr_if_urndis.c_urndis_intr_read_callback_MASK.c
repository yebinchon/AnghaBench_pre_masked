
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (struct usb_xfer*) ;
 int FUNC_3 (struct usb_xfer*) ;
 int FUNC_4 (struct usb_xfer*,int ,int ) ;
 int FUNC_5 (struct usb_xfer*) ;
 int FUNC_6 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_7(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 int VAR_3;

 FUNC_6(VAR_1, &VAR_3, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_1)) {
 case 128:

  FUNC_0("Received %d bytes\n", VAR_3);




 case 129:
tr_setup:
  FUNC_4(VAR_1, 0, FUNC_3(VAR_1));
  FUNC_2(VAR_1);
  break;

 default:
  if (VAR_2 != VAR_0) {

   FUNC_5(VAR_1);
   goto tr_setup;
  }
  break;
 }
}
