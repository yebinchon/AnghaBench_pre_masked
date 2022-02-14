
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ccb_scsiio {int cdb_len; } ;
struct ccb_hdr {int target_id; } ;
union ccb {struct ccb_scsiio csio; struct ccb_hdr ccb_h; } ;
typedef scalar_t__ uint8_t ;
typedef int u_int32_t ;
struct mrsas_softc {int max_num_sge; int mrsas_dev; scalar_t__ is_aero; scalar_t__ is_ventura; } ;
struct mrsas_mpt_cmd {int sge_count; int length; TYPE_4__* io_request; } ;
struct TYPE_7__ {int numSGE; scalar_t__ numSGEExt; scalar_t__ exStatus; scalar_t__ status; int VirtualDiskTgtId; } ;
struct TYPE_6__ {int numSGE; } ;
struct TYPE_8__ {TYPE_2__ raid_context; TYPE_1__ raid_context_g35; } ;
struct TYPE_9__ {TYPE_3__ RaidContext; int DataLength; int IoFlags; } ;
typedef TYPE_4__ MRSAS_RAID_SCSI_IO_REQUEST ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (struct mrsas_softc*,struct mrsas_mpt_cmd*,union ccb*) ;
 scalar_t__ FUNC_2 (struct mrsas_softc*,struct mrsas_mpt_cmd*,union ccb*,int ,TYPE_4__*) ;

int
FUNC_3(struct mrsas_softc *VAR_2, struct mrsas_mpt_cmd *VAR_3,
    union ccb *VAR_4)
{
 struct ccb_hdr *VAR_5 = &(VAR_4->ccb_h);
 struct ccb_scsiio *VAR_6 = &(VAR_4->csio);
 u_int32_t VAR_7;
 MRSAS_RAID_SCSI_IO_REQUEST *VAR_8;

 VAR_7 = VAR_5->target_id;

 VAR_8 = VAR_3->io_request;
 VAR_8->RaidContext.raid_context.VirtualDiskTgtId = VAR_7;
 VAR_8->RaidContext.raid_context.status = 0;
 VAR_8->RaidContext.raid_context.exStatus = 0;


 VAR_8->IoFlags = VAR_6->cdb_len;

 if (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_7, VAR_8) != VAR_1)
  FUNC_0(VAR_2->mrsas_dev, "Build ldio or fpio error\n");

 VAR_8->DataLength = VAR_3->length;

 if (FUNC_1(VAR_2, VAR_3, VAR_4) == VAR_1) {
  if (VAR_3->sge_count > VAR_2->max_num_sge) {
   FUNC_0(VAR_2->mrsas_dev, "Error: sge_count (0x%x) exceeds"
       "max (0x%x) allowed\n", VAR_3->sge_count, VAR_2->max_num_sge);
   return (VAR_0);
  }
  if (VAR_2->is_ventura || VAR_2->is_aero)
   VAR_8->RaidContext.raid_context_g35.numSGE = VAR_3->sge_count;
  else {




   VAR_8->RaidContext.raid_context.numSGE = VAR_3->sge_count;
   VAR_8->RaidContext.raid_context.numSGEExt = (uint8_t)(VAR_3->sge_count >> 8);
  }

 } else {
  FUNC_0(VAR_2->mrsas_dev, "Data map/load failed.\n");
  return (VAR_0);
 }
 return (0);
}
