
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LIBUSB20_DEVICE_DESC_DECODED {int dummy; } ;
struct libusb20_device {struct LIBUSB20_DEVICE_DESC_DECODED ddesc; } ;



struct LIBUSB20_DEVICE_DESC_DECODED *
FUNC_0(struct libusb20_device *VAR_0)
{
 return (&(VAR_0->ddesc));
}
