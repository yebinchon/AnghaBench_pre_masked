
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {struct usb_page_cache* page_cache; void* obj_next; void* qh_self; void* td_self; } ;
typedef TYPE_3__ uhci_td_t ;
typedef int uhci_softc_t ;
typedef TYPE_3__ uhci_qh_t ;
struct TYPE_6__ {int bdma_enable; int bdma_no_post_sync; size_t curr_dma_set; } ;
struct usb_xfer {int nframes; int max_data_length; int max_frame_size; TYPE_2__ flags_int; void** qh_start; void** td_start; struct usb_page_cache* buf_fixup; } ;
struct usb_setup_params {int hc_max_packet_size; int hc_max_packet_count; int hc_max_frame_size; int bufsize; scalar_t__ buf; void* err; int * methods; struct usb_xfer* curr_xfer; TYPE_1__* udev; } ;
struct usb_page_search {int physaddr; TYPE_3__* buffer; } ;
struct usb_page_cache {int dummy; } ;
struct TYPE_5__ {int bus; } ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct usb_page_cache*) ;
 int FUNC_3 (struct usb_page_cache*,int ,struct usb_page_search*) ;
 int FUNC_4 (struct usb_setup_params*) ;
 scalar_t__ FUNC_5 (struct usb_setup_params*,struct usb_page_cache**,int,int,int) ;

__attribute__((used)) static void
FUNC_6(struct usb_setup_params *VAR_11)
{
 struct usb_page_search VAR_12;
 struct usb_page_cache *VAR_13;
 uhci_softc_t *VAR_14;
 struct usb_xfer *VAR_15;
 void *VAR_16;
 uint32_t VAR_17;
 uint32_t VAR_18;
 uint32_t VAR_19;
 uint32_t VAR_20;
 uint16_t VAR_21;

 VAR_14 = FUNC_0(VAR_11->udev->bus);
 VAR_15 = VAR_11->curr_xfer;

 VAR_11->hc_max_packet_size = 0x500;
 VAR_11->hc_max_packet_count = 1;
 VAR_11->hc_max_frame_size = 0x500;




 if (VAR_11->methods == &VAR_8) {
  VAR_15->flags_int.bdma_enable = 1;
  VAR_15->flags_int.bdma_no_post_sync = 1;

  FUNC_4(VAR_11);



  VAR_18 = 1;
  VAR_17 = ((2 * VAR_15->nframes) + 1
      + (VAR_15->max_data_length / VAR_15->max_frame_size));

 } else if (VAR_11->methods == &VAR_7) {
  VAR_15->flags_int.bdma_enable = 1;
  VAR_15->flags_int.bdma_no_post_sync = 1;

  FUNC_4(VAR_11);

  VAR_18 = 1;
  VAR_17 = ((2 * VAR_15->nframes)
      + (VAR_15->max_data_length / VAR_15->max_frame_size));

 } else if (VAR_11->methods == &VAR_9) {
  VAR_15->flags_int.bdma_enable = 1;
  VAR_15->flags_int.bdma_no_post_sync = 1;

  FUNC_4(VAR_11);

  VAR_18 = 1;
  VAR_17 = ((2 * VAR_15->nframes)
      + (VAR_15->max_data_length / VAR_15->max_frame_size));

 } else if (VAR_11->methods == &VAR_10) {
  VAR_15->flags_int.bdma_enable = 1;
  VAR_15->flags_int.bdma_no_post_sync = 1;

  FUNC_4(VAR_11);

  VAR_18 = 0;
  VAR_17 = VAR_15->nframes;

 } else {

  FUNC_4(VAR_11);

  VAR_18 = 0;
  VAR_17 = 0;
 }

 if (VAR_11->err) {
  return;
 }





 VAR_19 = (VAR_11->bufsize / VAR_6) + 1;





 VAR_21 = VAR_15->max_frame_size;
 VAR_20 = 0;
 while (VAR_21) {
  VAR_21 >>= 1;
  VAR_20++;
 }


 if (!(VAR_15->max_frame_size &
     (VAR_15->max_frame_size - 1))) {
  VAR_20--;
 }







 if (VAR_20 < 3) {
  VAR_20 = 3;
 }
 VAR_21 = (1 << VAR_20);

 if (FUNC_5(
     VAR_11, &VAR_13, VAR_15->max_frame_size,
     VAR_21, VAR_19)) {
  VAR_11->err = VAR_5;
  return;
 }
 VAR_15->buf_fixup = VAR_13;

alloc_dma_set:

 if (VAR_11->err) {
  return;
 }
 VAR_16 = ((void*)0);

 if (FUNC_5(
     VAR_11, &VAR_13, sizeof(uhci_td_t),
     VAR_4, VAR_17)) {
  VAR_11->err = VAR_5;
  return;
 }
 if (VAR_11->buf) {
  for (VAR_20 = 0; VAR_20 != VAR_17; VAR_20++) {
   uhci_td_t *VAR_22;

   FUNC_3(VAR_13 + VAR_20, 0, &VAR_12);

   VAR_22 = VAR_12.buffer;


   if ((VAR_11->methods == &VAR_7) ||
       (VAR_11->methods == &VAR_8) ||
       (VAR_11->methods == &VAR_9)) {

    VAR_22->td_self = FUNC_1(VAR_12.physaddr |
        VAR_1 | VAR_2);
   } else {
    VAR_22->td_self = FUNC_1(VAR_12.physaddr |
        VAR_1);
   }

   VAR_22->obj_next = VAR_16;
   VAR_22->page_cache = VAR_13 + VAR_20;

   VAR_16 = VAR_22;

   FUNC_2(VAR_13 + VAR_20);
  }
 }
 VAR_15->td_start[VAR_15->flags_int.curr_dma_set] = VAR_16;

 VAR_16 = ((void*)0);

 if (FUNC_5(
     VAR_11, &VAR_13, sizeof(uhci_qh_t),
     VAR_3, VAR_18)) {
  VAR_11->err = VAR_5;
  return;
 }
 if (VAR_11->buf) {
  for (VAR_20 = 0; VAR_20 != VAR_18; VAR_20++) {
   uhci_qh_t *VAR_23;

   FUNC_3(VAR_13 + VAR_20, 0, &VAR_12);

   VAR_23 = VAR_12.buffer;


   VAR_23->qh_self = FUNC_1(VAR_12.physaddr | VAR_0);
   VAR_23->obj_next = VAR_16;
   VAR_23->page_cache = VAR_13 + VAR_20;

   VAR_16 = VAR_23;

   FUNC_2(VAR_13 + VAR_20);
  }
 }
 VAR_15->qh_start[VAR_15->flags_int.curr_dma_set] = VAR_16;

 if (!VAR_15->flags_int.curr_dma_set) {
  VAR_15->flags_int.curr_dma_set = 1;
  goto alloc_dma_set;
 }
}
