
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct kue_softc {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct kue_softc*,struct usb_device_request*,int *) ;

__attribute__((used)) static int
FUNC_2(struct kue_softc *VAR_1, uint8_t VAR_2, uint16_t VAR_3)
{
 struct usb_device_request VAR_4;

 VAR_4.bmRequestType = VAR_0;
 VAR_4.bRequest = VAR_2;
 FUNC_0(VAR_4.wValue, VAR_3);
 FUNC_0(VAR_4.wIndex, 0);
 FUNC_0(VAR_4.wLength, 0);

 return (FUNC_1(VAR_1, &VAR_4, ((void*)0)));
}
