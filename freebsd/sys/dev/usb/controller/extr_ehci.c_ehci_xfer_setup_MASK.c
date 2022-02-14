
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int bdma_enable; size_t curr_dma_set; } ;
struct usb_xfer {int nframes; int max_data_length; int max_hc_frame_size; TYPE_2__ flags_int; void** qh_start; void** td_start; } ;
struct usb_setup_params {int hc_max_packet_size; int hc_max_packet_count; int hc_max_frame_size; scalar_t__ speed; scalar_t__ buf; void* err; int * methods; struct usb_xfer* curr_xfer; TYPE_1__* udev; } ;
struct usb_page_search {int physaddr; TYPE_3__* buffer; } ;
struct usb_page_cache {int dummy; } ;
typedef int ehci_softc_t ;
struct TYPE_9__ {struct usb_page_cache* page_cache; void* obj_next; void* qh_self; void* qtd_self; void* sitd_self; void* itd_self; } ;
typedef TYPE_3__ ehci_sitd_t ;
typedef TYPE_3__ ehci_qtd_t ;
typedef TYPE_3__ ehci_qh_t ;
typedef TYPE_3__ ehci_itd_t ;
struct TYPE_7__ {int bus; } ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (struct usb_page_cache*) ;
 int FUNC_3 (struct usb_page_cache*,int ,struct usb_page_search*) ;
 int FUNC_4 (struct usb_setup_params*) ;
 scalar_t__ FUNC_5 (struct usb_setup_params*,struct usb_page_cache**,int,int ,int) ;
 int FUNC_6 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_7(struct usb_setup_params *VAR_17)
{
 struct usb_page_search VAR_18;
 struct usb_page_cache *VAR_19;
 ehci_softc_t *VAR_20;
 struct usb_xfer *VAR_21;
 void *VAR_22;
 uint32_t VAR_23;
 uint32_t VAR_24;
 uint32_t VAR_25;
 uint32_t VAR_26;
 uint32_t VAR_27;

 VAR_20 = FUNC_0(VAR_17->udev->bus);
 VAR_21 = VAR_17->curr_xfer;

 VAR_23 = 0;
 VAR_24 = 0;
 VAR_25 = 0;
 VAR_26 = 0;




 if (VAR_17->methods == &VAR_13) {
  VAR_17->hc_max_packet_size = 0x400;
  VAR_17->hc_max_packet_count = 1;
  VAR_17->hc_max_frame_size = VAR_6;
  VAR_21->flags_int.bdma_enable = 1;

  FUNC_4(VAR_17);

  VAR_24 = 1;
  VAR_23 = ((2 * VAR_21->nframes) + 1
      + (VAR_21->max_data_length / VAR_21->max_hc_frame_size));

 } else if (VAR_17->methods == &VAR_12) {

  VAR_17->hc_max_packet_size = 0x400;
  VAR_17->hc_max_packet_count = 1;
  VAR_17->hc_max_frame_size = VAR_6;
  VAR_21->flags_int.bdma_enable = 1;

  FUNC_4(VAR_17);

  VAR_24 = 1;
  VAR_23 = ((2 * VAR_21->nframes)
      + (VAR_21->max_data_length / VAR_21->max_hc_frame_size));

 } else if (VAR_17->methods == &VAR_14) {

  if (VAR_17->speed == VAR_11) {
   VAR_17->hc_max_packet_size = 0x400;
   VAR_17->hc_max_packet_count = 3;
  } else if (VAR_17->speed == VAR_10) {
   VAR_17->hc_max_packet_size = VAR_9;
   VAR_17->hc_max_packet_count = 1;
  } else {
   VAR_17->hc_max_packet_size = VAR_9 / 8;
   VAR_17->hc_max_packet_count = 1;
  }

  VAR_17->hc_max_frame_size = VAR_6;
  VAR_21->flags_int.bdma_enable = 1;

  FUNC_4(VAR_17);

  VAR_24 = 1;
  VAR_23 = ((2 * VAR_21->nframes)
      + (VAR_21->max_data_length / VAR_21->max_hc_frame_size));

 } else if (VAR_17->methods == &VAR_15) {

  VAR_17->hc_max_packet_size = 0x3FF;
  VAR_17->hc_max_packet_count = 1;
  VAR_17->hc_max_frame_size = 0x3FF;
  VAR_21->flags_int.bdma_enable = 1;

  FUNC_4(VAR_17);

  VAR_25 = VAR_21->nframes;

 } else if (VAR_17->methods == &VAR_16) {

  VAR_17->hc_max_packet_size = 0x400;
  VAR_17->hc_max_packet_count = 3;
  VAR_17->hc_max_frame_size = 0xC00;
  VAR_21->flags_int.bdma_enable = 1;

  FUNC_4(VAR_17);

  VAR_26 = ((VAR_21->nframes + 7) / 8) <<
      FUNC_6(VAR_21);

 } else {

  VAR_17->hc_max_packet_size = 0x400;
  VAR_17->hc_max_packet_count = 1;
  VAR_17->hc_max_frame_size = 0x400;

  FUNC_4(VAR_17);
 }

alloc_dma_set:

 if (VAR_17->err) {
  return;
 }



 VAR_22 = ((void*)0);

 if (FUNC_5(
     VAR_17, &VAR_19, sizeof(ehci_itd_t),
     VAR_0, VAR_26)) {
  VAR_17->err = VAR_8;
  return;
 }
 if (VAR_17->buf) {
  for (VAR_27 = 0; VAR_27 != VAR_26; VAR_27++) {
   ehci_itd_t *VAR_28;

   FUNC_3(VAR_19 + VAR_27, 0, &VAR_18);

   VAR_28 = VAR_18.buffer;


   VAR_28->itd_self = FUNC_1(VAR_20, VAR_18.physaddr | VAR_1);
   VAR_28->obj_next = VAR_22;
   VAR_28->page_cache = VAR_19 + VAR_27;

   VAR_22 = VAR_28;

   FUNC_2(VAR_19 + VAR_27);
  }
 }
 if (FUNC_5(
     VAR_17, &VAR_19, sizeof(ehci_sitd_t),
     VAR_7, VAR_25)) {
  VAR_17->err = VAR_8;
  return;
 }
 if (VAR_17->buf) {
  for (VAR_27 = 0; VAR_27 != VAR_25; VAR_27++) {
   ehci_sitd_t *VAR_29;

   FUNC_3(VAR_19 + VAR_27, 0, &VAR_18);

   VAR_29 = VAR_18.buffer;


   VAR_29->sitd_self = FUNC_1(VAR_20, VAR_18.physaddr | VAR_3);
   VAR_29->obj_next = VAR_22;
   VAR_29->page_cache = VAR_19 + VAR_27;

   VAR_22 = VAR_29;

   FUNC_2(VAR_19 + VAR_27);
  }
 }
 if (FUNC_5(
     VAR_17, &VAR_19, sizeof(ehci_qtd_t),
     VAR_5, VAR_23)) {
  VAR_17->err = VAR_8;
  return;
 }
 if (VAR_17->buf) {
  for (VAR_27 = 0; VAR_27 != VAR_23; VAR_27++) {
   ehci_qtd_t *VAR_30;

   FUNC_3(VAR_19 + VAR_27, 0, &VAR_18);

   VAR_30 = VAR_18.buffer;


   VAR_30->qtd_self = FUNC_1(VAR_20, VAR_18.physaddr);
   VAR_30->obj_next = VAR_22;
   VAR_30->page_cache = VAR_19 + VAR_27;

   VAR_22 = VAR_30;

   FUNC_2(VAR_19 + VAR_27);
  }
 }
 VAR_21->td_start[VAR_21->flags_int.curr_dma_set] = VAR_22;

 VAR_22 = ((void*)0);

 if (FUNC_5(
     VAR_17, &VAR_19, sizeof(ehci_qh_t),
     VAR_4, VAR_24)) {
  VAR_17->err = VAR_8;
  return;
 }
 if (VAR_17->buf) {
  for (VAR_27 = 0; VAR_27 != VAR_24; VAR_27++) {
   ehci_qh_t *VAR_31;

   FUNC_3(VAR_19 + VAR_27, 0, &VAR_18);

   VAR_31 = VAR_18.buffer;


   VAR_31->qh_self = FUNC_1(VAR_20, VAR_18.physaddr | VAR_2);
   VAR_31->obj_next = VAR_22;
   VAR_31->page_cache = VAR_19 + VAR_27;

   VAR_22 = VAR_31;

   FUNC_2(VAR_19 + VAR_27);
  }
 }
 VAR_21->qh_start[VAR_21->flags_int.curr_dma_set] = VAR_22;

 if (!VAR_21->flags_int.curr_dma_set) {
  VAR_21->flags_int.curr_dma_set = 1;
  goto alloc_dma_set;
 }
}
