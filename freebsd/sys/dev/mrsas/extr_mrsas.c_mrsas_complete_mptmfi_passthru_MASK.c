
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
struct mrsas_softc {int fast_path_io; int mrsas_dev; int raidmap_lock; int use_seqnum_jbod_fp; int pd_seq_map_id; int * jbod_seq_cmd; int mrsas_aen_triggered; int map_id; int * map_update_cmd; } ;
struct mrsas_mfi_cmd {TYPE_3__* frame; int sync_cmd; int * ccb_ptr; scalar_t__ retry_for_fw_reset; } ;
struct mrsas_header {int cmd_status; int cmd; } ;
struct TYPE_4__ {int* b; } ;
struct TYPE_5__ {int opcode; TYPE_1__ mbox; } ;
struct TYPE_6__ {TYPE_2__ dcmd; struct mrsas_header hdr; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mrsas_softc*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct mrsas_softc*,int) ;
 int FUNC_3 (struct mrsas_softc*,struct mrsas_mfi_cmd*) ;
 int FUNC_4 (struct mrsas_softc*,struct mrsas_mfi_cmd*) ;
 int FUNC_5 (struct mrsas_mfi_cmd*) ;
 int FUNC_6 (struct mrsas_softc*) ;
 int FUNC_7 (struct mrsas_softc*,struct mrsas_mfi_cmd*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void
FUNC_10(struct mrsas_softc *VAR_7, struct mrsas_mfi_cmd *VAR_8,
    u_int8_t VAR_9)
{
 struct mrsas_header *VAR_10 = &VAR_8->frame->hdr;
 u_int8_t VAR_11 = VAR_8->frame->hdr.cmd_status;


 VAR_8->retry_for_fw_reset = 0;

 if (VAR_8->ccb_ptr)
  VAR_8->ccb_ptr = ((void*)0);

 switch (VAR_10->cmd) {
 case 132:
  FUNC_1(VAR_7->mrsas_dev, "MFI_CMD_INVALID command.\n");
  break;
 case 130:
 case 131:





  if (VAR_8->sync_cmd) {
   VAR_8->sync_cmd = 0;
   FUNC_7(VAR_7, VAR_8);
   break;
  }
 case 129:
 case 128:
 case 133:

  if ((VAR_8->frame->dcmd.opcode == VAR_5) &&
      (VAR_8->frame->dcmd.mbox.b[1] == 1)) {
   VAR_7->fast_path_io = 0;
   FUNC_8(&VAR_7->raidmap_lock);
   VAR_7->map_update_cmd = ((void*)0);
   if (VAR_11 != 0) {
    if (VAR_11 != VAR_0)
     FUNC_1(VAR_7->mrsas_dev, "map sync failed, status=%x\n", VAR_11);
    else {
     FUNC_5(VAR_8);
     FUNC_9(&VAR_7->raidmap_lock);
     break;
    }
   } else
    VAR_7->map_id++;
   FUNC_5(VAR_8);
   if (FUNC_0(VAR_7))
    VAR_7->fast_path_io = 0;
   else
    VAR_7->fast_path_io = 1;
   FUNC_6(VAR_7);
   FUNC_9(&VAR_7->raidmap_lock);
   break;
  }
  if (VAR_8->frame->dcmd.opcode == VAR_3 ||
      VAR_8->frame->dcmd.opcode == VAR_2) {
   VAR_7->mrsas_aen_triggered = 0;
  }

  if ((VAR_8->frame->dcmd.opcode ==
      VAR_6) &&
      (VAR_8->frame->dcmd.mbox.b[0] == 1)) {

   FUNC_8(&VAR_7->raidmap_lock);
   VAR_7->jbod_seq_cmd = ((void*)0);
   FUNC_5(VAR_8);

   if (VAR_11 == VAR_1) {
    VAR_7->pd_seq_map_id++;

    if (FUNC_2(VAR_7, 1))
     VAR_7->use_seqnum_jbod_fp = 0;
   } else {
    VAR_7->use_seqnum_jbod_fp = 0;
    FUNC_1(VAR_7->mrsas_dev,
        "Jbod map sync failed, status=%x\n", VAR_11);
   }
   FUNC_9(&VAR_7->raidmap_lock);
   break;
  }

  if (VAR_8->frame->dcmd.opcode == VAR_4)
   FUNC_4(VAR_7, VAR_8);
  else
   FUNC_7(VAR_7, VAR_8);
  break;
 case 134:

  FUNC_3(VAR_7, VAR_8);
  break;
 default:
  FUNC_1(VAR_7->mrsas_dev, "Unknown command completed! [0x%X]\n", VAR_10->cmd);
  break;
 }
}
