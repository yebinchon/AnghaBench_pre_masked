
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; scalar_t__* wIndex; int wValue; int bRequest; int bmRequestType; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct usb_device_request *VAR_2, uint8_t VAR_3,
    uint8_t VAR_4, uint8_t VAR_5, uint16_t VAR_6)
{
 VAR_2->bmRequestType = VAR_1;
 VAR_2->bRequest = VAR_0;
 FUNC_1(VAR_2->wValue, VAR_4, VAR_5);
 VAR_2->wIndex[0] = VAR_3;
 VAR_2->wIndex[1] = 0;
 FUNC_0(VAR_2->wLength, VAR_6);
}
