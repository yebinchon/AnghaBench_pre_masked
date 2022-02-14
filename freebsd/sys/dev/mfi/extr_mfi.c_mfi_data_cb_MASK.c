
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


union mfi_sgl {TYPE_4__* sg64; TYPE_3__* sg32; TYPE_1__* sg_skinny; } ;
struct mfi_softc {int mfi_flags; int mfi_sge_size; int mfi_io_lock; int mfi_buffer_dmat; } ;
struct mfi_sg_skinny {int dummy; } ;
struct mfi_frame_header {scalar_t__ cmd; int flags; int sg_count; } ;
struct mfi_command {int cm_error; int cm_stp_len; int cm_flags; int cm_total_frame_size; int cm_extra_frames; int cm_dmamap; TYPE_2__* cm_frame; union mfi_sgl* cm_sg; struct mfi_softc* cm_sc; } ;
struct TYPE_11__ {int ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_5__ bus_dma_segment_t ;
struct TYPE_10__ {int len; scalar_t__ addr; } ;
struct TYPE_9__ {int len; scalar_t__ addr; } ;
struct TYPE_8__ {struct mfi_frame_header header; } ;
struct TYPE_7__ {int len; scalar_t__ flag; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_2 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void
FUNC_7(void *VAR_16, bus_dma_segment_t *VAR_17, int VAR_18, int VAR_19)
{
 struct mfi_frame_header *VAR_20;
 struct mfi_command *VAR_21;
 union mfi_sgl *VAR_22;
 struct mfi_softc *VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27;
 int VAR_28, VAR_29;

 VAR_21 = (struct mfi_command *)VAR_16;
 VAR_23 = VAR_21->cm_sc;
 VAR_20 = &VAR_21->cm_frame->header;
 VAR_22 = VAR_21->cm_sg;
 if ((VAR_29 = FUNC_4(&VAR_23->mfi_io_lock)) == 0)
  FUNC_3(&VAR_23->mfi_io_lock);

 if (VAR_19) {
  FUNC_6("error %d in callback\n", VAR_19);
  VAR_21->cm_error = VAR_19;
  FUNC_1(VAR_23, VAR_21);
  goto out;
 }






 if (((VAR_21->cm_frame->header.cmd == VAR_7) ||
     (VAR_21->cm_frame->header.cmd == VAR_4) ||
     (VAR_21->cm_frame->header.cmd == VAR_5)) &&
     (VAR_23->mfi_flags & VAR_10)) {
  for (VAR_24 = 0; VAR_24 < VAR_18; VAR_24++) {
   VAR_22->sg_skinny[VAR_24].addr = VAR_17[VAR_24].ds_addr;
   VAR_22->sg_skinny[VAR_24].len = VAR_17[VAR_24].ds_len;
   VAR_22->sg_skinny[VAR_24].flag = 0;
  }
  VAR_20->flags |= VAR_13 | VAR_14;
  VAR_28 = sizeof(struct mfi_sg_skinny);
  VAR_20->sg_count = VAR_18;
 } else {
  VAR_25 = 0;
  if (VAR_21->cm_frame->header.cmd == VAR_8) {
   VAR_26 = VAR_21->cm_stp_len;
   if ((VAR_23->mfi_flags & VAR_9) == 0) {
    VAR_22->sg32[VAR_25].addr = VAR_17[0].ds_addr;
    VAR_22->sg32[VAR_25++].len = VAR_26;
   } else {
    VAR_22->sg64[VAR_25].addr = VAR_17[0].ds_addr;
    VAR_22->sg64[VAR_25++].len = VAR_26;
   }
  } else
   VAR_26 = 0;
  if ((VAR_23->mfi_flags & VAR_9) == 0) {
   for (VAR_24 = 0; VAR_24 < VAR_18; VAR_24++) {
    VAR_22->sg32[VAR_25].addr = VAR_17[VAR_24].ds_addr + VAR_26;
    VAR_22->sg32[VAR_25++].len = VAR_17[VAR_24].ds_len - VAR_26;
    VAR_26 = 0;
   }
  } else {
   for (VAR_24 = 0; VAR_24 < VAR_18; VAR_24++) {
    VAR_22->sg64[VAR_25].addr = VAR_17[VAR_24].ds_addr + VAR_26;
    VAR_22->sg64[VAR_25++].len = VAR_17[VAR_24].ds_len - VAR_26;
    VAR_26 = 0;
   }
   VAR_20->flags |= VAR_14;
  }
  VAR_20->sg_count = VAR_25;
  VAR_28 = VAR_23->mfi_sge_size;
 }

 VAR_27 = 0;
 if (VAR_21->cm_flags & VAR_2) {
  VAR_27 |= VAR_0;
  VAR_20->flags |= VAR_11;
 }
 if (VAR_21->cm_flags & VAR_3) {
  VAR_27 |= VAR_1;
  VAR_20->flags |= VAR_12;
 }
 FUNC_0(VAR_23->mfi_buffer_dmat, VAR_21->cm_dmamap, VAR_27);
 VAR_21->cm_flags |= VAR_6;







 VAR_21->cm_total_frame_size += (VAR_23->mfi_sge_size * VAR_18);
 VAR_21->cm_extra_frames = (VAR_21->cm_total_frame_size - 1) / VAR_15;

 if ((VAR_19 = FUNC_2(VAR_23, VAR_21)) != 0) {
  FUNC_6("error %d in callback from mfi_send_frame\n", VAR_19);
  VAR_21->cm_error = VAR_19;
  FUNC_1(VAR_23, VAR_21);
  goto out;
 }

out:

 if (VAR_29 == 0)
  FUNC_5(&VAR_23->mfi_io_lock);

 return;
}
