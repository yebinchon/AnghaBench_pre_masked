
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; } ;
struct uhid_snes_softc {int sc_mutex; int sc_usb_device; int sc_iface_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,struct usb_device_request*,int *,int ,int *,int) ;

__attribute__((used)) static void
FUNC_4(struct uhid_snes_softc *VAR_2)
{
 struct usb_device_request VAR_3;
 int VAR_4;

 VAR_3.bRequest = VAR_0;
 FUNC_0(VAR_3.wValue, 0);
 FUNC_0(VAR_3.wIndex, VAR_2->sc_iface_num);
 FUNC_0(VAR_3.wLength, 0);

 FUNC_1(&VAR_2->sc_mutex);

 VAR_4 = FUNC_3(VAR_2->sc_usb_device, &VAR_2->sc_mutex,
     &VAR_3, ((void*)0), 0, ((void*)0), 2 * VAR_1);

 if (VAR_4) {
  FUNC_3(VAR_2->sc_usb_device, &VAR_2->sc_mutex,
      &VAR_3, ((void*)0), 0, ((void*)0), 2 * VAR_1);
 }

 FUNC_2(&VAR_2->sc_mutex);
}
