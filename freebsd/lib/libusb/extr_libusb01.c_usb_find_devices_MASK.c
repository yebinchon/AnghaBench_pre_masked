
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bLength; scalar_t__ bNumConfigurations; int iSerialNumber; int iProduct; int iManufacturer; int bcdDevice; int idProduct; int idVendor; int bMaxPacketSize0; int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; int bcdUSB; int bDescriptorType; } ;
struct usb_device {struct libusb20_device* dev; int devnum; TYPE_1__ descriptor; int filename; TYPE_2__* bus; } ;
struct libusb20_device {struct usb_device* privLuData; } ;
struct LIBUSB20_DEVICE_DESC_DECODED {scalar_t__ bNumConfigurations; int iSerialNumber; int iProduct; int iManufacturer; int bcdDevice; int idProduct; int idVendor; int bMaxPacketSize0; int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; int bcdUSB; int bDescriptorType; } ;
struct TYPE_4__ {int devices; } ;


 int FUNC_0 (int ,struct usb_device*) ;
 int FUNC_1 (int ,struct usb_device*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct usb_device*) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,struct libusb20_device*) ;
 struct libusb20_device* FUNC_5 (int *,struct libusb20_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct libusb20_device*) ;
 int FUNC_8 (struct libusb20_device*) ;
 int FUNC_9 (struct libusb20_device*) ;
 int FUNC_10 (struct libusb20_device*) ;
 struct LIBUSB20_DEVICE_DESC_DECODED* FUNC_11 (struct libusb20_device*) ;
 int FUNC_12 (struct libusb20_device*,int ) ;
 struct usb_device* FUNC_13 (int) ;
 int FUNC_14 (struct usb_device*,int ,int) ;
 int FUNC_15 (int ,int,char*,int,int) ;
 int * VAR_1 ;
 int FUNC_16 (void*) ;
 TYPE_2__ VAR_2 ;

int
FUNC_17(void)
{
 struct libusb20_device *VAR_3;
 struct usb_device *VAR_4;
 struct LIBUSB20_DEVICE_DESC_DECODED *VAR_5;
 int VAR_6;
 int VAR_7;




 while ((VAR_3 = FUNC_5(VAR_1, ((void*)0)))) {
  VAR_4 = VAR_3->privLuData;
  FUNC_4(VAR_1, VAR_3);
  FUNC_8(VAR_3);
  if (VAR_4 != ((void*)0)) {
   FUNC_1(VAR_2.devices, VAR_4);
   FUNC_2(VAR_4);
  }
 }



 FUNC_6(VAR_1);


 VAR_1 = FUNC_3();
 if (VAR_1 == ((void*)0)) {
  return (-1);
 }


 VAR_6 = 1;
 VAR_3 = ((void*)0);
 while ((VAR_3 = FUNC_5(VAR_1, VAR_3))) {
  VAR_4 = FUNC_13(sizeof(*VAR_4));
  if (VAR_4 == ((void*)0))
   break;

  FUNC_14(VAR_4, 0, sizeof(*VAR_4));

  VAR_4->bus = &VAR_2;

  FUNC_15(VAR_4->filename, sizeof(VAR_4->filename),
      "/dev/ugen%u.%u",
      FUNC_10(VAR_3),
      FUNC_9(VAR_3));

  VAR_5 = FUNC_11(VAR_3);

  VAR_4->descriptor.bLength = sizeof(VAR_4->descriptor);
  VAR_4->descriptor.bDescriptorType = VAR_5->bDescriptorType;
  VAR_4->descriptor.bcdUSB = VAR_5->bcdUSB;
  VAR_4->descriptor.bDeviceClass = VAR_5->bDeviceClass;
  VAR_4->descriptor.bDeviceSubClass = VAR_5->bDeviceSubClass;
  VAR_4->descriptor.bDeviceProtocol = VAR_5->bDeviceProtocol;
  VAR_4->descriptor.bMaxPacketSize0 = VAR_5->bMaxPacketSize0;
  VAR_4->descriptor.idVendor = VAR_5->idVendor;
  VAR_4->descriptor.idProduct = VAR_5->idProduct;
  VAR_4->descriptor.bcdDevice = VAR_5->bcdDevice;
  VAR_4->descriptor.iManufacturer = VAR_5->iManufacturer;
  VAR_4->descriptor.iProduct = VAR_5->iProduct;
  VAR_4->descriptor.iSerialNumber = VAR_5->iSerialNumber;
  VAR_4->descriptor.bNumConfigurations =
      VAR_5->bNumConfigurations;
  if (VAR_4->descriptor.bNumConfigurations > VAR_0) {

   VAR_4->descriptor.bNumConfigurations = VAR_0;
  }
  VAR_4->devnum = VAR_6++;

  VAR_4->dev = VAR_3;
  VAR_3->privLuData = VAR_4;

  VAR_7 = FUNC_12(VAR_3, 0);
  if (VAR_7 == 0) {

   FUNC_16((void *)VAR_3);
   FUNC_7(VAR_3);
  }
  FUNC_0(VAR_2.devices, VAR_4);
 }

 return (VAR_6 - 1);
}
