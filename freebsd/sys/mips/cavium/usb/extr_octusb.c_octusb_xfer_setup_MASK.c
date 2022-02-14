
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct usb_xfer {int interval; int fps_shift; int max_packet_count; int nframes; void** td_start; struct octusb_td** qh_start; TYPE_4__* xroot; TYPE_3__* endpoint; int address; int endpointno; int max_packet_size; int max_frame_size; } ;
struct usb_setup_params {int hc_max_packet_size; int hc_max_packet_count; int hc_max_frame_size; scalar_t__ buf; void* err; struct usb_xfer* curr_xfer; TYPE_1__* udev; } ;
struct usb_page_search {struct octusb_td* buffer; int physaddr; } ;
struct usb_page_cache {int dummy; } ;
struct usb_device {struct usb_device* parent_hub; int port_index; } ;
struct octusb_td {int ep_type; int ep_interval; int ep_mult; void* obj_next; struct octusb_td* qh; struct octusb_td* fixup_buf; struct usb_page_cache* fixup_pc; int fixup_phys; int hs_hub_port; int hs_hub_addr; int root_port_index; int dev_speed; int dev_addr; int ep_num; int max_packet_size; int max_frame_size; void* sc; } ;
struct octusb_softc {int dummy; } ;
struct octusb_qh {int ep_type; int ep_interval; int ep_mult; void* obj_next; struct octusb_qh* qh; struct octusb_qh* fixup_buf; struct usb_page_cache* fixup_pc; int fixup_phys; int hs_hub_port; int hs_hub_addr; int root_port_index; int dev_speed; int dev_addr; int ep_num; int max_packet_size; int max_frame_size; void* sc; } ;
struct TYPE_10__ {int hs_port_no; int hs_hub_addr; struct usb_device* parent_hub; int port_index; } ;
struct TYPE_9__ {TYPE_5__* udev; int bus; } ;
struct TYPE_8__ {TYPE_2__* edesc; } ;
struct TYPE_7__ {int bmAttributes; } ;
struct TYPE_6__ {int bus; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct usb_page_cache*,int ,struct usb_page_search*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (struct usb_setup_params*) ;
 scalar_t__ FUNC_4 (struct usb_setup_params*,struct usb_page_cache**,int,int,int) ;

__attribute__((used)) static void
FUNC_5(struct usb_setup_params *VAR_5)
{
 struct usb_page_search VAR_6;
 struct usb_page_cache *VAR_7;
 struct octusb_softc *VAR_8;
 struct octusb_qh *VAR_9;
 struct usb_xfer *VAR_10;
 struct usb_device *VAR_11;
 void *VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;

 VAR_8 = FUNC_0(VAR_5->udev->bus);
 VAR_10 = VAR_5->curr_xfer;
 VAR_9 = ((void*)0);







 VAR_5->hc_max_packet_size = 0x400;
 VAR_5->hc_max_packet_count = 3;
 VAR_5->hc_max_frame_size = 0xC00;

 FUNC_3(VAR_5);

 if (VAR_5->err)
  return;



 if (FUNC_4(
     VAR_5, &VAR_7, sizeof(struct octusb_qh),
     VAR_3, 1)) {
  VAR_5->err = VAR_2;
  return;
 }
 if (VAR_5->buf) {
  FUNC_1(VAR_7, 0, &VAR_6);

  VAR_9 = VAR_6.buffer;



  VAR_9->sc = FUNC_0(VAR_10->xroot->bus);
  VAR_9->max_frame_size = VAR_10->max_frame_size;
  VAR_9->max_packet_size = VAR_10->max_packet_size;
  VAR_9->ep_num = VAR_10->endpointno;
  VAR_9->ep_type = VAR_10->endpoint->edesc->bmAttributes;
  VAR_9->dev_addr = VAR_10->address;
  VAR_9->dev_speed = FUNC_2(VAR_10->xroot->udev);
  VAR_9->root_port_index = VAR_10->xroot->udev->port_index;

  VAR_11 = VAR_10->xroot->udev->parent_hub;
  while(VAR_11 && VAR_11->parent_hub) {
   VAR_9->root_port_index = VAR_11->port_index;
   VAR_11 = VAR_11->parent_hub;
  }

  switch (VAR_10->endpoint->edesc->bmAttributes & VAR_1) {
  case 129:
   if (FUNC_2(VAR_10->xroot->udev) == VAR_4)
    VAR_9->ep_interval = VAR_10->interval * 8;
   else
    VAR_9->ep_interval = VAR_10->interval * 1;
   break;
  case 128:
   VAR_9->ep_interval = 1 << VAR_10->fps_shift;
   break;
  default:
   VAR_9->ep_interval = 0;
   break;
  }

  VAR_9->ep_mult = VAR_10->max_packet_count & 3;
  VAR_9->hs_hub_addr = VAR_10->xroot->udev->hs_hub_addr;
  VAR_9->hs_hub_port = VAR_10->xroot->udev->hs_port_no;
 }
 VAR_10->qh_start[0] = VAR_9;



 if (FUNC_4(
     VAR_5, &VAR_7, VAR_0,
     VAR_0, 1)) {
  VAR_5->err = VAR_2;
  return;
 }
 if (VAR_5->buf) {
  FUNC_1(VAR_7, 0, &VAR_6);

  VAR_9->fixup_phys = VAR_6.physaddr;
  VAR_9->fixup_pc = VAR_7;
  VAR_9->fixup_buf = VAR_6.buffer;
 }


 VAR_12 = ((void*)0);

 VAR_14 = VAR_10->nframes + 1 + 1 ;

 if (FUNC_4(
     VAR_5, &VAR_7, sizeof(struct octusb_td),
     VAR_3, VAR_14)) {
  VAR_5->err = VAR_2;
  return;
 }
 if (VAR_5->buf) {
  for (VAR_13 = 0; VAR_13 != VAR_14; VAR_13++) {
   struct octusb_td *VAR_15;

   FUNC_1(VAR_7 + VAR_13, 0, &VAR_6);

   VAR_15 = VAR_6.buffer;

   VAR_15->qh = VAR_9;
   VAR_15->obj_next = VAR_12;

   VAR_12 = VAR_15;
  }
 }
 VAR_10->td_start[0] = VAR_12;
}
