
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct usb_hub {scalar_t__ nports; scalar_t__ ports; int * tt_msg; } ;
struct usb_device {int dummy; } ;
struct usb_bus {int dummy; } ;
struct uhub_softc {int sc_mtx; TYPE_1__* sc_udev; int sc_xfer; } ;
typedef int device_t ;
struct TYPE_2__ {struct usb_hub* hub; struct usb_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_bus*) ;
 int FUNC_1 (struct usb_bus*) ;
 int FUNC_2 (struct usb_bus*) ;
 struct uhub_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct usb_hub*,int ) ;
 int FUNC_5 (int *) ;
 struct usb_device* FUNC_6 (struct usb_bus*,scalar_t__) ;
 int FUNC_7 (struct usb_device*,int ) ;
 int FUNC_8 (int ,int *,int *) ;
 int FUNC_9 (int ,int ) ;

int
FUNC_10(device_t VAR_2)
{
 struct uhub_softc *VAR_3 = FUNC_3(VAR_2);
 struct usb_hub *VAR_4 = VAR_3->sc_udev->hub;
 struct usb_bus *VAR_5 = VAR_3->sc_udev->bus;
 struct usb_device *VAR_6;
 uint8_t VAR_7;

 if (VAR_4 == ((void*)0))
  return (0);


 FUNC_9(VAR_3->sc_xfer, VAR_1);


 for (VAR_7 = 0; VAR_7 != VAR_4->nports; VAR_7++) {

  VAR_6 = FUNC_6(VAR_5, VAR_4->ports + VAR_7);

  if (VAR_6 == ((void*)0)) {
   continue;
  }




  FUNC_7(VAR_6, 0);
 }
 FUNC_4(VAR_4, VAR_0);

 VAR_3->sc_udev->hub = ((void*)0);

 FUNC_5(&VAR_3->sc_mtx);

 return (0);
}
