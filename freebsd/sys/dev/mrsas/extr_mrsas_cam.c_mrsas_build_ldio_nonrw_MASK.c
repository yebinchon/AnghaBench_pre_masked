
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ccb_hdr {int target_lun; void* target_id; } ;
union ccb {struct ccb_hdr ccb_h; } ;
typedef scalar_t__ uint8_t ;
typedef void* u_int32_t ;
struct mrsas_softc {int map_id; int max_num_sge; int mrsas_dev; scalar_t__ is_aero; scalar_t__ is_ventura; int ** ld_drv_map; } ;
struct mrsas_mpt_cmd {int sge_count; int length; TYPE_3__* request_desc; int tmCapable; TYPE_8__* io_request; } ;
struct TYPE_15__ {int numSGE; scalar_t__ numSGEExt; void* VirtualDiskTgtId; } ;
struct TYPE_13__ {int numSGE; } ;
struct TYPE_14__ {TYPE_6__ raid_context; TYPE_4__ raid_context_g35; } ;
struct TYPE_17__ {int* LUN; TYPE_5__ RaidContext; int DataLength; void* DevHandle; int Function; } ;
struct TYPE_10__ {int tmCapable; } ;
struct TYPE_16__ {TYPE_1__ capability; } ;
struct TYPE_11__ {int RequestFlags; } ;
struct TYPE_12__ {TYPE_2__ SCSIIO; } ;
typedef TYPE_6__ RAID_CONTEXT ;
typedef TYPE_7__ MR_LD_RAID ;
typedef int MR_DRV_RAID_MAP_ALL ;
typedef TYPE_8__ MRSAS_RAID_SCSI_IO_REQUEST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__* FUNC_0 (void*,int *) ;
 void* FUNC_1 (void*,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (struct mrsas_softc*,struct mrsas_mpt_cmd*,union ccb*) ;

int
FUNC_4(struct mrsas_softc *VAR_4, struct mrsas_mpt_cmd *VAR_5,
    union ccb *VAR_6)
{
 struct ccb_hdr *VAR_7 = &(VAR_6->ccb_h);
 u_int32_t VAR_8, VAR_9;
 MR_DRV_RAID_MAP_ALL *VAR_10;
 MR_LD_RAID *VAR_11;
 RAID_CONTEXT *VAR_12;
 MRSAS_RAID_SCSI_IO_REQUEST *VAR_13;

 VAR_13 = VAR_5->io_request;
 VAR_8 = VAR_7->target_id;

 VAR_10 = VAR_4->ld_drv_map[(VAR_4->map_id & 1)];
 VAR_9 = FUNC_1(VAR_8, VAR_10);
 VAR_11 = FUNC_0(VAR_9, VAR_10);

 VAR_12 = &VAR_13->RaidContext.raid_context;

 VAR_5->tmCapable = VAR_11->capability.tmCapable;


 VAR_13->Function = VAR_1;
 VAR_13->DevHandle = VAR_8;
 VAR_5->request_desc->SCSIIO.RequestFlags =
     (VAR_0 <<
     VAR_2);

 VAR_13->RaidContext.raid_context.VirtualDiskTgtId = VAR_8;
 VAR_13->LUN[1] = VAR_7->target_lun & 0xF;
 VAR_13->DataLength = VAR_5->length;

 if (FUNC_3(VAR_4, VAR_5, VAR_6) == VAR_3) {
  if (VAR_5->sge_count > VAR_4->max_num_sge) {
   FUNC_2(VAR_4->mrsas_dev, "Error: sge_count (0x%x) exceeds"
       "max (0x%x) allowed\n", VAR_5->sge_count, VAR_4->max_num_sge);
   return (1);
  }
  if (VAR_4->is_ventura || VAR_4->is_aero)
   VAR_13->RaidContext.raid_context_g35.numSGE = VAR_5->sge_count;
  else {




   VAR_13->RaidContext.raid_context.numSGE = VAR_5->sge_count;
   VAR_13->RaidContext.raid_context.numSGEExt = (uint8_t)(VAR_5->sge_count >> 8);
  }
 } else {
  FUNC_2(VAR_4->mrsas_dev, "Data map/load failed.\n");
  return (1);
 }
 return (0);
}
