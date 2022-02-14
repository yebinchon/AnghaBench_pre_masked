
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct usb_temp_setup {int bInterfaceNumber; int bConfigurationValue; scalar_t__ size; scalar_t__ buf; scalar_t__ bAlternateSetting; } ;
struct usb_temp_interface_desc {int dummy; } ;
struct usb_temp_config_desc {int bmAttributes; int iConfiguration; struct usb_temp_interface_desc** ppIfaceDesc; } ;
struct usb_config_descriptor {int bLength; int bNumInterface; int bMaxPower; int bmAttributes; int iConfiguration; int bConfigurationValue; int wTotalLength; int bDescriptorType; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct usb_config_descriptor* FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct usb_temp_setup*,struct usb_temp_interface_desc const*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct usb_temp_setup *VAR_5,
    const struct usb_temp_config_desc *VAR_6)
{
 struct usb_config_descriptor *VAR_7;
 const struct usb_temp_interface_desc **VAR_8;
 uint16_t VAR_9;
 int VAR_10;



 VAR_9 = VAR_5->size;
 VAR_5->size += sizeof(*VAR_7);



 VAR_5->bInterfaceNumber = 0xFF;
 VAR_5->bAlternateSetting = 0;



 VAR_8 = VAR_6->ppIfaceDesc;
 if (VAR_8) {
  while (*VAR_8) {
   FUNC_2(VAR_5, *VAR_8);
   VAR_8++;
  }
 }




 if (VAR_5->buf) {
  VAR_7 = FUNC_0(VAR_5->buf, VAR_9);


  VAR_9 = VAR_5->size - VAR_9;

  VAR_7->bLength = sizeof(*VAR_7);
  VAR_7->bDescriptorType = VAR_3;
  FUNC_1(VAR_7->wTotalLength, VAR_9);
  VAR_7->bNumInterface = VAR_5->bInterfaceNumber + 1;
  VAR_7->bConfigurationValue = VAR_5->bConfigurationValue;
  VAR_7->iConfiguration = VAR_6->iConfiguration;
  VAR_7->bmAttributes = VAR_6->bmAttributes;

  VAR_10 = VAR_4;
  VAR_7->bMaxPower = VAR_10 / 2;
  VAR_7->bmAttributes |= VAR_1;
  if (VAR_10 > 0) {
   VAR_7->bmAttributes |= VAR_0;
   VAR_7->bmAttributes &= ~VAR_2;
  } else {
   VAR_7->bmAttributes &= ~VAR_0;
   VAR_7->bmAttributes |= VAR_2;
  }
 }
}
