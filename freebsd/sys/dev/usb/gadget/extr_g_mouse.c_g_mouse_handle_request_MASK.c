
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct usb_device_request {scalar_t__ bmRequestType; scalar_t__ bRequest; int* wValue; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_0(device_t VAR_3,
    const void *VAR_4, void **VAR_5, uint16_t *VAR_6,
    uint16_t VAR_7, uint8_t *VAR_8)
{
 const struct usb_device_request *VAR_9 = VAR_4;
 uint8_t VAR_10 = *VAR_8;

 if (!VAR_10) {
  if ((VAR_9->bmRequestType == VAR_2) &&
      (VAR_9->bRequest == VAR_1) &&
      (VAR_9->wValue[0] == 0x00) &&
      (VAR_9->wValue[1] == 0x00)) {
   *VAR_6 = 0;
   return (0);
  }
 }
 return (VAR_0);
}
