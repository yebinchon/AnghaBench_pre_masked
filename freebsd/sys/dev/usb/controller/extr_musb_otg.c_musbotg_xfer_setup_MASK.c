
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ usb_mode; } ;
struct usb_xfer {scalar_t__ nframes; int endpointno; int max_packet_size; int max_packet_count; void** td_start; int max_frame_size; TYPE_1__ flags_int; } ;
struct usb_setup_params {int hc_max_packet_size; int hc_max_frame_size; int hc_max_packet_count; int* size; scalar_t__ buf; scalar_t__ err; TYPE_2__* udev; int * methods; struct usb_xfer* curr_xfer; } ;
struct usb_hw_ep_profile {int dummy; } ;
struct musbotg_td {int reg_max_packet; int ep_no; void* obj_next; int max_frame_size; } ;
struct musbotg_softc {int dummy; } ;
struct TYPE_4__ {int bus; } ;


 struct musbotg_softc* FUNC_0 (int ) ;
 int VAR_0 ;
 struct musbotg_td* FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*,struct usb_hw_ep_profile const**,int) ;
 int FUNC_3 (struct usb_setup_params*) ;

__attribute__((used)) static void
FUNC_4(struct usb_setup_params *VAR_8)
{
 struct musbotg_softc *VAR_9;
 struct usb_xfer *VAR_10;
 void *VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;
 uint8_t VAR_14;

 VAR_9 = FUNC_0(VAR_8->udev->bus);
 VAR_10 = VAR_8->curr_xfer;






 VAR_8->hc_max_packet_size = 0x400;
 VAR_8->hc_max_frame_size = 0xc00;

 if ((VAR_8->methods == &VAR_7) ||
     (VAR_8->methods == &VAR_6))
  VAR_8->hc_max_packet_count = 3;
 else
  VAR_8->hc_max_packet_count = 1;

 FUNC_3(VAR_8);




 if (VAR_8->methods == &VAR_5) {

  VAR_12 = VAR_10->nframes + 1 + 1 ;

 } else if (VAR_8->methods == &VAR_4) {

  VAR_12 = VAR_10->nframes + 1 ;

 } else if (VAR_8->methods == &VAR_6) {

  VAR_12 = VAR_10->nframes + 1 ;

 } else if (VAR_8->methods == &VAR_7) {

  VAR_12 = VAR_10->nframes + 1 ;

 } else {

  VAR_12 = 0;
 }




 if (VAR_8->err) {
  return;
 }



 VAR_11 = ((void*)0);

 VAR_14 = VAR_10->endpointno & VAR_0;




 if (VAR_10->flags_int.usb_mode == VAR_3) {
  const struct usb_hw_ep_profile *VAR_15;

  FUNC_2(VAR_8->udev, &VAR_15, VAR_14);

  if (VAR_15 == ((void*)0)) {

   VAR_8->err = VAR_1;
   return;
  }
 }


 VAR_8->size[0] += ((-VAR_8->size[0]) & (VAR_2 - 1));

 for (VAR_13 = 0; VAR_13 != VAR_12; VAR_13++) {

  struct musbotg_td *VAR_16;

  if (VAR_8->buf) {

   VAR_16 = FUNC_1(VAR_8->buf, VAR_8->size[0]);


   VAR_16->max_frame_size = VAR_10->max_frame_size;
   VAR_16->reg_max_packet = VAR_10->max_packet_size |
       ((VAR_10->max_packet_count - 1) << 11);
   VAR_16->ep_no = VAR_14;
   VAR_16->obj_next = VAR_11;

   VAR_11 = VAR_16;
  }
  VAR_8->size[0] += sizeof(*VAR_16);
 }

 VAR_10->td_start[0] = VAR_11;
}
