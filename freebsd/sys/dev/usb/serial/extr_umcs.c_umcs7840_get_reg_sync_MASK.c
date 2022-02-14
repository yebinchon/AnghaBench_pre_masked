
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct TYPE_2__ {int sc_tq; } ;
struct umcs7840_softc {int sc_dev; TYPE_1__ sc_super_ucom; int sc_udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int *,struct usb_device_request*,void*,int ,int*,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static usb_error_t
FUNC_4(struct umcs7840_softc *VAR_6, uint8_t VAR_7, uint8_t *VAR_8)
{
 struct usb_device_request VAR_9;
 usb_error_t VAR_10;
 uint16_t VAR_11;

 VAR_9.bmRequestType = VAR_5;
 VAR_9.bRequest = VAR_0;
 FUNC_0(VAR_9.wValue, 0);
 FUNC_0(VAR_9.wIndex, VAR_7);
 FUNC_0(VAR_9.wLength, VAR_2);

 VAR_10 = FUNC_2(VAR_6->sc_udev, &VAR_6->sc_super_ucom.sc_tq, &VAR_9, (void *)VAR_8, 0, &VAR_11, VAR_1);
 if (VAR_10 == VAR_4 && VAR_11 != 1) {
  FUNC_1(VAR_6->sc_dev, "Reading register %d failed: invalid length %d\n", VAR_7, VAR_11);
  return (VAR_3);
 } else if (VAR_10)
  FUNC_1(VAR_6->sc_dev, "Reading register %d failed: %s\n", VAR_7, FUNC_3(VAR_10));
 return (VAR_10);
}
