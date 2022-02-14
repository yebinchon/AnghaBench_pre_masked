
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct TYPE_2__ {int sc_tq; } ;
struct umcs7840_softc {int sc_dev; TYPE_1__ sc_super_ucom; int sc_udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *,struct usb_device_request*,int *,int ,int *,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static usb_error_t
FUNC_4(struct umcs7840_softc *VAR_3, uint8_t VAR_4, uint8_t VAR_5)
{
 struct usb_device_request VAR_6;
 usb_error_t VAR_7;

 VAR_6.bmRequestType = VAR_2;
 VAR_6.bRequest = VAR_0;
 FUNC_0(VAR_6.wValue, VAR_5);
 FUNC_0(VAR_6.wIndex, VAR_4);
 FUNC_0(VAR_6.wLength, 0);

 VAR_7 = FUNC_2(VAR_3->sc_udev, &VAR_3->sc_super_ucom.sc_tq, &VAR_6, ((void*)0), 0, ((void*)0), VAR_1);
 if (VAR_7)
  FUNC_1(VAR_3->sc_dev, "Writing register %d failed: %s\n", VAR_4, FUNC_3(VAR_7));

 return (VAR_7);
}
