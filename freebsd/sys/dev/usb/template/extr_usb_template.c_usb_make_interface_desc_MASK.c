
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct usb_temp_setup {int size; scalar_t__ bNumEndpoints; scalar_t__ bAlternateSetting; scalar_t__ bInterfaceNumber; scalar_t__ buf; } ;
struct usb_temp_interface_desc {scalar_t__ isAltInterface; void** ppRawDesc; int iInterface; int bInterfaceProtocol; int bInterfaceSubClass; int bInterfaceClass; struct usb_temp_endpoint_desc** ppEndpoints; } ;
struct usb_temp_endpoint_desc {int dummy; } ;
struct usb_interface_descriptor {int bLength; int iInterface; int bInterfaceProtocol; int bInterfaceSubClass; int bInterfaceClass; scalar_t__ bNumEndpoints; scalar_t__ bAlternateSetting; scalar_t__ bInterfaceNumber; int bDescriptorType; } ;


 int VAR_0 ;
 struct usb_interface_descriptor* FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct usb_temp_setup*,struct usb_temp_endpoint_desc const*) ;
 int FUNC_2 (struct usb_temp_setup*,void const*) ;

__attribute__((used)) static void
FUNC_3(struct usb_temp_setup *VAR_1,
    const struct usb_temp_interface_desc *VAR_2)
{
 struct usb_interface_descriptor *VAR_3;
 const struct usb_temp_endpoint_desc **VAR_4;
 const void **VAR_5;
 uint16_t VAR_6;



 VAR_6 = VAR_1->size;
 VAR_1->size += sizeof(*VAR_3);



 if (VAR_2->isAltInterface == 0) {
  VAR_1->bAlternateSetting = 0;
  VAR_1->bInterfaceNumber++;
 } else {
  VAR_1->bAlternateSetting++;
 }



 VAR_5 = VAR_2->ppRawDesc;

 if (VAR_5) {
  while (*VAR_5) {
   FUNC_2(VAR_1, *VAR_5);
   VAR_5++;
  }
 }


 VAR_1->bNumEndpoints = 0;



 VAR_4 = VAR_2->ppEndpoints;
 if (VAR_4) {
  while (*VAR_4) {
   FUNC_1(VAR_1, *VAR_4);
   VAR_4++;
  }
 }




 if (VAR_1->buf) {
  VAR_3 = FUNC_0(VAR_1->buf, VAR_6);
  VAR_3->bLength = sizeof(*VAR_3);
  VAR_3->bDescriptorType = VAR_0;
  VAR_3->bInterfaceNumber = VAR_1->bInterfaceNumber;
  VAR_3->bAlternateSetting = VAR_1->bAlternateSetting;
  VAR_3->bNumEndpoints = VAR_1->bNumEndpoints;
  VAR_3->bInterfaceClass = VAR_2->bInterfaceClass;
  VAR_3->bInterfaceSubClass = VAR_2->bInterfaceSubClass;
  VAR_3->bInterfaceProtocol = VAR_2->bInterfaceProtocol;
  VAR_3->iInterface = VAR_2->iInterface;
 }
}
