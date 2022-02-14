
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct usb_temp_device_desc {void const* (* getVendorDesc ) (struct usb_device_request const*,int *) ;} ;
struct usb_device_request {int dummy; } ;
struct usb_device {int dummy; } ;


 void const* FUNC_0 (struct usb_device_request const*,int *) ;
 struct usb_temp_device_desc* FUNC_1 (struct usb_device*) ;

__attribute__((used)) static const void *
FUNC_2(struct usb_device *VAR_0,
    const struct usb_device_request *VAR_1, uint16_t *VAR_2)
{
 const struct usb_temp_device_desc *VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 == ((void*)0)) {
  return (((void*)0));
 }
 if (VAR_3->getVendorDesc == ((void*)0)) {
  return (((void*)0));
 }
 return ((VAR_3->getVendorDesc) (VAR_1, VAR_2));
}
