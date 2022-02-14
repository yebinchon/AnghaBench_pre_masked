
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_10__ {scalar_t__ usb_mode; } ;
struct usb_xfer {scalar_t__ nframes; int endpointno; int max_packet_count; void** td_start; int max_packet_size; TYPE_3__ flags_int; TYPE_2__* endpoint; } ;
struct usb_setup_params {int hc_max_packet_size; int hc_max_packet_count; int hc_max_frame_size; int* size; TYPE_6__* udev; scalar_t__ buf; scalar_t__ err; struct usb_xfer* curr_xfer; } ;
struct usb_hw_ep_profile {int dummy; } ;
struct dwc_otg_td {int max_packet_count; void* obj_next; void* ep_type; void* ep_no; int max_packet_size; int tt_index; } ;
struct TYPE_13__ {int device_index; TYPE_5__* parent_hs_hub; } ;
struct TYPE_11__ {scalar_t__ bDeviceProtocol; } ;
struct TYPE_12__ {int device_index; TYPE_4__ ddesc; } ;
struct TYPE_9__ {TYPE_1__* edesc; } ;
struct TYPE_8__ {int bmAttributes; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 struct dwc_otg_td* FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_6__*,struct usb_hw_ep_profile const**,void*) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (struct usb_setup_params*) ;

__attribute__((used)) static void
FUNC_4(struct usb_setup_params *VAR_7)
{
 struct usb_xfer *VAR_8;
 void *VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;
 uint8_t VAR_12;
 uint8_t VAR_13;

 VAR_8 = VAR_7->curr_xfer;






 VAR_7->hc_max_packet_size = 0x500;
 VAR_7->hc_max_packet_count = 3;
 VAR_7->hc_max_frame_size = 3 * 0x500;

 FUNC_3(VAR_7);




 VAR_13 = (VAR_8->endpoint->edesc->bmAttributes & VAR_3);

 if (VAR_13 == VAR_2) {

  VAR_10 = VAR_8->nframes + 1 + 1
      + 1 + 1 ;
 } else {

  VAR_10 = VAR_8->nframes + 1 ;
 }




 if (VAR_7->err)
  return;




 VAR_9 = ((void*)0);

 VAR_12 = VAR_8->endpointno & VAR_1;




 if (VAR_8->flags_int.usb_mode == VAR_6) {
  const struct usb_hw_ep_profile *VAR_14;

  FUNC_1(VAR_7->udev, &VAR_14, VAR_12);

  if (VAR_14 == ((void*)0)) {

   VAR_7->err = VAR_4;
   return;
  }
 }


 VAR_7->size[0] += ((-VAR_7->size[0]) & (VAR_5 - 1));

 for (VAR_11 = 0; VAR_11 != VAR_10; VAR_11++) {

  struct dwc_otg_td *VAR_15;

  if (VAR_7->buf) {

   VAR_15 = FUNC_0(VAR_7->buf, VAR_7->size[0]);


   if (FUNC_2(VAR_7->udev)) {
    if (VAR_7->udev->parent_hs_hub->ddesc.bDeviceProtocol == VAR_0)
     VAR_15->tt_index = VAR_7->udev->device_index;
    else
     VAR_15->tt_index = VAR_7->udev->parent_hs_hub->device_index;
   } else {
    VAR_15->tt_index = VAR_7->udev->device_index;
   }


   VAR_15->max_packet_size = VAR_8->max_packet_size;
   VAR_15->max_packet_count = VAR_8->max_packet_count;

   if (VAR_15->max_packet_count == 0 || VAR_15->max_packet_count > 3)
    VAR_15->max_packet_count = 1;
   VAR_15->ep_no = VAR_12;
   VAR_15->ep_type = VAR_13;
   VAR_15->obj_next = VAR_9;

   VAR_9 = VAR_15;
  }
  VAR_7->size[0] += sizeof(*VAR_15);
 }

 VAR_8->td_start[0] = VAR_9;
}
