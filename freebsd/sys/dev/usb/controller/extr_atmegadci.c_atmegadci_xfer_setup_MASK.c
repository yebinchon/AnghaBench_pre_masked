
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct usb_xfer {scalar_t__ nframes; int endpointno; void** td_start; int max_packet_size; TYPE_2__* endpoint; } ;
struct usb_setup_params {int hc_max_packet_size; int hc_max_packet_count; int hc_max_frame_size; int* size; scalar_t__ buf; scalar_t__ err; TYPE_3__* udev; struct usb_xfer* curr_xfer; } ;
struct usb_hw_ep_profile {scalar_t__ support_multi_buffer; } ;
struct atmegadci_td {int ep_no; int support_multi_buffer; void* obj_next; int max_packet_size; } ;
struct atmegadci_softc {int dummy; } ;
struct TYPE_6__ {int bus; } ;
struct TYPE_5__ {TYPE_1__* edesc; } ;
struct TYPE_4__ {int bmAttributes; } ;


 struct atmegadci_softc* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct atmegadci_td* FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*,struct usb_hw_ep_profile const**,int) ;
 int FUNC_3 (struct usb_setup_params*) ;

__attribute__((used)) static void
FUNC_4(struct usb_setup_params *VAR_5)
{
 const struct usb_hw_ep_profile *VAR_6;
 struct atmegadci_softc *VAR_7;
 struct usb_xfer *VAR_8;
 void *VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;
 uint8_t VAR_12;

 VAR_7 = FUNC_0(VAR_5->udev->bus);
 VAR_8 = VAR_5->curr_xfer;






 VAR_5->hc_max_packet_size = 0x500;
 VAR_5->hc_max_packet_count = 1;
 VAR_5->hc_max_frame_size = 0x500;

 FUNC_3(VAR_5);




 if ((VAR_8->endpoint->edesc->bmAttributes & VAR_2) == VAR_1) {

  VAR_10 = VAR_8->nframes + 1 + 1
      + 1 ;
 } else {

  VAR_10 = VAR_8->nframes + 1 ;
 }




 if (VAR_5->err)
  return;




 VAR_9 = ((void*)0);




 VAR_12 = VAR_8->endpointno & VAR_0;
 FUNC_2(VAR_5->udev, &VAR_6, VAR_12);

 if (VAR_6 == ((void*)0)) {

  VAR_5->err = VAR_3;
  return;
 }


 VAR_5->size[0] += ((-VAR_5->size[0]) & (VAR_4 - 1));

 for (VAR_11 = 0; VAR_11 != VAR_10; VAR_11++) {

  struct atmegadci_td *VAR_13;

  if (VAR_5->buf) {

   VAR_13 = FUNC_1(VAR_5->buf, VAR_5->size[0]);


   VAR_13->max_packet_size = VAR_8->max_packet_size;
   VAR_13->ep_no = VAR_12;
   if (VAR_6->support_multi_buffer) {
    VAR_13->support_multi_buffer = 1;
   }
   VAR_13->obj_next = VAR_9;

   VAR_9 = VAR_13;
  }
  VAR_5->size[0] += sizeof(*VAR_13);
 }

 VAR_8->td_start[0] = VAR_9;
}
