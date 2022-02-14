
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct usb_temp_setup {scalar_t__ size; size_t usb_speed; int bNumEndpoints; scalar_t__ buf; void* err; } ;
struct usb_temp_endpoint_desc {int bEndpointAddress; int bmAttributes; void** ppRawDesc; TYPE_2__* pIntervals; TYPE_1__* pPacketSize; } ;
struct usb_endpoint_descriptor {int bLength; int bEndpointAddress; int bmAttributes; int bInterval; int wMaxPacketSize; int bDescriptorType; } ;
struct TYPE_4__ {int* bInterval; } ;
struct TYPE_3__ {scalar_t__* mps; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct usb_endpoint_descriptor* FUNC_0 (scalar_t__,scalar_t__) ;
 void* VAR_7 ;


 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct usb_temp_setup*,void const*) ;

__attribute__((used)) static void
FUNC_3(struct usb_temp_setup *VAR_8,
    const struct usb_temp_endpoint_desc *VAR_9)
{
 struct usb_endpoint_descriptor *VAR_10;
 const void **VAR_11;
 uint16_t VAR_12;
 uint16_t VAR_13;
 uint8_t VAR_14;
 uint8_t VAR_15;


 VAR_12 = VAR_8->size;

 VAR_14 = (VAR_9->bEndpointAddress & (VAR_1 | VAR_2 | VAR_3));
 VAR_15 = (VAR_9->bmAttributes & VAR_5);

 if (VAR_15 == VAR_4) {

  VAR_8->size += sizeof(*VAR_10) + 2;
 } else {
  VAR_8->size += sizeof(*VAR_10);
 }


 VAR_11 = VAR_9->ppRawDesc;
 if (VAR_11) {
  while (*VAR_11) {
   FUNC_2(VAR_8, *VAR_11);
   VAR_11++;
  }
 }
 if (VAR_9->pPacketSize == ((void*)0)) {

  VAR_8->err = VAR_7;
  return;
 }
 VAR_13 = VAR_9->pPacketSize->mps[VAR_8->usb_speed];
 if (VAR_13 == 0) {

  VAR_8->err = VAR_7;
  return;
 } else if (VAR_13 == VAR_6) {

  VAR_13 = 0;
 }





 if (VAR_8->buf) {
  VAR_10 = FUNC_0(VAR_8->buf, VAR_12);
  if (VAR_15 == VAR_4)
   VAR_10->bLength = sizeof(*VAR_10) + 2;
  else
   VAR_10->bLength = sizeof(*VAR_10);
  VAR_10->bDescriptorType = VAR_0;
  VAR_10->bEndpointAddress = VAR_14;
  VAR_10->bmAttributes = VAR_9->bmAttributes;
  FUNC_1(VAR_10->wMaxPacketSize, VAR_13);



  if (VAR_9->pIntervals &&
      VAR_9->pIntervals->bInterval[VAR_8->usb_speed]) {
   VAR_10->bInterval =
       VAR_9->pIntervals->bInterval[VAR_8->usb_speed];
  } else {
   switch (VAR_15) {
   case 132:
   case 131:
    VAR_10->bInterval = 0;
    break;
   case 130:
    switch (VAR_8->usb_speed) {
    case 128:
    case 129:
     VAR_10->bInterval = 1;
     break;
    default:
     VAR_10->bInterval = 4;
     break;
    }
    break;
   default:
    switch (VAR_8->usb_speed) {
    case 128:
    case 129:
     VAR_10->bInterval = 1;
     break;
    default:
     VAR_10->bInterval = 1;
     break;
    }
    break;
   }
  }
 }
 VAR_8->bNumEndpoints++;
}
