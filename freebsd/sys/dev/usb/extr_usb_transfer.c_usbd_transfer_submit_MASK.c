
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t usb_frcount_t ;
struct usb_xfer_root {int dma_q; TYPE_2__* udev; struct usb_bus* bus; } ;
struct TYPE_9__ {int open; int transferring; int can_cancel_immed; int short_xfer_ok; int short_frames_ok; scalar_t__ bdma_enable; scalar_t__ control_xfr; scalar_t__ bdma_setup; scalar_t__ did_close; scalar_t__ did_dma_delay; } ;
struct TYPE_8__ {scalar_t__ short_xfer_ok; scalar_t__ short_frames_ok; scalar_t__ stall_pipe; } ;
struct usb_xfer {scalar_t__ nframes; scalar_t__ sumlen; size_t stream_id; scalar_t__* frlengths; size_t max_frame_count; struct usb_xfer_root* xroot; TYPE_4__ flags_int; TYPE_3__ flags; TYPE_5__* endpoint; scalar_t__ error; scalar_t__ aframes; scalar_t__ actlen; scalar_t__ wait_queue; } ;
struct usb_bus {int dummy; } ;
struct TYPE_10__ {int * endpoint_q; TYPE_1__* methods; } ;
struct TYPE_7__ {scalar_t__ state; } ;
struct TYPE_6__ {int (* open ) (struct usb_xfer*) ;} ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct usb_bus*) ;
 int FUNC_2 (struct usb_bus*,int ) ;
 int FUNC_3 (struct usb_bus*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (struct usb_xfer*) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (struct usb_xfer*,int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 int FUNC_7 (int *,struct usb_xfer*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (struct usb_xfer*) ;
 scalar_t__ FUNC_10 (struct usb_xfer*) ;
 int FUNC_11 (struct usb_xfer*) ;
 int FUNC_12 (struct usb_xfer*,int ) ;
 int FUNC_13 (struct usb_xfer*,int) ;

void
FUNC_14(struct usb_xfer *VAR_7)
{
 struct usb_xfer_root *VAR_8;
 struct usb_bus *VAR_9;
 usb_frcount_t VAR_10;

 VAR_8 = VAR_7->xroot;
 VAR_9 = VAR_8->bus;

 FUNC_0("xfer=%p, endpoint=%p, nframes=%d, dir=%s\n",
     VAR_7, VAR_7->endpoint, VAR_7->nframes, FUNC_4(VAR_7) ?
     "read" : "write");
 FUNC_5(VAR_7, VAR_1);
 FUNC_2(VAR_9, VAR_0);


 if (!VAR_7->flags_int.open) {
  VAR_7->flags_int.open = 1;

  FUNC_0("open\n");

  FUNC_1(VAR_9);
  (VAR_7->endpoint->methods->open) (VAR_7);
  FUNC_3(VAR_9);
 }

 VAR_7->flags_int.transferring = 1;
 if (VAR_7->wait_queue) {
  FUNC_1(VAR_9);
  FUNC_11(VAR_7);
  FUNC_3(VAR_9);
 }

 VAR_7->flags_int.did_dma_delay = 0;


 VAR_7->flags_int.did_close = 0;






 VAR_7->flags_int.can_cancel_immed = 0;


 VAR_7->sumlen = 0;
 VAR_7->actlen = 0;
 VAR_7->aframes = 0;


 VAR_7->error = 0;


 if (VAR_8->udev->state < VAR_6) {
  FUNC_1(VAR_9);




  FUNC_12(VAR_7, VAR_3);
  FUNC_3(VAR_9);
  return;
 }


 if (VAR_7->nframes == 0) {
  if (VAR_7->flags.stall_pipe) {




   FUNC_0("xfer=%p nframes=0: stall "
       "or clear stall!\n", VAR_7);
   FUNC_1(VAR_9);
   VAR_7->flags_int.can_cancel_immed = 1;

   FUNC_7(&VAR_7->endpoint->
       endpoint_q[VAR_7->stream_id], VAR_7);
   FUNC_3(VAR_9);
   return;
  }
  FUNC_1(VAR_9);
  FUNC_12(VAR_7, VAR_4);
  FUNC_3(VAR_9);
  return;
 }


 for (VAR_10 = 0; VAR_10 != VAR_7->nframes; VAR_10++) {

  VAR_7->frlengths[VAR_10 + VAR_7->max_frame_count] = VAR_7->frlengths[VAR_10];

  VAR_7->sumlen += VAR_7->frlengths[VAR_10];
  if (VAR_7->sumlen < VAR_7->frlengths[VAR_10]) {

   FUNC_1(VAR_9);
   FUNC_12(VAR_7, VAR_4);
   FUNC_3(VAR_9);
   return;
  }
 }



 VAR_7->flags_int.short_xfer_ok = 0;
 VAR_7->flags_int.short_frames_ok = 0;



 if (VAR_7->flags_int.control_xfr) {

  if (FUNC_10(VAR_7)) {
   FUNC_1(VAR_9);
   FUNC_12(VAR_7, VAR_5);
   FUNC_3(VAR_9);
   return;
  }
 }




 if (FUNC_4(VAR_7)) {

  if (VAR_7->flags.short_frames_ok) {
   VAR_7->flags_int.short_xfer_ok = 1;
   VAR_7->flags_int.short_frames_ok = 1;
  } else if (VAR_7->flags.short_xfer_ok) {
   VAR_7->flags_int.short_xfer_ok = 1;


   if (VAR_7->flags_int.control_xfr) {
    VAR_7->flags_int.short_frames_ok = 1;
   }
  }
 }
 FUNC_9(VAR_7);
}
