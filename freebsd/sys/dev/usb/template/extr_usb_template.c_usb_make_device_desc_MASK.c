
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct usb_temp_setup {int size; int bConfigurationValue; int usb_speed; int err; scalar_t__ buf; } ;
struct usb_temp_device_desc {int idVendor; int idProduct; int bcdDevice; int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; int iSerialNumber; int iProduct; int iManufacturer; struct usb_temp_config_desc** ppConfigDesc; } ;
struct TYPE_4__ {int bLength; int bNumConfigurations; int bMaxPacketSize; int bcdUSB; int iSerialNumber; int iProduct; int iManufacturer; int bcdDevice; int idProduct; int idVendor; int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; int bDescriptorType; } ;
struct TYPE_3__ {int bLength; scalar_t__ bMaxPacketSize0; int bcdUSB; scalar_t__ bNumConfigurations; int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; int bDescriptorType; } ;
struct usb_temp_data {TYPE_2__ udd; TYPE_1__ udq; struct usb_temp_device_desc const* tdd; } ;
struct usb_temp_config_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_temp_data* FUNC_0 (scalar_t__,int) ;
 int VAR_2 ;





 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct usb_temp_setup*,struct usb_temp_config_desc const*) ;

__attribute__((used)) static void
FUNC_3(struct usb_temp_setup *VAR_3,
    const struct usb_temp_device_desc *VAR_4)
{
 struct usb_temp_data *VAR_5;
 const struct usb_temp_config_desc **VAR_6;
 uint16_t VAR_7;



 VAR_7 = VAR_3->size;
 VAR_3->size += sizeof(*VAR_5);



 VAR_3->bConfigurationValue = 1;
 VAR_6 = VAR_4->ppConfigDesc;
 if (VAR_6) {
  while (*VAR_6) {
   FUNC_2(VAR_3, *VAR_6);
   VAR_3->bConfigurationValue++;
   VAR_6++;
  }
 }





 if (VAR_3->buf) {
  VAR_5 = FUNC_0(VAR_3->buf, VAR_7);


  VAR_5->tdd = VAR_4;


  VAR_5->udd.bLength = sizeof(VAR_5->udd);
  VAR_5->udd.bDescriptorType = VAR_0;
  VAR_5->udd.bDeviceClass = VAR_4->bDeviceClass;
  VAR_5->udd.bDeviceSubClass = VAR_4->bDeviceSubClass;
  VAR_5->udd.bDeviceProtocol = VAR_4->bDeviceProtocol;
  FUNC_1(VAR_5->udd.idVendor, VAR_4->idVendor);
  FUNC_1(VAR_5->udd.idProduct, VAR_4->idProduct);
  FUNC_1(VAR_5->udd.bcdDevice, VAR_4->bcdDevice);
  VAR_5->udd.iManufacturer = VAR_4->iManufacturer;
  VAR_5->udd.iProduct = VAR_4->iProduct;
  VAR_5->udd.iSerialNumber = VAR_4->iSerialNumber;
  VAR_5->udd.bNumConfigurations = VAR_3->bConfigurationValue - 1;
  VAR_5->udq.bLength = sizeof(VAR_5->udq);
  VAR_5->udq.bDescriptorType = VAR_1;
  VAR_5->udq.bDeviceClass = VAR_4->bDeviceClass;
  VAR_5->udq.bDeviceSubClass = VAR_4->bDeviceSubClass;
  VAR_5->udq.bDeviceProtocol = VAR_4->bDeviceProtocol;
  VAR_5->udq.bNumConfigurations = 0;
  FUNC_1(VAR_5->udq.bcdUSB, 0x0200);
  VAR_5->udq.bMaxPacketSize0 = 0;

  switch (VAR_3->usb_speed) {
  case 130:
   FUNC_1(VAR_5->udd.bcdUSB, 0x0110);
   VAR_5->udd.bMaxPacketSize = 8;
   break;
  case 132:
   FUNC_1(VAR_5->udd.bcdUSB, 0x0110);
   VAR_5->udd.bMaxPacketSize = 32;
   break;
  case 131:
   FUNC_1(VAR_5->udd.bcdUSB, 0x0200);
   VAR_5->udd.bMaxPacketSize = 64;
   break;
  case 128:
   FUNC_1(VAR_5->udd.bcdUSB, 0x0250);
   VAR_5->udd.bMaxPacketSize = 255;
   break;
  case 129:
   FUNC_1(VAR_5->udd.bcdUSB, 0x0300);
   VAR_5->udd.bMaxPacketSize = 9;
   break;
  default:
   VAR_3->err = VAR_2;
   break;
  }
 }
}
