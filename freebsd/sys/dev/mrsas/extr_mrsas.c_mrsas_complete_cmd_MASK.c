
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_26__ {int low; int high; } ;
union desc_value {int word; TYPE_3__ u; } ;
typedef int uint64_t ;
typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct mrsas_softc {scalar_t__ adprecovery; int reply_alloc_sz; int* last_reply_idx; int reply_q_depth; int * msix_reg_offset; scalar_t__ msix_combined; scalar_t__ msix_enable; TYPE_11__* reply_desc_mem; struct mrsas_mfi_cmd** mfi_cmd_list; int fw_outstanding; TYPE_10__* load_balance_info; int ocr_chan; int mrsas_dev; struct mrsas_mpt_cmd** mpt_cmd_list; } ;
struct mrsas_mpt_cmd {int* sense; size_t pd_r1_lb; int cmd_completed; int callout_owner; size_t sync_cmd_idx; TYPE_16__* ccb_ptr; int cm_callout; TYPE_9__* io_request; struct mrsas_mpt_cmd* peer_cmd; int r1_alt_dev_handle; int load_balance; } ;
struct mrsas_mfi_cmd {TYPE_2__* frame; } ;
struct TYPE_30__ {int status; int exStatus; } ;
struct TYPE_31__ {TYPE_7__ raid_context; } ;
struct TYPE_32__ {int DataLength; TYPE_8__ RaidContext; } ;
struct TYPE_29__ {int target_id; } ;
struct TYPE_27__ {int status; int exStatus; } ;
struct TYPE_28__ {TYPE_4__ raid_context; } ;
struct TYPE_24__ {int flags; } ;
struct TYPE_25__ {TYPE_1__ hdr; } ;
struct TYPE_23__ {TYPE_6__ ccb_h; } ;
struct TYPE_22__ {int ReplyFlags; int SMID; } ;
struct TYPE_21__ {int TaskMID; int TaskType; } ;
struct TYPE_20__ {int DataLength; int Function; TYPE_5__ RaidContext; } ;
struct TYPE_19__ {int TmRequest; } ;
struct TYPE_18__ {int Words; } ;
struct TYPE_17__ {int * scsi_pending_cmds; } ;
typedef TYPE_10__* PLD_LOAD_BALANCE_INFO ;
typedef TYPE_11__ Mpi2ReplyDescriptorsUnion_t ;
typedef TYPE_12__ MR_TASK_MANAGE_REQUEST ;
typedef TYPE_13__ MRSAS_RAID_SCSI_IO_REQUEST ;
typedef TYPE_14__ MPI2_SCSI_TASK_MANAGE_REQUEST ;
typedef TYPE_15__ MPI2_SCSI_IO_SUCCESS_REPLY_DESCRIPTOR ;
typedef int MPI2_REPLY_DESCRIPTORS_UNION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mrsas_softc*,struct mrsas_mpt_cmd*) ;
 int FUNC_4 (struct mrsas_softc*,struct mrsas_mfi_cmd*,int) ;
 int FUNC_5 (struct mrsas_mpt_cmd*,TYPE_16__*,int,int,int,int*) ;
 int VAR_9 ;
 int FUNC_6 (struct mrsas_mfi_cmd*) ;
 int FUNC_7 (struct mrsas_mpt_cmd*) ;
 int FUNC_8 (struct mrsas_softc*,int ,int) ;
 int FUNC_9 (int ,int ) ;
 int VAR_10 ;
 int FUNC_10 (void*) ;

