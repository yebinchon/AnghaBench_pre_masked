
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * currextra; struct libusb20_endpoint* currep; } ;
struct TYPE_4__ {int currep; } ;
struct usb_parse_state {scalar_t__ preparse; TYPE_3__ a; TYPE_1__ b; } ;
struct usb_endpoint_descriptor {int extralen; int extra; int bSynchAddress; int bRefresh; int bInterval; int wMaxPacketSize; int bmAttributes; int bEndpointAddress; int bDescriptorType; int bLength; } ;
struct TYPE_5__ {int bSynchAddress; int bRefresh; int bInterval; int wMaxPacketSize; int bmAttributes; int bEndpointAddress; int bDescriptorType; int bLength; } ;
struct libusb20_endpoint {int extra; TYPE_2__ desc; } ;


 int FUNC_0 (struct usb_parse_state*,int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct usb_parse_state *VAR_0)
{
 struct usb_endpoint_descriptor *VAR_1;
 struct libusb20_endpoint *VAR_2;

 VAR_2 = VAR_0->a.currep;
 VAR_1 = VAR_0->b.currep++;

 if (VAR_0->preparse == 0) {

  VAR_1->bLength = VAR_2->desc.bLength;
  VAR_1->bDescriptorType = VAR_2->desc.bDescriptorType;
  VAR_1->bEndpointAddress = VAR_2->desc.bEndpointAddress;
  VAR_1->bmAttributes = VAR_2->desc.bmAttributes;
  VAR_1->wMaxPacketSize = VAR_2->desc.wMaxPacketSize;
  VAR_1->bInterval = VAR_2->desc.bInterval;
  VAR_1->bRefresh = VAR_2->desc.bRefresh;
  VAR_1->bSynchAddress = VAR_2->desc.bSynchAddress;
 }
 VAR_0->a.currextra = &VAR_2->extra;
 FUNC_0(VAR_0, &VAR_1->extra, &VAR_1->extralen);
 return;
}
