
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int bdma_enable; size_t curr_dma_set; } ;
struct usb_xfer {int nframes; int max_data_length; int max_hc_frame_size; TYPE_1__ flags_int; void** qh_start; void** td_start; } ;
struct usb_setup_params {int hc_max_packet_size; int hc_max_packet_count; int hc_max_frame_size; scalar_t__ buf; void* err; int * methods; struct usb_xfer* curr_xfer; } ;
struct usb_page_search {int physaddr; TYPE_2__* buffer; } ;
struct usb_page_cache {int dummy; } ;
struct TYPE_6__ {struct usb_page_cache* page_cache; void* obj_next; void* ed_self; void* itd_self; void* td_self; } ;
typedef TYPE_2__ ohci_td_t ;
typedef TYPE_2__ ohci_itd_t ;
typedef TYPE_2__ ohci_ed_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int,int ) ;
 void* FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct usb_page_cache*) ;
 int FUNC_3 (struct usb_page_cache*,int ,struct usb_page_search*) ;
 int FUNC_4 (struct usb_setup_params*) ;
 scalar_t__ FUNC_5 (struct usb_setup_params*,struct usb_page_cache**,int,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct usb_setup_params *VAR_10)
{
 struct usb_page_search VAR_11;
 struct usb_page_cache *VAR_12;
 struct usb_xfer *VAR_13;
 void *VAR_14;
 uint32_t VAR_15;
 uint32_t VAR_16;
 uint32_t VAR_17;
 uint32_t VAR_18;

 VAR_13 = VAR_10->curr_xfer;

 VAR_10->hc_max_packet_size = 0x500;
 VAR_10->hc_max_packet_count = 1;
 VAR_10->hc_max_frame_size = VAR_3;




 if (VAR_10->methods == &VAR_7) {
  VAR_13->flags_int.bdma_enable = 1;

  FUNC_4(VAR_10);

  VAR_16 = 0;
  VAR_15 = ((2 * VAR_13->nframes) + 1
      + (VAR_13->max_data_length / VAR_13->max_hc_frame_size));
  VAR_17 = 1;

 } else if (VAR_10->methods == &VAR_6) {
  VAR_13->flags_int.bdma_enable = 1;

  FUNC_4(VAR_10);

  VAR_16 = 0;
  VAR_15 = ((2 * VAR_13->nframes)
      + (VAR_13->max_data_length / VAR_13->max_hc_frame_size));
  VAR_17 = 1;

 } else if (VAR_10->methods == &VAR_8) {
  VAR_13->flags_int.bdma_enable = 1;

  FUNC_4(VAR_10);

  VAR_16 = 0;
  VAR_15 = ((2 * VAR_13->nframes)
      + (VAR_13->max_data_length / VAR_13->max_hc_frame_size));
  VAR_17 = 1;

 } else if (VAR_10->methods == &VAR_9) {
  VAR_13->flags_int.bdma_enable = 1;

  FUNC_4(VAR_10);

  VAR_16 = ((VAR_13->max_data_length / VAR_3) +
      FUNC_0(VAR_13->nframes, VAR_2) +
      1 );
  VAR_15 = 0;
  VAR_17 = 1;

 } else {

  FUNC_4(VAR_10);

  VAR_16 = 0;
  VAR_15 = 0;
  VAR_17 = 0;
 }

alloc_dma_set:

 if (VAR_10->err) {
  return;
 }
 VAR_14 = ((void*)0);

 if (FUNC_5(
     VAR_10, &VAR_12, sizeof(ohci_td_t),
     VAR_4, VAR_15)) {
  VAR_10->err = VAR_5;
  return;
 }
 if (VAR_10->buf) {
  for (VAR_18 = 0; VAR_18 != VAR_15; VAR_18++) {
   ohci_td_t *VAR_19;

   FUNC_3(VAR_12 + VAR_18, 0, &VAR_11);

   VAR_19 = VAR_11.buffer;


   VAR_19->td_self = FUNC_1(VAR_11.physaddr);
   VAR_19->obj_next = VAR_14;
   VAR_19->page_cache = VAR_12 + VAR_18;

   VAR_14 = VAR_19;

   FUNC_2(VAR_12 + VAR_18);
  }
 }
 if (FUNC_5(
     VAR_10, &VAR_12, sizeof(ohci_itd_t),
     VAR_1, VAR_16)) {
  VAR_10->err = VAR_5;
  return;
 }
 if (VAR_10->buf) {
  for (VAR_18 = 0; VAR_18 != VAR_16; VAR_18++) {
   ohci_itd_t *VAR_20;

   FUNC_3(VAR_12 + VAR_18, 0, &VAR_11);

   VAR_20 = VAR_11.buffer;


   VAR_20->itd_self = FUNC_1(VAR_11.physaddr);
   VAR_20->obj_next = VAR_14;
   VAR_20->page_cache = VAR_12 + VAR_18;

   VAR_14 = VAR_20;

   FUNC_2(VAR_12 + VAR_18);
  }
 }
 VAR_13->td_start[VAR_13->flags_int.curr_dma_set] = VAR_14;

 VAR_14 = ((void*)0);

 if (FUNC_5(
     VAR_10, &VAR_12, sizeof(ohci_ed_t),
     VAR_0, VAR_17)) {
  VAR_10->err = VAR_5;
  return;
 }
 if (VAR_10->buf) {
  for (VAR_18 = 0; VAR_18 != VAR_17; VAR_18++) {
   ohci_ed_t *VAR_21;

   FUNC_3(VAR_12 + VAR_18, 0, &VAR_11);

   VAR_21 = VAR_11.buffer;


   VAR_21->ed_self = FUNC_1(VAR_11.physaddr);
   VAR_21->obj_next = VAR_14;
   VAR_21->page_cache = VAR_12 + VAR_18;

   VAR_14 = VAR_21;

   FUNC_2(VAR_12 + VAR_18);
  }
 }
 VAR_13->qh_start[VAR_13->flags_int.curr_dma_set] = VAR_14;

 if (!VAR_13->flags_int.curr_dma_set) {
  VAR_13->flags_int.curr_dma_set = 1;
  goto alloc_dma_set;
 }
}
