
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct rum_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct rum_softc*,struct usb_device_request*,int *) ;

__attribute__((used)) static usb_error_t
FUNC_2(struct rum_softc *VAR_2, int VAR_3)
{
 struct usb_device_request VAR_4;

 VAR_4.bmRequestType = VAR_1;
 VAR_4.bRequest = VAR_0;
 FUNC_0(VAR_4.wValue, VAR_3);
 FUNC_0(VAR_4.wIndex, 0);
 FUNC_0(VAR_4.wLength, 0);

 return (FUNC_1(VAR_2, &VAR_4, ((void*)0)));
}
