
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint16_t ;
struct libusb_control_setup {void* wLength; void* wIndex; void* wValue; void* bRequest; void* bmRequestType; } ;


 void* FUNC_0 (int ) ;

void
FUNC_1(uint8_t *VAR_0, uint8_t VAR_1,
    uint8_t VAR_2, uint16_t VAR_3,
    uint16_t VAR_4, uint16_t VAR_5)
{
 struct libusb_control_setup *VAR_6 = (struct libusb_control_setup *)VAR_0;


 VAR_6->bmRequestType = VAR_1;
 VAR_6->bRequest = VAR_2;
 VAR_6->wValue = FUNC_0(VAR_3);
 VAR_6->wIndex = FUNC_0(VAR_4);
 VAR_6->wLength = FUNC_0(VAR_5);
}