int
FUNC_11(struct mrsas_softc *VAR_11, u_int32_t VAR_12)
{
 Mpi2ReplyDescriptorsUnion_t *VAR_13;
 MPI2_SCSI_IO_SUCCESS_REPLY_DESCRIPTOR *VAR_14;
 MRSAS_RAID_SCSI_IO_REQUEST *VAR_15;
 struct mrsas_mpt_cmd *VAR_16, *VAR_17 = ((void*)0);
 struct mrsas_mfi_cmd *VAR_18;
 u_int8_t VAR_19, *VAR_20;
 u_int16_t VAR_21, VAR_22;
 u_int8_t VAR_23, VAR_24;
 union desc_value VAR_25;
 PLD_LOAD_BALANCE_INFO VAR_26;
 u_int32_t VAR_27, VAR_28;
 int VAR_29 = 0;






 if (VAR_11->adprecovery == VAR_5)
  return (VAR_0);

 VAR_13 = VAR_11->reply_desc_mem;
 VAR_13 += ((VAR_12 * VAR_11->reply_alloc_sz) / sizeof(MPI2_REPLY_DESCRIPTORS_UNION))
     + VAR_11->last_reply_idx[VAR_12];

 VAR_14 = (MPI2_SCSI_IO_SUCCESS_REPLY_DESCRIPTOR *) VAR_13;

 VAR_25.word = VAR_13->Words;
 VAR_22 = 0;

 VAR_19 = VAR_14->ReplyFlags & VAR_3;


 while ((VAR_25.u.low != 0xFFFFFFFF) && (VAR_25.u.high != 0xFFFFFFFF)) {
  VAR_21 = VAR_14->SMID;
  VAR_16 = VAR_11->mpt_cmd_list[VAR_21 - 1];
  VAR_15 = (MRSAS_RAID_SCSI_IO_REQUEST *) VAR_16->io_request;

  VAR_23 = VAR_15->RaidContext.raid_context.status;
  VAR_24 = VAR_15->RaidContext.raid_context.exStatus;
  VAR_20 = VAR_16->sense;
  VAR_28 = VAR_15->DataLength;

  switch (VAR_15->Function) {
  case 130:







            FUNC_10((void *)&VAR_11->ocr_chan);
            break;
  case 131:
   VAR_27 = VAR_16->ccb_ptr->ccb_h.target_id;
   VAR_26 = &VAR_11->load_balance_info[VAR_27];

   if (VAR_16->load_balance == VAR_6) {
    FUNC_2(&VAR_26->scsi_pending_cmds[VAR_16->pd_r1_lb]);
    VAR_16->load_balance &= ~VAR_6;
   }

  case 129:
   if (VAR_16->r1_alt_dev_handle == VAR_7) {
    FUNC_5(VAR_16, VAR_16->ccb_ptr, VAR_23,
        VAR_24, VAR_28, VAR_20);
    FUNC_3(VAR_11, VAR_16);
    FUNC_2(&VAR_11->fw_outstanding);
   } else {







    VAR_16->cmd_completed = 1;
    VAR_17 = VAR_16->peer_cmd;
    if (VAR_17->cmd_completed) {
     if (VAR_17->io_request->RaidContext.raid_context.status != VAR_2) {
      VAR_23 = VAR_17->io_request->RaidContext.raid_context.status;
      VAR_24 = VAR_17->io_request->RaidContext.raid_context.exStatus;
      VAR_28 = VAR_17->io_request->DataLength;
      VAR_20 = VAR_17->sense;
     }
     VAR_17->ccb_ptr = ((void*)0);
     if (VAR_17->callout_owner) {
      FUNC_0(&VAR_17->cm_callout);
      VAR_17->callout_owner = 0;
     }
     FUNC_7(VAR_17);
     FUNC_2(&VAR_11->fw_outstanding);
     FUNC_5(VAR_16, VAR_16->ccb_ptr, VAR_23,
         VAR_24, VAR_28, VAR_20);
     FUNC_3(VAR_11, VAR_16);
     FUNC_2(&VAR_11->fw_outstanding);
    }
   }
   break;
  case 128:
   VAR_18 = VAR_11->mfi_cmd_list[VAR_16->sync_cmd_idx];






   if (VAR_18->frame->hdr.flags & VAR_1)
    FUNC_6(VAR_18);
   else
    FUNC_4(VAR_11, VAR_18, VAR_23);
   break;
  }

  VAR_11->last_reply_idx[VAR_12]++;
  if (VAR_11->last_reply_idx[VAR_12] >= VAR_11->reply_q_depth)
   VAR_11->last_reply_idx[VAR_12] = 0;

  VAR_13->Words = ~((uint64_t)0x00);

  VAR_22++;
  VAR_29++;


  if (!VAR_11->last_reply_idx[VAR_12]) {
   VAR_13 = VAR_11->reply_desc_mem;
   VAR_13 += ((VAR_12 * VAR_11->reply_alloc_sz) / sizeof(MPI2_REPLY_DESCRIPTORS_UNION));
  } else
   VAR_13++;

  VAR_14 = (MPI2_SCSI_IO_SUCCESS_REPLY_DESCRIPTOR *) VAR_13;
  VAR_25.word = VAR_13->Words;

  VAR_19 = VAR_14->ReplyFlags & VAR_3;

  if (VAR_19 == VAR_4)
   break;






  if (VAR_29 >= VAR_8) {
   if (VAR_11->msix_enable) {
    if (VAR_11->msix_combined)
     FUNC_8(VAR_11, VAR_11->msix_reg_offset[VAR_12 / 8],
         ((VAR_12 & 0x7) << 24) |
         VAR_11->last_reply_idx[VAR_12]);
    else
     FUNC_8(VAR_11, VAR_11->msix_reg_offset[0], (VAR_12 << 24) |
         VAR_11->last_reply_idx[VAR_12]);
   } else
    FUNC_8(VAR_11, FUNC_9(VAR_9,
        VAR_10), VAR_11->last_reply_idx[0]);

   VAR_29 = 0;
  }
 }


 if (VAR_22 == 0)
  return (VAR_0);


 if (VAR_11->msix_enable) {
  if (VAR_11->msix_combined) {
   FUNC_8(VAR_11, VAR_11->msix_reg_offset[VAR_12 / 8],
       ((VAR_12 & 0x7) << 24) |
       VAR_11->last_reply_idx[VAR_12]);
  } else
   FUNC_8(VAR_11, VAR_11->msix_reg_offset[0], (VAR_12 << 24) |
       VAR_11->last_reply_idx[VAR_12]);
 } else
  FUNC_8(VAR_11, FUNC_9(VAR_9,
      VAR_10), VAR_11->last_reply_idx[0]);

 return (0);
}
