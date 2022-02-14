
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_6__ {int * currextra; scalar_t__ currep; struct libusb20_interface* currifc; } ;
struct TYPE_5__ {int currep; int currifc; } ;
struct usb_parse_state {scalar_t__ preparse; TYPE_3__ a; TYPE_2__ b; } ;
struct usb_interface_descriptor {scalar_t__ bNumEndpoints; int extralen; int extra; int endpoint; int iInterface; int bInterfaceProtocol; int bInterfaceSubClass; int bInterfaceClass; int bAlternateSetting; int bInterfaceNumber; int bDescriptorType; int bLength; } ;
struct TYPE_4__ {int iInterface; int bInterfaceProtocol; int bInterfaceSubClass; int bInterfaceClass; int bAlternateSetting; int bInterfaceNumber; int bDescriptorType; int bLength; } ;
struct libusb20_interface {scalar_t__ num_endpoints; scalar_t__ endpoints; int extra; TYPE_1__ desc; } ;


 int FUNC_0 (struct usb_parse_state*) ;
 int FUNC_1 (struct usb_parse_state*,int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct usb_parse_state *VAR_0)
{
 struct libusb20_interface *VAR_1;
 struct usb_interface_descriptor *VAR_2;
 uint8_t VAR_3;

 VAR_1 = VAR_0->a.currifc;
 VAR_2 = VAR_0->b.currifc++;

 if (VAR_0->preparse == 0) {

  VAR_2->bLength = VAR_1->desc.bLength;
  VAR_2->bDescriptorType = VAR_1->desc.bDescriptorType;
  VAR_2->bInterfaceNumber = VAR_1->desc.bInterfaceNumber;
  VAR_2->bAlternateSetting = VAR_1->desc.bAlternateSetting;
  VAR_2->bNumEndpoints = VAR_1->num_endpoints;
  VAR_2->bInterfaceClass = VAR_1->desc.bInterfaceClass;
  VAR_2->bInterfaceSubClass = VAR_1->desc.bInterfaceSubClass;
  VAR_2->bInterfaceProtocol = VAR_1->desc.bInterfaceProtocol;
  VAR_2->iInterface = VAR_1->desc.iInterface;
  VAR_2->endpoint = VAR_0->b.currep;
 }
 for (VAR_3 = 0; VAR_3 != VAR_1->num_endpoints; VAR_3++) {
  VAR_0->a.currep = VAR_1->endpoints + VAR_3;
  FUNC_0(VAR_0);
 }

 VAR_0->a.currextra = &VAR_1->extra;
 FUNC_1(VAR_0, &VAR_2->extra, &VAR_2->extralen);
 return;
}
