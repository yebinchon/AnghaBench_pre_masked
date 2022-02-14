
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct usb_device*,int *,struct usb_device_request*,int *,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct usb_device *VAR_5)
{
 struct usb_device_request VAR_6;

 VAR_6.bmRequestType = VAR_4;
 VAR_6.bRequest = VAR_2;
 FUNC_0(VAR_6.wValue, VAR_0);
 FUNC_0(VAR_6.wIndex, VAR_1);
 FUNC_0(VAR_6.wLength, 0);

 if (FUNC_1(VAR_5, ((void*)0), &VAR_6,
     ((void*)0), 0, ((void*)0), VAR_3)) {

 }
 return (0);
}
