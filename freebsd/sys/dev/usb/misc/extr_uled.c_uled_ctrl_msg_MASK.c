
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef void* uint8_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; void* bRequest; void* bmRequestType; } ;
struct uled_softc {int sc_mtx; int sc_udev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,struct usb_device_request*,void*,int ,int *,int) ;

__attribute__((used)) static usb_error_t
FUNC_2(struct uled_softc *VAR_0, uint8_t VAR_1, uint8_t VAR_2,
    uint16_t VAR_3, uint16_t VAR_4, void *VAR_5, uint16_t VAR_6)
{
 struct usb_device_request VAR_7;

 VAR_7.bmRequestType = VAR_1;
 VAR_7.bRequest = VAR_2;
 FUNC_0(VAR_7.wValue, VAR_3);
 FUNC_0(VAR_7.wIndex, VAR_4);
 FUNC_0(VAR_7.wLength, VAR_6);

 return (FUNC_1(VAR_0->sc_udev, &VAR_0->sc_mtx, &VAR_7, VAR_5,
     0, ((void*)0), 2000));
}
