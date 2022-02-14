
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct usb_device {int dummy; } ;


 int FUNC_0 (int,char*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;
 int VAR_2 ;
 int FUNC_3 (struct usb_device*,int *,struct usb_device_request*,int*) ;

__attribute__((used)) static usb_error_t
FUNC_4(struct usb_device *VAR_3, uint8_t VAR_4,
    uint8_t VAR_5, uint32_t VAR_6)
{
 struct usb_device_request VAR_7;
 uint8_t VAR_8[4];

 FUNC_0(6, "ifaceno=%d clockid=%d speed=%u\n",
     VAR_4, VAR_5, VAR_6);

 VAR_7.bmRequestType = VAR_2;
 VAR_7.bRequest = VAR_0;
 FUNC_2(VAR_7.wValue, VAR_1, 0);
 FUNC_2(VAR_7.wIndex, VAR_5, VAR_4);
 FUNC_1(VAR_7.wLength, 4);
 VAR_8[0] = VAR_6;
 VAR_8[1] = VAR_6 >> 8;
 VAR_8[2] = VAR_6 >> 16;
 VAR_8[3] = VAR_6 >> 24;

 return (FUNC_3(VAR_3, ((void*)0), &VAR_7, VAR_8));
}
