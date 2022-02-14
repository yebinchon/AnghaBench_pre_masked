
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct mfi_softc {int dummy; } ;
struct TYPE_11__ {int TargetID; int RegLockLength; int timeoutValue; scalar_t__ regLockFlags; scalar_t__ exStatus; scalar_t__ Status; } ;
struct mfi_mpi2_request_raid_scsi_io {int DevHandle; int IoFlags; int DataLength; TYPE_4__ RaidContext; int Function; } ;
struct mfi_command {TYPE_7__* cm_frame; } ;
struct mfi_cmd_tbolt {TYPE_3__* request_desc; struct mfi_mpi2_request_raid_scsi_io* io_request; } ;
struct IO_REQUEST_INFO {int ldStartBlock; scalar_t__ numBlocks; int ldTgtId; int isRead; } ;
struct TYPE_12__ {int target_id; scalar_t__ data_len; } ;
struct TYPE_13__ {int lba_lo; int lba_hi; TYPE_5__ header; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_14__ {TYPE_6__ io; TYPE_1__ header; } ;
struct TYPE_9__ {int RequestFlags; } ;
struct TYPE_10__ {TYPE_2__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct IO_REQUEST_INFO*,int ,int) ;

void
FUNC_1(struct mfi_softc *VAR_6, struct mfi_command *VAR_7,
    struct mfi_cmd_tbolt *VAR_8)
{
 uint32_t VAR_9 = 0, VAR_10 = 0, VAR_11;
 struct mfi_mpi2_request_raid_scsi_io *VAR_12;
 struct IO_REQUEST_INFO VAR_13;

 VAR_11 = VAR_7->cm_frame->io.header.target_id;
 VAR_12 = VAR_8->io_request;
 VAR_12->RaidContext.TargetID = VAR_11;
 VAR_12->RaidContext.Status = 0;
 VAR_12->RaidContext.exStatus = 0;
 VAR_12->RaidContext.regLockFlags = 0;

 VAR_9 = VAR_7->cm_frame->io.lba_lo;
 VAR_10 = VAR_7->cm_frame->io.lba_hi;

 FUNC_0(&VAR_13, 0, sizeof(struct IO_REQUEST_INFO));
 VAR_13.ldStartBlock = ((uint64_t)VAR_10 << 32) | VAR_9;
 VAR_13.numBlocks = VAR_7->cm_frame->io.header.data_len;
 VAR_13.ldTgtId = VAR_11;
 if ((VAR_7->cm_frame->header.flags & VAR_0) ==
     VAR_0)
  VAR_13.isRead = 1;

 VAR_12->RaidContext.timeoutValue
  = VAR_1;
 VAR_12->Function = VAR_5;
 VAR_12->DevHandle = VAR_11;
 VAR_8->request_desc->header.RequestFlags
  = (VAR_2
     << VAR_3);
 if ((VAR_12->IoFlags == 6) && (VAR_13.numBlocks == 0))
  VAR_12->RaidContext.RegLockLength = 0x100;
 VAR_12->DataLength = VAR_7->cm_frame->io.header.data_len
     * VAR_4;
}
