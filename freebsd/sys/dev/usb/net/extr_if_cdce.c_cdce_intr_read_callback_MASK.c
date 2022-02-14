
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct TYPE_2__ {int ue_udev; } ;
struct cdce_softc {TYPE_1__ sc_ue; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_xfer*) ;
 int VAR_1 ;


 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_xfer*) ;
 int FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (struct usb_xfer*,int ,int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 struct cdce_softc* FUNC_7 (struct usb_xfer*) ;
 int FUNC_8 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_9(struct usb_xfer *VAR_2, usb_error_t VAR_3)
{
 struct cdce_softc *VAR_4 = FUNC_7(VAR_2);
 int VAR_5;

 FUNC_8(VAR_2, &VAR_5, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_2)) {
 case 128:

  FUNC_0("Received %d bytes\n", VAR_5);




 case 129:
tr_setup:
  FUNC_5(VAR_2, 0, FUNC_4(VAR_2));
  FUNC_3(VAR_2);
  break;

 default:
  if (VAR_3 != VAR_0) {

   if (FUNC_2(VAR_4->sc_ue.ue_udev) == VAR_1)
    FUNC_6(VAR_2);
   goto tr_setup;
  }
  break;
 }
}
