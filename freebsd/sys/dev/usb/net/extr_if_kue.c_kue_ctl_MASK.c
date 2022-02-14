
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; scalar_t__ bRequest; int bmRequestType; } ;
struct kue_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct kue_softc*,struct usb_device_request*,void*) ;

__attribute__((used)) static int
FUNC_2(struct kue_softc *VAR_3, uint8_t VAR_4, uint8_t VAR_5,
    uint16_t VAR_6, void *VAR_7, int VAR_8)
{
 struct usb_device_request VAR_9;

 if (VAR_4 == VAR_0)
  VAR_9.bmRequestType = VAR_2;
 else
  VAR_9.bmRequestType = VAR_1;


 VAR_9.bRequest = VAR_5;
 FUNC_0(VAR_9.wValue, VAR_6);
 FUNC_0(VAR_9.wIndex, 0);
 FUNC_0(VAR_9.wLength, VAR_8);

 return (FUNC_1(VAR_3, &VAR_9, VAR_7));
}
