
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_size_t ;
typedef int uint8_t ;
struct usbd_lookup_info {scalar_t__ idVendor; scalar_t__ idProduct; scalar_t__ bcdDevice; scalar_t__ bDeviceClass; scalar_t__ bDeviceSubClass; scalar_t__ bDeviceProtocol; scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; } ;
struct usb_device_id {scalar_t__ idVendor; scalar_t__ idProduct; scalar_t__ bcdDevice_lo; scalar_t__ bcdDevice_hi; scalar_t__ bDeviceClass; scalar_t__ bDeviceSubClass; scalar_t__ bDeviceProtocol; scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; scalar_t__ match_flag_int_protocol; scalar_t__ match_flag_int_subclass; scalar_t__ match_flag_int_class; scalar_t__ match_flag_dev_protocol; scalar_t__ match_flag_dev_subclass; scalar_t__ match_flag_dev_class; scalar_t__ match_flag_dev_hi; scalar_t__ match_flag_dev_lo; scalar_t__ match_flag_product; scalar_t__ match_flag_vendor; } ;



const struct usb_device_id *
FUNC_0(const struct usb_device_id *VAR_0, usb_size_t VAR_1,
    const struct usbd_lookup_info *VAR_2)
{
 const struct usb_device_id *VAR_3;

 if (VAR_0 == ((void*)0)) {
  goto done;
 }
 VAR_3 = (const void *)(((const uint8_t *)VAR_0) + VAR_1);





 for (; VAR_0 != VAR_3; VAR_0++) {

  if ((VAR_0->match_flag_vendor) &&
      (VAR_0->idVendor != VAR_2->idVendor)) {
   continue;
  }
  if ((VAR_0->match_flag_product) &&
      (VAR_0->idProduct != VAR_2->idProduct)) {
   continue;
  }
  if ((VAR_0->match_flag_dev_lo) &&
      (VAR_0->bcdDevice_lo > VAR_2->bcdDevice)) {
   continue;
  }
  if ((VAR_0->match_flag_dev_hi) &&
      (VAR_0->bcdDevice_hi < VAR_2->bcdDevice)) {
   continue;
  }
  if ((VAR_0->match_flag_dev_class) &&
      (VAR_0->bDeviceClass != VAR_2->bDeviceClass)) {
   continue;
  }
  if ((VAR_0->match_flag_dev_subclass) &&
      (VAR_0->bDeviceSubClass != VAR_2->bDeviceSubClass)) {
   continue;
  }
  if ((VAR_0->match_flag_dev_protocol) &&
      (VAR_0->bDeviceProtocol != VAR_2->bDeviceProtocol)) {
   continue;
  }
  if ((VAR_0->match_flag_int_class) &&
      (VAR_0->bInterfaceClass != VAR_2->bInterfaceClass)) {
   continue;
  }
  if ((VAR_0->match_flag_int_subclass) &&
      (VAR_0->bInterfaceSubClass != VAR_2->bInterfaceSubClass)) {
   continue;
  }
  if ((VAR_0->match_flag_int_protocol) &&
      (VAR_0->bInterfaceProtocol != VAR_2->bInterfaceProtocol)) {
   continue;
  }

  return (VAR_0);
 }

done:
 return (((void*)0));
}
