
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint16_t ;
struct usb_hw_ep_scratch_sub {scalar_t__ needs_out; scalar_t__ needs_in; } ;
struct usb_hw_ep_scratch {struct usb_hw_ep_scratch_sub* ep; struct usb_hw_ep_scratch_sub* ep_max; struct usb_device* udev; struct usb_bus_methods const* methods; void* cd; } ;
struct usb_hw_ep_profile {int max_in_frame_size; } ;
struct usb_device_descriptor {int bMaxPacketSize; } ;
struct TYPE_4__ {struct usb_hw_ep_scratch* hw_ep_scratch; } ;
struct usb_device {scalar_t__ speed; TYPE_2__ scratch; TYPE_1__* bus; } ;
struct usb_descriptor {scalar_t__ bDescriptorType; int bLength; } ;
struct usb_bus_methods {int (* get_hw_ep_profile ) (struct usb_device*,struct usb_hw_ep_profile const**,int ) ;} ;
struct TYPE_3__ {struct usb_bus_methods* methods; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct usb_hw_ep_scratch*,int ,int) ;
 int FUNC_2 (struct usb_device*,struct usb_hw_ep_profile const**,int ) ;
 scalar_t__ FUNC_3 (struct usb_hw_ep_scratch*,struct usb_hw_ep_scratch_sub*,int) ;
 scalar_t__ FUNC_4 (struct usb_hw_ep_scratch*,int ,int) ;
 int FUNC_5 (struct usb_hw_ep_profile const*,int ,int ) ;

__attribute__((used)) static usb_error_t
FUNC_6(struct usb_device *VAR_8,
    struct usb_descriptor *VAR_9)
{
 struct usb_hw_ep_scratch *VAR_10;
 struct usb_hw_ep_scratch_sub *VAR_11;
 const struct usb_hw_ep_profile *VAR_12;
 const struct usb_bus_methods *VAR_13;
 struct usb_device_descriptor *VAR_14;
 uint16_t VAR_15;

 if (VAR_9 == ((void*)0))
  return (VAR_6);


 VAR_13 = VAR_8->bus->methods;

 if (VAR_13->get_hw_ep_profile == ((void*)0))
  return (VAR_6);

 if (VAR_9->bDescriptorType == VAR_1) {

  if (VAR_9->bLength < sizeof(*VAR_14))
   return (VAR_6);

  VAR_14 = (void *)VAR_9;


  (VAR_13->get_hw_ep_profile) (VAR_8, &VAR_12, 0);
  if (VAR_12 == ((void*)0)) {
   return (VAR_6);
  }
  if (!FUNC_5(VAR_12, VAR_3, 0)) {
   FUNC_0(0, "Endpoint 0 does not "
       "support control\n");
   return (VAR_6);
  }
  VAR_15 = VAR_14->bMaxPacketSize;

  if (VAR_8->speed == VAR_7) {



   while (1) {

    if (VAR_12->max_in_frame_size >= VAR_15) {
     break;
    }

    VAR_15 /= 2;


    if (VAR_15 < 8) {
     return (VAR_6);
    }
   }

   VAR_14->bMaxPacketSize = VAR_15;

  } else {

   if (VAR_15 == 255) {
    VAR_15 = 512;
   }

   if (VAR_12->max_in_frame_size < VAR_15) {
    return (VAR_6);
   }
  }
  return (0);
 }
 if (VAR_9->bDescriptorType != VAR_0)
  return (VAR_6);
 if (VAR_9->bLength < sizeof(*(VAR_10->cd)))
  return (VAR_6);

 VAR_10 = VAR_8->scratch.hw_ep_scratch;

 FUNC_1(VAR_10, 0, sizeof(*VAR_10));

 VAR_10->ep_max = VAR_10->ep;
 VAR_10->cd = (void *)VAR_9;
 VAR_10->methods = VAR_13;
 VAR_10->udev = VAR_8;



 if (FUNC_4(VAR_10, VAR_5, 0) ||
     FUNC_4(VAR_10, VAR_4, 0) ||
     FUNC_4(VAR_10, VAR_3, 0) ||
     FUNC_4(VAR_10, VAR_2, 0)) {
  FUNC_0(0, "Could not get needs\n");
  return (VAR_6);
 }
 for (VAR_11 = VAR_10->ep; VAR_11 != VAR_10->ep_max; VAR_11++) {

  while (VAR_11->needs_in || VAR_11->needs_out) {





   if (FUNC_3(VAR_10, VAR_11, 1) &&
       FUNC_3(VAR_10, VAR_11, 0)) {
    FUNC_0(0, "Could not find match\n");
    return (VAR_6);
   }
  }
 }

 VAR_10->ep_max = VAR_10->ep;



 if (FUNC_4(VAR_10, VAR_5, 1) ||
     FUNC_4(VAR_10, VAR_4, 1) ||
     FUNC_4(VAR_10, VAR_3, 1) ||
     FUNC_4(VAR_10, VAR_2, 1)) {
  FUNC_0(0, "Could not update endpoint address\n");
  return (VAR_6);
 }
 return (0);
}
