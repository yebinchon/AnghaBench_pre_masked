
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int xfer ;
typedef scalar_t__ usb_frlength_t ;
typedef void* usb_error_t ;
typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_21__ {int * command; int head; } ;
struct TYPE_20__ {int * command; int head; } ;
struct usb_xfer_root {int memory_size; scalar_t__ setup_refcount; TYPE_11__* bus; int done_p; TYPE_5__* done_m; TYPE_3__ dma_q; TYPE_2__ done_q; struct usb_device* udev; int dma_parent_tag; struct mtx* xfer_mtx; int cv_drain; void* xfer_page_cache_end; void* xfer_page_cache_start; void* dma_page_cache_end; void* dma_page_cache_start; void* memory_base; } ;
struct usb_xfer {scalar_t__ speed; int hc_max_packet_count; scalar_t__ err; int* size; scalar_t__ stream_id; void* xfer_length_ptr; void* xfer_page_cache_ptr; void* dma_page_cache_ptr; void* dma_page_ptr; void* dma_tag_p; scalar_t__ dma_tag_max; struct usb_endpoint* endpoint; struct usb_xfer* curr_xfer; int * methods; int timeout_handle; struct usb_xfer_root* xroot; void* priv_sc; int address; struct usb_config const* curr_setup; void* buf; struct usb_device* udev; } ;
struct usb_setup_params {scalar_t__ speed; int hc_max_packet_count; scalar_t__ err; int* size; scalar_t__ stream_id; void* xfer_length_ptr; void* xfer_page_cache_ptr; void* dma_page_cache_ptr; void* dma_page_ptr; void* dma_tag_p; scalar_t__ dma_tag_max; struct usb_endpoint* endpoint; struct usb_setup_params* curr_xfer; int * methods; int timeout_handle; struct usb_xfer_root* xroot; void* priv_sc; int address; struct usb_config const* curr_setup; void* buf; struct usb_device* udev; } ;
struct usb_endpoint {scalar_t__ ep_mode; scalar_t__ refcount_alloc; int * methods; } ;
struct TYPE_27__ {TYPE_8__* xfer_setup; } ;
struct TYPE_25__ {scalar_t__ usb_mode; } ;
struct usb_device {TYPE_11__* bus; TYPE_9__ scratch; int address; TYPE_7__ flags; } ;
struct TYPE_24__ {scalar_t__ no_pipe_ok; } ;
struct usb_config {scalar_t__ bufsize; size_t if_index; scalar_t__ stream_id; scalar_t__ usb_mode; TYPE_6__ flags; int * callback; } ;
struct mtx {int dummy; } ;
typedef int info ;
struct TYPE_26__ {struct usb_xfer dummy; struct usb_xfer parm; } ;
struct TYPE_22__ {int * pm_callback; } ;
struct TYPE_23__ {struct usb_xfer_root* xroot; TYPE_4__ hdr; } ;
struct TYPE_19__ {int tag; } ;
struct TYPE_18__ {TYPE_10__* methods; int bus_mtx; int dma_bits; TYPE_1__* dma_parent_tag; } ;
struct TYPE_17__ {int (* xfer_setup ) (struct usb_xfer*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,...) ;
 struct mtx VAR_0 ;
 int FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (void*,int) ;
 int FUNC_5 (TYPE_11__*) ;
 int FUNC_6 (TYPE_11__*) ;
 int FUNC_7 (TYPE_11__*) ;
 int FUNC_8 (TYPE_11__*) ;
 int FUNC_9 (TYPE_11__*) ;
 int FUNC_10 (TYPE_11__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_11 (int,int *,char*) ;
 int FUNC_12 (int *,char*) ;
 void* FUNC_13 (int,int ,int) ;
 int FUNC_14 (struct usb_xfer*,int ,int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (struct usb_xfer*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_17 (int *,int *,int ) ;
 struct usb_config const* VAR_22 ;
 struct usb_config const* VAR_23 ;
 int FUNC_18 (int *,void*,int ,struct mtx*,int *,int ,scalar_t__) ;
 int VAR_24 ;
 scalar_t__ FUNC_19 (struct usb_device*) ;
 int FUNC_20 (struct usb_device*) ;
 struct usb_endpoint* FUNC_21 (struct usb_device*,scalar_t__ const,struct usb_config const*) ;
 scalar_t__ FUNC_22 (struct usb_device*) ;
 scalar_t__ FUNC_23 (struct usb_config const*,int) ;
 int FUNC_24 (struct usb_xfer**,int) ;
 int FUNC_25 (struct usb_xfer_root*,int ) ;

usb_error_t
FUNC_26(struct usb_device *VAR_25,
    const uint8_t *VAR_26, struct usb_xfer **VAR_27,
    const struct usb_config *VAR_28, uint16_t VAR_29,
    void *VAR_30, struct mtx *VAR_31)
{
 const struct usb_config *VAR_32 = VAR_28 + VAR_29;
 const struct usb_config *VAR_33;
 struct usb_setup_params *VAR_34;
 struct usb_endpoint *VAR_35;
 struct usb_xfer_root *VAR_36;
 struct usb_xfer *VAR_37;
 void *VAR_38 = ((void*)0);
 usb_error_t VAR_39 = 0;
 uint16_t VAR_40;
 uint16_t VAR_41;
 uint8_t VAR_42;

 FUNC_11(VAR_17 | VAR_18, ((void*)0),
     "usbd_transfer_setup can sleep!");



 if (VAR_29 == 0) {
  FUNC_1(6, "setup array has zero length!\n");
  return (VAR_9);
 }
 if (VAR_26 == ((void*)0)) {
  FUNC_1(6, "ifaces array is NULL!\n");
  return (VAR_9);
 }
 if (VAR_31 == ((void*)0)) {
  FUNC_1(6, "using global lock\n");
  VAR_31 = &VAR_0;
 }



 for (VAR_33 = VAR_28, VAR_40 = 0;
     VAR_33 != VAR_32; VAR_33++, VAR_40++) {
  if (VAR_33->bufsize == (usb_frlength_t)-1) {
   VAR_39 = VAR_8;
   FUNC_0("invalid bufsize\n");
  }
  if (VAR_33->callback == ((void*)0)) {
   VAR_39 = VAR_11;
   FUNC_0("no callback\n");
  }
  VAR_27[VAR_40] = ((void*)0);
 }

 if (VAR_39)
  return (VAR_39);


 VAR_42 = FUNC_19(VAR_25);

 VAR_41 = 0;
 VAR_36 = ((void*)0);

 VAR_34 = &VAR_25->scratch.xfer_setup[0].parm;
 FUNC_14(VAR_34, 0, sizeof(*VAR_34));

 VAR_34->udev = VAR_25;
 VAR_34->speed = FUNC_22(VAR_25);
 VAR_34->hc_max_packet_count = 1;

 if (VAR_34->speed >= VAR_16) {
  VAR_34->err = VAR_9;
  goto done;
 }


 while (1) {

  if (VAR_38) {




   VAR_36 = FUNC_4(VAR_38, 0);

   VAR_36->memory_base = VAR_38;
   VAR_36->memory_size = VAR_34->size[0];





   VAR_36->xfer_page_cache_start = FUNC_4(VAR_38, VAR_34->size[5]);
   VAR_36->xfer_page_cache_end = FUNC_4(VAR_38, VAR_34->size[2]);

   FUNC_12(&VAR_36->cv_drain, "WDRAIN");

   VAR_36->xfer_mtx = VAR_31;







   VAR_36->bus = VAR_25->bus;
   VAR_36->udev = VAR_25;

   FUNC_3(&VAR_36->done_q.head);
   VAR_36->done_q.command = &VAR_24;




   VAR_36->done_m[0].hdr.pm_callback = &VAR_21;
   VAR_36->done_m[0].xroot = VAR_36;
   VAR_36->done_m[1].hdr.pm_callback = &VAR_21;
   VAR_36->done_m[1].xroot = VAR_36;







   if (VAR_28 == VAR_22 ||
       VAR_28 == VAR_23)
    VAR_36->done_p =
        FUNC_5(VAR_25->bus);
   else if (VAR_31 == &VAR_0)
    VAR_36->done_p =
        FUNC_6(VAR_25->bus);
   else if (FUNC_23(VAR_28, VAR_29))
    VAR_36->done_p =
        FUNC_8(VAR_25->bus);
   else
    VAR_36->done_p =
        FUNC_9(VAR_25->bus);
  }


  VAR_34->size[0] = 0;
  VAR_34->buf = VAR_38;
  VAR_34->size[0] += sizeof(VAR_36[0]);

  for (VAR_33 = VAR_28, VAR_40 = 0;
      VAR_33 != VAR_32; VAR_33++, VAR_40++) {


   if (VAR_33->callback == ((void*)0)) {
    continue;
   }

   VAR_35 = FUNC_21(VAR_25,
       VAR_26[VAR_33->if_index], VAR_33);
   if ((VAR_35 == ((void*)0)) || (VAR_35->methods == ((void*)0)) ||
       ((VAR_35->ep_mode != VAR_6) &&
       (VAR_35->ep_mode != VAR_5)) ||
       (VAR_33->stream_id != 0 &&
       (VAR_33->stream_id >= VAR_14 ||
       (VAR_35->ep_mode != VAR_6)))) {
    if (VAR_33->flags.no_pipe_ok)
     continue;
    if ((VAR_33->usb_mode != VAR_15) &&
        (VAR_33->usb_mode != VAR_25->flags.usb_mode))
     continue;
    VAR_34->err = VAR_12;
    goto done;
   }


   VAR_34->size[0] += ((-VAR_34->size[0]) & (VAR_13 - 1));


   VAR_34->curr_setup = VAR_33;

   if (VAR_38) {




    VAR_37 = FUNC_4(VAR_38, VAR_34->size[0]);
    VAR_37->address = VAR_25->address;
    VAR_37->priv_sc = VAR_30;
    VAR_37->xroot = VAR_36;

    FUNC_17(&VAR_37->timeout_handle,
        &VAR_25->bus->bus_mtx, 0);
   } else {







    VAR_37 = &VAR_25->scratch.xfer_setup[0].dummy;
    FUNC_14(VAR_37, 0, sizeof(*VAR_37));
    VAR_41++;
   }


   VAR_37->endpoint = VAR_35;


   VAR_37->stream_id = VAR_33->stream_id;

   VAR_34->size[0] += sizeof(VAR_37[0]);
   VAR_34->methods = VAR_37->endpoint->methods;
   VAR_34->curr_xfer = VAR_37;





   (VAR_25->bus->methods->xfer_setup) (VAR_34);


   if (VAR_34->err)
    goto done;

   if (VAR_38) {
    FUNC_7(VAR_36->bus);
    if (VAR_37->endpoint->refcount_alloc >= VAR_7)
     VAR_34->err = VAR_9;

    VAR_37->endpoint->refcount_alloc++;

    if (VAR_37->endpoint->refcount_alloc == 0)
     FUNC_15("usbd_transfer_setup(): Refcount wrapped to zero\n");
    FUNC_10(VAR_36->bus);






    VAR_36->setup_refcount++;





    VAR_27[VAR_40] = VAR_37;
   }


   if (VAR_34->err)
    goto done;
  }

  if (VAR_38 != ((void*)0) || VAR_34->err != 0)
   goto done;


  if (VAR_41 == 0)
   goto done;


  VAR_34->size[0] += ((-VAR_34->size[0]) & (VAR_13 - 1));


  VAR_34->size[1] = VAR_34->size[0];
  VAR_34->dma_tag_max += 3 * FUNC_2(VAR_29, VAR_4);




  VAR_34->dma_tag_max += 8;

  VAR_34->dma_tag_p += VAR_34->dma_tag_max;

  VAR_34->size[0] += ((uint8_t *)VAR_34->dma_tag_p) -
      ((uint8_t *)0);


  VAR_34->size[0] += ((-VAR_34->size[0]) & (VAR_13 - 1));


  VAR_34->size[3] = VAR_34->size[0];

  VAR_34->size[0] += ((uint8_t *)VAR_34->dma_page_ptr) -
      ((uint8_t *)0);


  VAR_34->size[0] += ((-VAR_34->size[0]) & (VAR_13 - 1));


  VAR_34->size[4] = VAR_34->size[0];

  VAR_34->size[0] += ((uint8_t *)VAR_34->dma_page_cache_ptr) -
      ((uint8_t *)0);


  VAR_34->size[5] = VAR_34->size[0];

  VAR_34->size[0] += ((uint8_t *)VAR_34->xfer_page_cache_ptr) -
      ((uint8_t *)0);



  VAR_34->size[2] = VAR_34->size[0];


  VAR_34->size[0] += ((-VAR_34->size[0]) & (VAR_13 - 1));

  VAR_34->size[6] = VAR_34->size[0];

  VAR_34->size[0] += ((uint8_t *)VAR_34->xfer_length_ptr) -
      ((uint8_t *)0);


  VAR_34->size[0] += ((-VAR_34->size[0]) & (VAR_13 - 1));


  VAR_38 = FUNC_13(VAR_34->size[0], VAR_1, VAR_2 | VAR_3);

  if (VAR_38 == ((void*)0)) {
   VAR_34->err = VAR_10;
   FUNC_1(0, "cannot allocate memory block for "
       "configuration (%d bytes)\n",
       VAR_34->size[0]);
   goto done;
  }
  VAR_34->dma_tag_p = FUNC_4(VAR_38, VAR_34->size[1]);
  VAR_34->dma_page_ptr = FUNC_4(VAR_38, VAR_34->size[3]);
  VAR_34->dma_page_cache_ptr = FUNC_4(VAR_38, VAR_34->size[4]);
  VAR_34->xfer_page_cache_ptr = FUNC_4(VAR_38, VAR_34->size[5]);
  VAR_34->xfer_length_ptr = FUNC_4(VAR_38, VAR_34->size[6]);
 }

done:
 if (VAR_38) {
  if (VAR_36->setup_refcount == 0) {




   FUNC_7(VAR_36->bus);


   FUNC_25(VAR_36, 0);
  }
 }


 if (VAR_34->err)
  FUNC_24(VAR_27, VAR_29);

 VAR_39 = VAR_34->err;

 if (VAR_42)
  FUNC_20(VAR_25);

 return (VAR_39);
}
