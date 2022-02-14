
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_6__ {int * currextra; scalar_t__ currifc; struct libusb20_config* currcfg; } ;
struct TYPE_5__ {int currifcw; struct usb_config_descriptor* currcfg; } ;
struct usb_parse_state {scalar_t__ preparse; TYPE_3__ a; TYPE_2__ b; } ;
struct usb_config_descriptor {scalar_t__ bNumInterfaces; int extralen; int extra; int interface; int MaxPower; int bmAttributes; int iConfiguration; int bConfigurationValue; int wTotalLength; int bDescriptorType; int bLength; } ;
struct TYPE_4__ {int bMaxPower; int bmAttributes; int iConfiguration; int bConfigurationValue; int wTotalLength; int bDescriptorType; int bLength; } ;
struct libusb20_config {scalar_t__ num_interface; scalar_t__ interface; int extra; TYPE_1__ desc; } ;


 int FUNC_0 (struct usb_parse_state*,int *,int *) ;
 int FUNC_1 (struct usb_parse_state*) ;

__attribute__((used)) static void
FUNC_2(struct usb_parse_state *VAR_0)
{
 struct libusb20_config *VAR_1;
 struct usb_config_descriptor *VAR_2;
 uint8_t VAR_3;

 VAR_1 = VAR_0->a.currcfg;
 VAR_2 = VAR_0->b.currcfg;

 if (VAR_0->preparse == 0) {

  VAR_2->bLength = VAR_1->desc.bLength;
  VAR_2->bDescriptorType = VAR_1->desc.bDescriptorType;
  VAR_2->wTotalLength = VAR_1->desc.wTotalLength;
  VAR_2->bNumInterfaces = VAR_1->num_interface;
  VAR_2->bConfigurationValue = VAR_1->desc.bConfigurationValue;
  VAR_2->iConfiguration = VAR_1->desc.iConfiguration;
  VAR_2->bmAttributes = VAR_1->desc.bmAttributes;
  VAR_2->MaxPower = VAR_1->desc.bMaxPower;
  VAR_2->interface = VAR_0->b.currifcw;
 }
 for (VAR_3 = 0; VAR_3 != VAR_1->num_interface; VAR_3++) {
  VAR_0->a.currifc = VAR_1->interface + VAR_3;
  FUNC_1(VAR_0);
 }

 VAR_0->a.currextra = &VAR_1->extra;
 FUNC_0(VAR_0, &VAR_2->extra, &VAR_2->extralen);
 return;
}
