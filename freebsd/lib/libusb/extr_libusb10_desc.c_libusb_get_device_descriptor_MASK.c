
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct libusb_device_descriptor {int bNumConfigurations; int iSerialNumber; int iProduct; int iManufacturer; int bcdDevice; int idProduct; int idVendor; int bMaxPacketSize0; int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; int bcdUSB; int bDescriptorType; int bLength; } ;
struct libusb20_device {int dummy; } ;
struct LIBUSB20_DEVICE_DESC_DECODED {int bNumConfigurations; int iSerialNumber; int iProduct; int iManufacturer; int bcdDevice; int idProduct; int idVendor; int bMaxPacketSize0; int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; int bcdUSB; int bDescriptorType; int bLength; } ;
struct TYPE_3__ {struct libusb20_device* os_priv; } ;
typedef TYPE_1__ libusb_device ;


 int VAR_0 ;
 struct LIBUSB20_DEVICE_DESC_DECODED* FUNC_0 (struct libusb20_device*) ;

int
FUNC_1(libusb_device *VAR_1,
    struct libusb_device_descriptor *VAR_2)
{
 struct LIBUSB20_DEVICE_DESC_DECODED *VAR_3;
 struct libusb20_device *VAR_4;

 if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)))
  return (VAR_0);

 VAR_4 = VAR_1->os_priv;
 VAR_3 = FUNC_0(VAR_4);

 VAR_2->bLength = VAR_3->bLength;
 VAR_2->bDescriptorType = VAR_3->bDescriptorType;
 VAR_2->bcdUSB = VAR_3->bcdUSB;
 VAR_2->bDeviceClass = VAR_3->bDeviceClass;
 VAR_2->bDeviceSubClass = VAR_3->bDeviceSubClass;
 VAR_2->bDeviceProtocol = VAR_3->bDeviceProtocol;
 VAR_2->bMaxPacketSize0 = VAR_3->bMaxPacketSize0;
 VAR_2->idVendor = VAR_3->idVendor;
 VAR_2->idProduct = VAR_3->idProduct;
 VAR_2->bcdDevice = VAR_3->bcdDevice;
 VAR_2->iManufacturer = VAR_3->iManufacturer;
 VAR_2->iProduct = VAR_3->iProduct;
 VAR_2->iSerialNumber = VAR_3->iSerialNumber;
 VAR_2->bNumConfigurations = VAR_3->bNumConfigurations;

 return (0);
}
