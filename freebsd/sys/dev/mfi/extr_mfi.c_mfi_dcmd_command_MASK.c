
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union mfi_frame {int dummy; } mfi_frame ;
typedef void* uint32_t ;
struct mfi_softc {int mfi_io_lock; } ;
struct TYPE_5__ {size_t data_len; scalar_t__ scsi_status; scalar_t__ flags; scalar_t__ timeout; int cmd; } ;
struct mfi_dcmd_frame {int sgl; void* opcode; TYPE_2__ header; TYPE_3__* mbox; } ;
struct mfi_command {size_t cm_len; void* cm_private; void* cm_data; scalar_t__ cm_flags; int cm_total_frame_size; int * cm_sg; TYPE_3__* cm_frame; } ;
struct TYPE_4__ {void* context; } ;
struct TYPE_6__ {struct mfi_dcmd_frame dcmd; TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_3__*,int) ;
 void* FUNC_1 (size_t,int ,int) ;
 struct mfi_command* FUNC_2 (struct mfi_softc*) ;
 int FUNC_3 (struct mfi_command*) ;
 int FUNC_4 (int *,int ) ;

int
FUNC_5(struct mfi_softc *VAR_9, struct mfi_command **VAR_10,
    uint32_t VAR_11, void **VAR_12, size_t VAR_13)
{
 struct mfi_command *VAR_14;
 struct mfi_dcmd_frame *VAR_15;
 void *VAR_16 = ((void*)0);
 uint32_t VAR_17 = 0;

 FUNC_4(&VAR_9->mfi_io_lock, VAR_2);

 VAR_14 = FUNC_2(VAR_9);
 if (VAR_14 == ((void*)0))
  return (VAR_0);


 VAR_17 = VAR_14->cm_frame->header.context;
 FUNC_0(VAR_14->cm_frame, sizeof(union mfi_frame));
 VAR_14->cm_frame->header.context = VAR_17;

 if ((VAR_13 > 0) && (VAR_12 != ((void*)0))) {
  if (*VAR_12 == ((void*)0)) {
   VAR_16 = FUNC_1(VAR_13, VAR_6, VAR_7|VAR_8);
   if (VAR_16 == ((void*)0)) {
    FUNC_3(VAR_14);
    return (VAR_1);
   }
   *VAR_12 = VAR_16;
  } else {
   VAR_16 = *VAR_12;
  }
 }

 VAR_15 = &VAR_14->cm_frame->dcmd;
 FUNC_0(VAR_15->mbox, VAR_5);
 VAR_15->header.cmd = VAR_3;
 VAR_15->header.timeout = 0;
 VAR_15->header.flags = 0;
 VAR_15->header.data_len = VAR_13;
 VAR_15->header.scsi_status = 0;
 VAR_15->opcode = VAR_11;
 VAR_14->cm_sg = &VAR_15->sgl;
 VAR_14->cm_total_frame_size = VAR_4;
 VAR_14->cm_flags = 0;
 VAR_14->cm_data = VAR_16;
 VAR_14->cm_private = VAR_16;
 VAR_14->cm_len = VAR_13;

 *VAR_10 = VAR_14;
 if ((VAR_12 != ((void*)0)) && (*VAR_12 == ((void*)0)) && (VAR_16 != ((void*)0)))
  *VAR_12 = VAR_16;
 return (0);
}
