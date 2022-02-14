
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct usb_xfer {int nframes; int endpointno; int address; int interval; void** td_start; int max_packet_size; TYPE_2__* endpoint; } ;
struct usb_setup_params {int hc_max_packet_size; int hc_max_packet_count; int hc_max_frame_size; int* size; scalar_t__ buf; TYPE_4__* udev; scalar_t__ err; struct usb_xfer* curr_xfer; } ;
struct usb_hw_ep_profile {int dummy; } ;
struct saf1761_otg_td {int ep_index; int ep_type; int dw1_value; int interval; void* obj_next; scalar_t__ uframe; int max_packet_size; } ;
struct saf1761_otg_softc {int dummy; } ;
struct TYPE_7__ {scalar_t__ usb_mode; } ;
struct TYPE_8__ {int speed; int hs_port_no; int hs_hub_addr; int * parent_hs_hub; TYPE_3__ flags; int bus; } ;
struct TYPE_6__ {TYPE_1__* edesc; } ;
struct TYPE_5__ {int bmAttributes; } ;


 struct saf1761_otg_softc* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct saf1761_otg_td* FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;


 int FUNC_2 (TYPE_4__*,struct usb_hw_ep_profile const**,int) ;
 int FUNC_3 (struct usb_setup_params*) ;

__attribute__((used)) static void
FUNC_4(struct usb_setup_params *VAR_8)
{
 struct saf1761_otg_softc *VAR_9;
 struct usb_xfer *VAR_10;
 void *VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;
 uint8_t VAR_15;
 uint8_t VAR_16;

 VAR_9 = FUNC_0(VAR_8->udev->bus);
 VAR_10 = VAR_8->curr_xfer;






 VAR_8->hc_max_packet_size = 0x500;
 VAR_8->hc_max_packet_count = 1;
 VAR_8->hc_max_frame_size = 0x500;

 FUNC_3(VAR_8);




 VAR_16 = (VAR_10->endpoint->edesc->bmAttributes & VAR_4);

 if (VAR_16 == VAR_2) {

  VAR_13 = VAR_10->nframes + 1 + 1 ;

 } else {
  VAR_13 = VAR_10->nframes + 1 ;
 }




 if (VAR_8->err)
  return;




 VAR_11 = ((void*)0);

 VAR_15 = VAR_10->endpointno & VAR_1;




 if (VAR_8->udev->flags.usb_mode == VAR_7) {
  const struct usb_hw_ep_profile *VAR_17;

  FUNC_2(VAR_8->udev, &VAR_17, VAR_15);

  if (VAR_17 == ((void*)0)) {

   VAR_8->err = VAR_5;
   return;
  }
 }

 VAR_12 = (VAR_10->address << 3) | (VAR_16 << 12);

 switch (VAR_8->udev->speed) {
 case 129:
 case 128:

  if (VAR_8->udev->parent_hs_hub != ((void*)0)) {
   VAR_12 |= VAR_0;
   VAR_12 |= (VAR_8->udev->hs_port_no << 18);
   VAR_12 |= (VAR_8->udev->hs_hub_addr << 25);
   if (VAR_8->udev->speed == 128)
    VAR_12 |= (1 << 17);
  }
  break;
 default:
  break;
 }


 VAR_8->size[0] += ((-VAR_8->size[0]) & (VAR_6 - 1));

 for (VAR_14 = 0; VAR_14 != VAR_13; VAR_14++) {

  struct saf1761_otg_td *VAR_18;

  if (VAR_8->buf) {

   VAR_18 = FUNC_1(VAR_8->buf, VAR_8->size[0]);


   VAR_18->max_packet_size = VAR_10->max_packet_size;
   VAR_18->ep_index = VAR_15;
   VAR_18->ep_type = VAR_16;
   VAR_18->dw1_value = VAR_12;
   VAR_18->uframe = 0;

   if (VAR_16 == VAR_3) {
    if (VAR_10->interval > 32)
     VAR_18->interval = (32 / 2) << 3;
    else
     VAR_18->interval = (VAR_10->interval / 2) << 3;
   } else {
    VAR_18->interval = 0;
   }
   VAR_18->obj_next = VAR_11;

   VAR_11 = VAR_18;
  }
  VAR_8->size[0] += sizeof(*VAR_18);
 }

 VAR_10->td_start[0] = VAR_11;
}
