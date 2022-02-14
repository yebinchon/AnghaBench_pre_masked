
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef void* uint8_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; void* bRequest; void* bmRequestType; } ;
struct usb_device {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct usb_device*,int *,struct usb_device_request*,void**) ;
 int FUNC_3 (int) ;

__attribute__((used)) static usb_error_t
FUNC_4(struct usb_device *VAR_0, uint8_t VAR_1, uint8_t VAR_2,
    uint16_t VAR_3, uint16_t VAR_4, uint16_t VAR_5)
{
 struct usb_device_request VAR_6;
 usb_error_t VAR_7;
 uint8_t VAR_8[4];

 VAR_6.bmRequestType = VAR_1;
 VAR_6.bRequest = VAR_2;
 FUNC_1(VAR_6.wValue, VAR_3);
 FUNC_1(VAR_6.wIndex, VAR_4);
 FUNC_1(VAR_6.wLength, VAR_5);

 VAR_7 = FUNC_2(VAR_0, ((void*)0), &VAR_6, VAR_8);
 if (VAR_7) {
  FUNC_0("error=%s\n", FUNC_3(VAR_7));
  return (1);
 }
 return (0);
}
