
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; scalar_t__* wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct usb_device {int dummy; } ;
struct usb_cdc_abstract_state {int wState; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct usb_device*,int *,struct usb_device_request*,struct usb_cdc_abstract_state*) ;

__attribute__((used)) static usb_error_t
FUNC_3(struct usb_device *VAR_3, uint8_t VAR_4,
    uint16_t VAR_5, uint16_t VAR_6)
{
 struct usb_device_request VAR_7;
 struct usb_cdc_abstract_state VAR_8;

 FUNC_0("feature=%d state=%d\n",
     VAR_5, VAR_6);

 VAR_7.bmRequestType = VAR_2;
 VAR_7.bRequest = VAR_1;
 FUNC_1(VAR_7.wValue, VAR_5);
 VAR_7.wIndex[0] = VAR_4;
 VAR_7.wIndex[1] = 0;
 FUNC_1(VAR_7.wLength, VAR_0);
 FUNC_1(VAR_8.wState, VAR_6);

 return (FUNC_2(VAR_3, ((void*)0), &VAR_7, &VAR_8));
}
