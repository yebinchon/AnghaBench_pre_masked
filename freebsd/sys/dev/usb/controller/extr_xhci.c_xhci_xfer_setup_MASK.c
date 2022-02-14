
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct xhci_td {struct usb_page_cache* page_cache; void* obj_next; int td_self; } ;
struct TYPE_2__ {int bdma_enable; size_t curr_dma_set; scalar_t__ control_xfr; scalar_t__ isochronous_xfr; } ;
struct usb_xfer {int nframes; int max_data_length; int max_hc_frame_size; TYPE_1__ flags_int; void** td_start; } ;
struct usb_setup_params {int hc_max_packet_size; int hc_max_packet_count; scalar_t__ buf; scalar_t__ err; int hc_max_frame_size; struct usb_xfer* curr_xfer; } ;
struct usb_page_search {int physaddr; struct xhci_td* buffer; } ;
struct usb_page_cache {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_page_cache*) ;
 int FUNC_1 (struct usb_page_cache*,int ,struct usb_page_search*) ;
 int FUNC_2 (struct usb_setup_params*) ;
 scalar_t__ FUNC_3 (struct usb_setup_params*,struct usb_page_cache**,int,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct usb_setup_params *VAR_3)
{
 struct usb_page_search VAR_4;
 struct usb_page_cache *VAR_5;
 struct usb_xfer *VAR_6;
 void *VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;

 VAR_6 = VAR_3->curr_xfer;
 VAR_3->hc_max_packet_size = 0x400;
 VAR_3->hc_max_packet_count = 16 * 3;
 VAR_3->hc_max_frame_size = VAR_2;

 VAR_6->flags_int.bdma_enable = 1;

 FUNC_2(VAR_3);

 if (VAR_6->flags_int.isochronous_xfr) {
  VAR_8 = ((1 * VAR_6->nframes)
      + (VAR_6->max_data_length / VAR_6->max_hc_frame_size));
 } else if (VAR_6->flags_int.control_xfr) {
  VAR_8 = ((2 * VAR_6->nframes) + 1
      + (VAR_6->max_data_length / VAR_6->max_hc_frame_size));
 } else {
  VAR_8 = ((2 * VAR_6->nframes)
      + (VAR_6->max_data_length / VAR_6->max_hc_frame_size));
 }

alloc_dma_set:

 if (VAR_3->err)
  return;




 VAR_7 = ((void*)0);

 if (FUNC_3(
     VAR_3, &VAR_5, sizeof(struct xhci_td),
     VAR_1, VAR_8)) {
  VAR_3->err = VAR_0;
  return;
 }
 if (VAR_3->buf) {
  for (VAR_9 = 0; VAR_9 != VAR_8; VAR_9++) {
   struct xhci_td *VAR_10;

   FUNC_1(VAR_5 + VAR_9, 0, &VAR_4);

   VAR_10 = VAR_4.buffer;


   VAR_10->td_self = VAR_4.physaddr;
   VAR_10->obj_next = VAR_7;
   VAR_10->page_cache = VAR_5 + VAR_9;

   VAR_7 = VAR_10;

   FUNC_0(VAR_5 + VAR_9);
  }
 }
 VAR_6->td_start[VAR_6->flags_int.curr_dma_set] = VAR_7;

 if (!VAR_6->flags_int.curr_dma_set) {
  VAR_6->flags_int.curr_dma_set = 1;
  goto alloc_dma_set;
 }
}
