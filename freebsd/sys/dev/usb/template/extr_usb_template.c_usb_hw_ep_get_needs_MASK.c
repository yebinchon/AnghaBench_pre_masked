
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct usb_interface_descriptor {scalar_t__ bAlternateSetting; } ;
struct usb_hw_ep_scratch_sub {int max_frame_size; int hw_endpoint_in; int hw_endpoint_out; int needs_in; int needs_out; int needs_ep_type; } ;
struct usb_hw_ep_scratch {int* bmInAlloc; int* bmOutAlloc; int udev; TYPE_1__* methods; struct usb_hw_ep_scratch_sub* ep_max; int cd; struct usb_hw_ep_scratch_sub* ep; } ;
struct usb_hw_ep_profile {int max_in_frame_size; int max_out_frame_size; } ;
struct usb_endpoint_descriptor {int bmAttributes; int bEndpointAddress; int wMaxPacketSize; } ;
struct usb_descriptor {scalar_t__ bDescriptorType; int bLength; } ;
typedef enum usb_dev_speed { ____Placeholder_usb_dev_speed } usb_dev_speed ;
struct TYPE_2__ {int (* get_hw_ep_profile ) (int ,struct usb_hw_ep_profile const**,int) ;} ;


 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,struct usb_hw_ep_profile const**,int) ;
 struct usb_descriptor* FUNC_3 (int ,struct usb_descriptor*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static uint8_t
FUNC_5(struct usb_hw_ep_scratch *VAR_8,
    uint8_t VAR_9, uint8_t VAR_10)
{
 const struct usb_hw_ep_profile *VAR_11;
 struct usb_hw_ep_scratch_sub *VAR_12;
 struct usb_hw_ep_scratch_sub *VAR_13;
 struct usb_hw_ep_scratch_sub *VAR_14;
 struct usb_hw_ep_scratch_sub *VAR_15;
 struct usb_descriptor *VAR_16;
 struct usb_interface_descriptor *VAR_17;
 struct usb_endpoint_descriptor *VAR_18;
 enum usb_dev_speed VAR_19;
 uint16_t VAR_20;
 uint16_t VAR_21;
 uint8_t VAR_22;

 VAR_12 = VAR_8->ep_max;
 VAR_13 = VAR_8->ep_max;
 VAR_15 = VAR_8->ep + VAR_6;
 VAR_14 = VAR_8->ep_max;
 VAR_16 = ((void*)0);
 VAR_19 = FUNC_4(VAR_8->udev);

repeat:

 while ((VAR_16 = FUNC_3(VAR_8->cd, VAR_16))) {

  if ((VAR_16->bDescriptorType == VAR_1) &&
      (VAR_16->bLength >= sizeof(*VAR_17))) {

   VAR_17 = (void *)VAR_16;

   if (VAR_17->bAlternateSetting == 0) {

    VAR_12 = VAR_14;
   } else {

    VAR_13 = VAR_12;
   }
  }
  if ((VAR_16->bDescriptorType == VAR_0) &&
      (VAR_16->bLength >= sizeof(*VAR_18))) {

   VAR_18 = (void *)VAR_16;

   goto handle_endpoint_desc;
  }
 }
 VAR_8->ep_max = VAR_14;
 return (0);

handle_endpoint_desc:
 VAR_21 = (VAR_18->bmAttributes & VAR_5);

 if (VAR_21 == VAR_9) {

  if (VAR_13 == VAR_15) {

   return (1);
  }
  VAR_20 = FUNC_1(VAR_18->wMaxPacketSize);
  if ((VAR_20 & 0xF800) &&
      (VAR_19 == VAR_7)) {

   VAR_21 = (VAR_20 >> 11) & 3;
   VAR_20 &= 0x7FF;
   if (VAR_21 == 1) {
    VAR_20 *= 2;
   } else {
    VAR_20 *= 3;
   }
  }




  VAR_22 = (VAR_18->bEndpointAddress & VAR_2);
  if (VAR_22 != 0) {


   (VAR_8->methods->get_hw_ep_profile)
       (VAR_8->udev, &VAR_11, VAR_22);
   if (VAR_11 == ((void*)0)) {

    FUNC_0(0, "Endpoint profile %u "
        "does not exist\n", VAR_22);
    return (1);
   }

   if (VAR_9 == VAR_3) {
    VAR_8->bmInAlloc[VAR_22 / 8] |=
        (1 << (VAR_22 % 8));
    VAR_8->bmOutAlloc[VAR_22 / 8] |=
        (1 << (VAR_22 % 8));
    if ((VAR_11->max_in_frame_size < VAR_20) ||
        (VAR_11->max_out_frame_size < VAR_20)) {
     FUNC_0(0, "Endpoint profile %u "
         "has too small buffer\n", VAR_22);
     return (1);
    }
   } else if (VAR_18->bEndpointAddress & VAR_4) {
    VAR_8->bmInAlloc[VAR_22 / 8] |=
        (1 << (VAR_22 % 8));
    if (VAR_11->max_in_frame_size < VAR_20) {
     FUNC_0(0, "Endpoint profile %u "
         "has too small buffer\n", VAR_22);
     return (1);
    }
   } else {
    VAR_8->bmOutAlloc[VAR_22 / 8] |=
        (1 << (VAR_22 % 8));
    if (VAR_11->max_out_frame_size < VAR_20) {
     FUNC_0(0, "Endpoint profile %u "
         "has too small buffer\n", VAR_22);
     return (1);
    }
   }
  } else if (VAR_10) {


   if (VAR_20 >
       VAR_13->max_frame_size) {
    return (1);
   }
   if (VAR_18->bEndpointAddress & VAR_4) {
    VAR_18->bEndpointAddress =
        VAR_13->hw_endpoint_in;
   } else {
    VAR_18->bEndpointAddress =
        VAR_13->hw_endpoint_out;
   }

  } else {


   if (VAR_13->max_frame_size < VAR_20) {
    VAR_13->max_frame_size = VAR_20;
   }
   if (VAR_21 == VAR_3) {
    VAR_13->needs_in = 1;
    VAR_13->needs_out = 1;
   } else {
    if (VAR_18->bEndpointAddress & VAR_4) {
     VAR_13->needs_in = 1;
    } else {
     VAR_13->needs_out = 1;
    }
   }
   VAR_13->needs_ep_type = VAR_9;
  }

  VAR_13++;
  if (VAR_14 < VAR_13) {
   VAR_14 = VAR_13;
  }
 }
 goto repeat;
}
