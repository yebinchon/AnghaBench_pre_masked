
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_request {int bmRequestType; int wLength; int wIndex; int wValue; int bRequest; } ;
struct ulpt_softc {int sc_mtx; int sc_udev; int sc_iface_no; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *,struct usb_device_request*,int *,int ,int *,int) ;

__attribute__((used)) static void
FUNC_5(struct ulpt_softc *VAR_4)
{
 struct usb_device_request VAR_5;

 FUNC_0(2, "\n");

 VAR_5.bRequest = VAR_0;
 FUNC_1(VAR_5.wValue, 0);
 FUNC_1(VAR_5.wIndex, VAR_4->sc_iface_no);
 FUNC_1(VAR_5.wLength, 0);
 FUNC_2(&VAR_4->sc_mtx);
 VAR_5.bmRequestType = VAR_3;
 if (FUNC_4(VAR_4->sc_udev, &VAR_4->sc_mtx,
     &VAR_5, ((void*)0), 0, ((void*)0), 2 * VAR_1)) {
  VAR_5.bmRequestType = VAR_2;
  if (FUNC_4(VAR_4->sc_udev, &VAR_4->sc_mtx,
      &VAR_5, ((void*)0), 0, ((void*)0), 2 * VAR_1)) {

  }
 }
 FUNC_3(&VAR_4->sc_mtx);
}
