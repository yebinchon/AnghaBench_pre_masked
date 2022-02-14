
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
struct twa_softc {int sg_size_factor; int ctlr_handle; int io_lock; int dma_tag; int ioctl_map; int ioctl_tag; } ;
struct TYPE_3__ {int (* tw_osl_callback ) (int *) ;} ;
struct tw_osli_req_context {int length; int flags; int real_length; scalar_t__ error_code; int req_handle; TYPE_1__ req_pkt; int state; int * real_data; int * data; int dma_map; int orig_req; struct twa_softc* ctlr; } ;
typedef scalar_t__ TW_INT32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int,int ,struct tw_osli_req_context*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,struct tw_osli_req_context*,int ) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_8 (int *,TYPE_1__*,int *) ;
 int FUNC_9 (int,struct twa_softc*,char*) ;
 int FUNC_10 (struct twa_softc*,int *) ;
 int FUNC_11 (struct twa_softc*,char*,int ,int ,int,char*,scalar_t__) ;
 int FUNC_12 (struct tw_osli_req_context*,int ) ;
 int VAR_15 ;

TW_INT32
FUNC_13(struct tw_osli_req_context *VAR_16)
{
 struct twa_softc *VAR_17 = VAR_16->ctlr;
 TW_INT32 VAR_18 = 0;

 FUNC_9(10, VAR_17, "entered");


 if (VAR_16->data != ((void*)0)) {
  if (((vm_offset_t)VAR_16->data % VAR_17->sg_size_factor) ||
   (VAR_16->length % VAR_17->sg_size_factor)) {
   VAR_16->flags |= VAR_9;

   VAR_16->real_data = VAR_16->data;
   VAR_16->real_length = VAR_16->length;
   VAR_16->length = (VAR_16->length +
    (VAR_17->sg_size_factor - 1)) &
    ~(VAR_17->sg_size_factor - 1);
   VAR_16->data = FUNC_3(VAR_16->length, VAR_7,
     VAR_3);
   if (VAR_16->data == ((void*)0)) {
    FUNC_11(VAR_17, "error = %d",
     VAR_5,
     VAR_4,
     0x201E,
     "Failed to allocate memory "
     "for bounce buffer",
     VAR_2);

    VAR_16->data = VAR_16->real_data;
    VAR_16->length = VAR_16->real_length;
    return(VAR_2);
   }
  }




  if (VAR_16->flags & VAR_13) {

   FUNC_4(VAR_17->io_lock);
   VAR_18 = FUNC_0(VAR_17->ioctl_tag, VAR_17->ioctl_map,
    VAR_16->data, VAR_16->length,
    VAR_15, VAR_16,
    VAR_0);
   FUNC_5(VAR_17->io_lock);
  } else if (VAR_16->flags & VAR_8) {
   VAR_18 = FUNC_1(VAR_17->dma_tag, VAR_16->dma_map,
    VAR_16->orig_req, VAR_15, VAR_16,
    VAR_0);
  } else {




   VAR_18 = FUNC_0(VAR_17->dma_tag, VAR_16->dma_map,
    VAR_16->data, VAR_16->length,
    VAR_15, VAR_16,
    VAR_0);
  }

  if (!VAR_18)
   VAR_18 = VAR_16->error_code;
  else {
   if (VAR_18 == VAR_1) {





    FUNC_4(VAR_17->io_lock);
    if (!(VAR_16->flags & VAR_12))
     VAR_16->flags |= VAR_11;
    FUNC_10(VAR_17, &(VAR_16->req_handle));
    FUNC_5(VAR_17->io_lock);
    VAR_18 = 0;
   } else {
    FUNC_11(VAR_17, "error = %d",
     VAR_5,
     VAR_4,
     0x9999,
     "Failed to map DMA memory "
     "for I/O request",
     VAR_18);
    VAR_16->flags |= VAR_10;

    if (VAR_16->flags &
     VAR_9) {
     FUNC_2(VAR_16->data, VAR_7);




     VAR_16->data = VAR_16->real_data;
     VAR_16->length = VAR_16->real_length;
    }
   }
  }

 } else {

  VAR_16->state = VAR_14;

  FUNC_12(VAR_16, VAR_6);
  if (VAR_16->flags & VAR_13)
   VAR_18 = FUNC_7(&VAR_17->ctlr_handle,
     &(VAR_16->req_pkt), &(VAR_16->req_handle));
  else
   VAR_18 = FUNC_8(&VAR_17->ctlr_handle,
     &(VAR_16->req_pkt), &(VAR_16->req_handle));
  if (VAR_18) {
   VAR_16->error_code = VAR_18;
   VAR_16->req_pkt.tw_osl_callback(&(VAR_16->req_handle));
  }
 }
 return(VAR_18);
}
