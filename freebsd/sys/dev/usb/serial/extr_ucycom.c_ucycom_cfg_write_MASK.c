
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef void* uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; scalar_t__* wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct ucycom_softc {int sc_flen; int* sc_temp_cfg; int sc_ucom; int sc_udev; scalar_t__ sc_iface_no; int sc_fid; void* sc_cfg; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int *,struct usb_device_request*,int*,int ,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct ucycom_softc *VAR_3, uint32_t VAR_4, uint8_t VAR_5)
{
 struct usb_device_request VAR_6;
 uint16_t VAR_7;
 usb_error_t VAR_8;

 VAR_7 = VAR_3->sc_flen;
 if (VAR_7 > sizeof(VAR_3->sc_temp_cfg)) {
  VAR_7 = sizeof(VAR_3->sc_temp_cfg);
 }
 VAR_3->sc_cfg = VAR_5;

 VAR_6.bmRequestType = VAR_2;
 VAR_6.bRequest = VAR_1;
 FUNC_2(VAR_6.wValue, VAR_0, VAR_3->sc_fid);
 VAR_6.wIndex[0] = VAR_3->sc_iface_no;
 VAR_6.wIndex[1] = 0;
 FUNC_1(VAR_6.wLength, VAR_7);

 VAR_3->sc_temp_cfg[0] = (VAR_4 & 0xff);
 VAR_3->sc_temp_cfg[1] = (VAR_4 >> 8) & 0xff;
 VAR_3->sc_temp_cfg[2] = (VAR_4 >> 16) & 0xff;
 VAR_3->sc_temp_cfg[3] = (VAR_4 >> 24) & 0xff;
 VAR_3->sc_temp_cfg[4] = VAR_5;

 VAR_8 = FUNC_3(VAR_3->sc_udev, &VAR_3->sc_ucom,
     &VAR_6, VAR_3->sc_temp_cfg, 0, 1000);
 if (VAR_8) {
  FUNC_0(0, "device request failed, err=%s "
      "(ignored)\n", FUNC_4(VAR_8));
 }
}
