
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct uss820dci_td {int ep_index; int support_multi_buffer; void* obj_next; int max_packet_size; } ;
struct uss820dci_softc {int dummy; } ;
struct usb_xfer {scalar_t__ nframes; int endpointno; void** td_start; int max_packet_size; } ;
struct usb_setup_params {int hc_max_packet_size; int hc_max_packet_count; int hc_max_frame_size; int* size; int * methods; scalar_t__ buf; scalar_t__ err; TYPE_1__* udev; struct usb_xfer* curr_xfer; } ;
struct usb_hw_ep_profile {scalar_t__ support_multi_buffer; } ;
struct TYPE_2__ {int bus; } ;


 int VAR_0 ;
 struct uss820dci_td* FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct uss820dci_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct usb_setup_params*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*,struct usb_hw_ep_profile const**,int) ;

__attribute__((used)) static void
FUNC_4(struct usb_setup_params *VAR_7)
{
 const struct usb_hw_ep_profile *VAR_8;
 struct uss820dci_softc *VAR_9;
 struct usb_xfer *VAR_10;
 void *VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;
 uint8_t VAR_14;

 VAR_9 = FUNC_1(VAR_7->udev->bus);
 VAR_10 = VAR_7->curr_xfer;






 VAR_7->hc_max_packet_size = 0x500;
 VAR_7->hc_max_packet_count = 1;
 VAR_7->hc_max_frame_size = 0x500;

 FUNC_2(VAR_7);




 if (VAR_7->methods == &VAR_4) {

  VAR_12 = VAR_10->nframes + 1 + 1 ;

 } else if (VAR_7->methods == &VAR_3) {

  VAR_12 = VAR_10->nframes + 1 ;

 } else if (VAR_7->methods == &VAR_5) {

  VAR_12 = VAR_10->nframes + 1 ;

 } else if (VAR_7->methods == &VAR_6) {

  VAR_12 = VAR_10->nframes + 1 ;

 } else {

  VAR_12 = 0;
 }




 if (VAR_7->err) {
  return;
 }



 VAR_11 = ((void*)0);




 if (VAR_12) {

  VAR_14 = VAR_10->endpointno & VAR_0;
  FUNC_3(VAR_7->udev, &VAR_8, VAR_14);

  if (VAR_8 == ((void*)0)) {

   VAR_7->err = VAR_1;
   return;
  }
 } else {
  VAR_14 = 0;
  VAR_8 = ((void*)0);
 }


 VAR_7->size[0] += ((-VAR_7->size[0]) & (VAR_2 - 1));

 for (VAR_13 = 0; VAR_13 != VAR_12; VAR_13++) {

  struct uss820dci_td *VAR_15;

  if (VAR_7->buf) {

   VAR_15 = FUNC_0(VAR_7->buf, VAR_7->size[0]);


   VAR_15->max_packet_size = VAR_10->max_packet_size;
   VAR_15->ep_index = VAR_14;
   if (VAR_8->support_multi_buffer &&
       (VAR_7->methods != &VAR_4)) {
    VAR_15->support_multi_buffer = 1;
   }
   VAR_15->obj_next = VAR_11;

   VAR_11 = VAR_15;
  }
  VAR_7->size[0] += sizeof(*VAR_15);
 }

 VAR_10->td_start[0] = VAR_11;
}
