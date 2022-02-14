
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_endpoint {scalar_t__ ep_mode; } ;
struct usb_device {TYPE_2__* bus; } ;
struct TYPE_4__ {TYPE_1__* methods; } ;
struct TYPE_3__ {scalar_t__ (* set_endpoint_mode ) (struct usb_device*,struct usb_endpoint*,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct usb_device*,struct usb_endpoint*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct usb_device*) ;
 int FUNC_2 (struct usb_device*) ;

usb_error_t
FUNC_3(struct usb_device *VAR_2, struct usb_endpoint *VAR_3,
    uint8_t VAR_4)
{
 usb_error_t VAR_5;
 uint8_t VAR_6;


 VAR_6 = FUNC_1(VAR_2);

 if (VAR_2->bus->methods->set_endpoint_mode != ((void*)0)) {
  VAR_5 = (VAR_2->bus->methods->set_endpoint_mode) (
      VAR_2, VAR_3, VAR_4);
 } else if (VAR_4 != VAR_0) {
  VAR_5 = VAR_1;
 } else {
  VAR_5 = 0;
 }


 VAR_3->ep_mode = VAR_4;

 if (VAR_6)
  FUNC_2(VAR_2);
 return (VAR_5);
}
