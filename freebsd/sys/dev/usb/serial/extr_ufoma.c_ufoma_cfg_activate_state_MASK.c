
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct ufoma_softc {int sc_mtx; int sc_cv; int sc_ucom; int sc_udev; int sc_ctrl_iface_no; } ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,struct usb_device_request*,int *,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct ufoma_softc *VAR_4, uint16_t VAR_5)
{
 struct usb_device_request VAR_6;
 int32_t VAR_7;

 VAR_6.bmRequestType = VAR_2;
 VAR_6.bRequest = VAR_1;
 FUNC_1(VAR_6.wValue, VAR_5);
 FUNC_1(VAR_6.wIndex, VAR_4->sc_ctrl_iface_no);
 FUNC_1(VAR_6.wLength, 0);

 FUNC_3(VAR_4->sc_udev, &VAR_4->sc_ucom,
     &VAR_6, ((void*)0), 0, 1000);

 VAR_7 = FUNC_2(&VAR_4->sc_cv, &VAR_4->sc_mtx,
     (VAR_0 * VAR_3));
 if (VAR_7) {
  FUNC_0("No response\n");
 }
}
