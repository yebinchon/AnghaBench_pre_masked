
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; scalar_t__* wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct ufoma_softc {scalar_t__ sc_currentmode; int sc_acm_cap; int sc_ucom; int sc_udev; scalar_t__ sc_ctrl_iface_no; scalar_t__ sc_nobulk; } ;
struct ucom_softc {struct ufoma_softc* sc_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,int *,struct usb_device_request*,int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_6, uint8_t VAR_7)
{
 struct ufoma_softc *VAR_8 = VAR_6->sc_parent;
 struct usb_device_request VAR_9;
 uint16_t VAR_10;

 if (VAR_8->sc_nobulk ||
     (VAR_8->sc_currentmode == VAR_3)) {
  return;
 }
 if (!(VAR_8->sc_acm_cap & VAR_4)) {
  return;
 }
 VAR_10 = VAR_7 ? VAR_1 : VAR_0;

 VAR_9.bmRequestType = VAR_5;
 VAR_9.bRequest = VAR_2;
 FUNC_0(VAR_9.wValue, VAR_10);
 VAR_9.wIndex[0] = VAR_8->sc_ctrl_iface_no;
 VAR_9.wIndex[1] = 0;
 FUNC_0(VAR_9.wLength, 0);

 FUNC_1(VAR_8->sc_udev, &VAR_8->sc_ucom,
     &VAR_9, ((void*)0), 0, 1000);
}
