
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union mfi_mpi2_reply_descriptor {int words; } ;
struct TYPE_6__ {int low; int high; } ;
union desc_value {int word; TYPE_1__ u; } ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct mfi_softc {uintptr_t last_reply_idx; uintptr_t reply_size; int mfi_max_fw_cmds; scalar_t__ reply_frame_pool_align; struct mfi_command* mfi_commands; int mfi_dev; struct mfi_cmd_tbolt** mfi_cmd_pool_tbolt; int mfi_io_lock; } ;
struct mfi_mpi2_request_raid_scsi_io {int dummy; } ;
struct mfi_mpi2_reply_header {int ReplyFlags; int SMID; } ;
struct mfi_command {int cm_flags; TYPE_5__* cm_frame; } ;
struct mfi_cmd_tbolt {size_t sync_cmd_idx; struct mfi_mpi2_request_raid_scsi_io* io_request; } ;
struct TYPE_9__ {int cmd_status; } ;
struct TYPE_7__ {int scsi_status; int cmd_status; } ;
struct TYPE_8__ {TYPE_2__ header; } ;
struct TYPE_10__ {TYPE_4__ header; TYPE_3__ dcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mfi_softc*,int ,uintptr_t) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct mfi_command*,int ,int ) ;
 int FUNC_3 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_4 (struct mfi_command*) ;
 int FUNC_5 (int *,int ) ;

void
FUNC_6(struct mfi_softc *VAR_8)
{
 struct mfi_mpi2_reply_header *VAR_9, *VAR_10;
 struct mfi_command *VAR_11;
 struct mfi_cmd_tbolt *VAR_12;
 uint16_t VAR_13;
 uint8_t VAR_14;
 struct mfi_mpi2_request_raid_scsi_io *VAR_15;
 uint32_t VAR_16, VAR_17;
 uint16_t VAR_18;
 union desc_value VAR_19;
 FUNC_5(&VAR_8->mfi_io_lock, VAR_0);

 VAR_9 = (struct mfi_mpi2_reply_header *)
  ((uintptr_t)VAR_8->reply_frame_pool_align
  + VAR_8->last_reply_idx * VAR_8->reply_size);
 VAR_10 = VAR_9;

 if (VAR_10 == ((void*)0)) {
  FUNC_1(VAR_8->mfi_dev, "reply desc is NULL!!\n");
  return;
 }

 VAR_14 = VAR_10->ReplyFlags
      & VAR_6;
 if (VAR_14 == VAR_7)
  return;

 VAR_18 = 0;
 VAR_19.word = ((union mfi_mpi2_reply_descriptor *)VAR_9)->words;


 while ((VAR_19.u.low != 0xFFFFFFFF) && (VAR_19.u.high != 0xFFFFFFFF)) {
  VAR_13 = VAR_10->SMID;
  if (VAR_13 == 0 || VAR_13 > VAR_8->mfi_max_fw_cmds) {
   FUNC_1(VAR_8->mfi_dev, "smid is %d cannot "
       "proceed - skipping\n", VAR_13);
   goto next;
  }
  VAR_12 = VAR_8->mfi_cmd_pool_tbolt[VAR_13 - 1];
  if (VAR_12->sync_cmd_idx == VAR_8->mfi_max_fw_cmds) {
   FUNC_1(VAR_8->mfi_dev, "cmd_tbolt %p "
       "has invalid sync_cmd_idx=%d - skipping\n",
       VAR_12, VAR_12->sync_cmd_idx);
   goto next;
  }
  VAR_11 = &VAR_8->mfi_commands[VAR_12->sync_cmd_idx];
  VAR_15 = VAR_12->io_request;

  VAR_16 = VAR_11->cm_frame->dcmd.header.cmd_status;
  VAR_17 = VAR_11->cm_frame->dcmd.header.scsi_status;
  FUNC_2(VAR_11, VAR_16, VAR_17);


  if ((VAR_11->cm_flags & VAR_2) != 0 &&
      (VAR_11->cm_flags & VAR_1) != 0) {


   VAR_11->cm_frame->header.cmd_status = VAR_5;

  } else {

   if ((VAR_11->cm_flags & VAR_3) != 0)
    FUNC_4(VAR_11);


   FUNC_3(VAR_8, VAR_11);
  }

next:
  VAR_8->last_reply_idx++;
  if (VAR_8->last_reply_idx >= VAR_8->mfi_max_fw_cmds) {
   FUNC_0(VAR_8, VAR_4, VAR_8->last_reply_idx);
   VAR_8->last_reply_idx = 0;
  }


  ((union mfi_mpi2_reply_descriptor*)VAR_9)->words =
   ~((uint64_t)0x00);

  VAR_18++;


  VAR_9 = (struct mfi_mpi2_reply_header *)
      ((uintptr_t)VAR_8->reply_frame_pool_align
      + VAR_8->last_reply_idx * VAR_8->reply_size);
  VAR_10 = VAR_9;
  VAR_19.word = ((union mfi_mpi2_reply_descriptor*)VAR_9)->words;
  VAR_14 = VAR_10->ReplyFlags
      & VAR_6;
  if (VAR_14 == VAR_7)
   break;
 }

 if (!VAR_18)
  return;


 if (VAR_8->last_reply_idx)
  FUNC_0(VAR_8, VAR_4, VAR_8->last_reply_idx);

 return;
}
