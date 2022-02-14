
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {int error; } ;
struct uhub_softc {TYPE_1__* sc_udev; } ;
struct TYPE_2__ {int bus; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct usb_xfer*) ;
 int FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (struct usb_xfer*,int ,int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 struct uhub_softc* FUNC_7 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_8(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 struct uhub_softc *VAR_3 = FUNC_7(VAR_1);

 switch (FUNC_1(VAR_1)) {
 case 128:
  FUNC_0(2, "\n");






  FUNC_2(VAR_3->sc_udev->bus, 0);

 case 129:
  FUNC_5(VAR_1, 0, FUNC_4(VAR_1));
  FUNC_3(VAR_1);
  break;

 default:
  if (VAR_1->error != VAR_0) {





   FUNC_6(VAR_1);
   FUNC_5(VAR_1, 0, FUNC_4(VAR_1));
   FUNC_3(VAR_1);
  }
  break;
 }
}
