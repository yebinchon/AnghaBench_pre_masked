
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
struct usb_device_request {int* wIndex; int wLength; int wValue; int bRequest; int bmRequestType; } ;
struct usb_device {int dummy; } ;
struct mtx {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct usb_device*,struct mtx*,struct usb_device_request*,int*) ;

usb_error_t
FUNC_2(struct usb_device *VAR_7, struct mtx *VAR_8,
    uint8_t VAR_9, uint8_t VAR_10, uint8_t VAR_11, uint8_t VAR_12)
{
 struct usb_device_request VAR_13;
 usb_error_t VAR_14;
 uint8_t VAR_15[1];

 VAR_13.bmRequestType = VAR_6;
 VAR_13.bRequest = VAR_1;
 FUNC_0(VAR_13.wValue, VAR_0);
 VAR_13.wIndex[0] = (VAR_9 & 0xF) | ((VAR_10 & 0xF) << 4);
 VAR_13.wIndex[1] = (VAR_11 & 0x7F) | (VAR_12 ? 0x80 : 0x00);
 FUNC_0(VAR_13.wLength, sizeof(VAR_15));


 VAR_15[0] = 0x00;

 VAR_14 = FUNC_1(VAR_7, VAR_8, &VAR_13, VAR_15);
 if (VAR_14)
  return (VAR_14);

 switch (VAR_15[0]) {
 case 0x00:
  break;
 case 0x10:
  VAR_14 = VAR_3;
  break;
 case 0x11:
  VAR_14 = VAR_5;
  break;
 case 0x30:
  VAR_14 = VAR_4;
  break;
 default:
  VAR_14 = VAR_2;
  break;
 }
 return (VAR_14);
}
