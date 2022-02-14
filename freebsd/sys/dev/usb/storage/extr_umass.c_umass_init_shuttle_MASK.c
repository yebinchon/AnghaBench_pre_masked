
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_device_request {int bRequest; int wLength; scalar_t__* wIndex; int wValue; int bmRequestType; } ;
struct umass_softc {int sc_udev; scalar_t__ sc_iface_no; } ;
typedef int status ;


 int FUNC_0 (struct umass_softc*,int ,char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,struct usb_device_request*,int **) ;

__attribute__((used)) static void
FUNC_3(struct umass_softc *VAR_2)
{
 struct usb_device_request VAR_3;
 uint8_t VAR_4[2] = {0, 0};





 VAR_3.bmRequestType = VAR_1;
 VAR_3.bRequest = 1;
 FUNC_1(VAR_3.wValue, 0);
 VAR_3.wIndex[0] = VAR_2->sc_iface_no;
 VAR_3.wIndex[1] = 0;
 FUNC_1(VAR_3.wLength, sizeof(VAR_4));
 FUNC_2(VAR_2->sc_udev, ((void*)0), &VAR_3, &VAR_4);

 FUNC_0(VAR_2, VAR_0, "Shuttle init returned 0x%02x%02x\n",
     VAR_4[0], VAR_4[1]);
}
