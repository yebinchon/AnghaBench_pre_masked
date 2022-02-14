
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int func_code; int flags; void* status; int target_id; int target_lun; } ;
struct TYPE_3__ {int status; } ;
struct ccb_pathinq {int version_num; int base_transfer_speed; int transport_version; TYPE_1__ ccb_h; int protocol_version; int protocol; int transport; int dev_name; int hba_vid; int sim_vid; int initiator_id; int bus_id; int unit_number; int max_lun; int max_target; int hba_eng_cnt; int hba_misc; int target_sprt; int hba_inquiry; } ;
union ccb {TYPE_2__ ccb_h; struct ccb_pathinq cpi; int ccg; } ;
struct hpt_iop_srb {int dma_map; union ccb* ccb; } ;
struct hpt_iop_hba {int max_devices; int msg_done; int pcidev; int sim; int pciunit; int io_dmat; } ;
struct cam_sim {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;






 int FUNC_0 (int ,int ,union ccb*,int ,struct hpt_iop_srb*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct cam_sim*) ;
 char* FUNC_3 (struct cam_sim*) ;
 scalar_t__ FUNC_4 (struct cam_sim*) ;
 int FUNC_5 (struct cam_sim*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct hpt_iop_hba*,struct hpt_iop_srb*) ;
 struct hpt_iop_srb* FUNC_8 (struct hpt_iop_hba*) ;
 int VAR_15 ;
 int FUNC_9 (struct hpt_iop_hba*) ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (union ccb*) ;
 int FUNC_12 (int ,int) ;

__attribute__((used)) static void FUNC_13(struct cam_sim *VAR_16, union ccb *VAR_17)
{
 struct hpt_iop_hba * VAR_18 = (struct hpt_iop_hba *)FUNC_4(VAR_16);
 struct hpt_iop_srb * VAR_19;
 int VAR_20;

 switch (VAR_17->ccb_h.func_code) {

 case 129:
  if (VAR_17->ccb_h.target_lun != 0 ||
   VAR_17->ccb_h.target_id >= VAR_18->max_devices ||
   (VAR_17->ccb_h.flags & VAR_0))
  {
   VAR_17->ccb_h.status = VAR_5;
   FUNC_11(VAR_17);
   return;
  }

  if ((VAR_19 = FUNC_8(VAR_18)) == ((void*)0)) {
   FUNC_6(VAR_18->pcidev, "srb allocated failed");
   VAR_17->ccb_h.status = VAR_3;
   FUNC_11(VAR_17);
   return;
  }

  VAR_19->ccb = VAR_17;
  VAR_20 = FUNC_0(VAR_18->io_dmat,
         VAR_19->dma_map,
         VAR_17,
         VAR_15,
         VAR_19,
         0);

  if (VAR_20 && VAR_20 != VAR_7) {
   FUNC_6(VAR_18->pcidev,
    "%d bus_dmamap_load error %d",
    VAR_18->pciunit, VAR_20);
   FUNC_12(VAR_18->sim, 1);
   VAR_17->ccb_h.status = VAR_3;
   FUNC_7(VAR_18, VAR_19);
   FUNC_11(VAR_17);
   return;
  }

  return;

 case 130:
  FUNC_6(VAR_18->pcidev, "reset adapter");
  VAR_18->msg_done = 0;
  FUNC_9(VAR_18);
  break;

 case 132:
 case 128:
  VAR_17->ccb_h.status = VAR_1;
  break;

 case 133:
  FUNC_1(&VAR_17->ccg, 1);
  break;

 case 131:
 {
  struct ccb_pathinq *VAR_21 = &VAR_17->cpi;

  VAR_21->version_num = 1;
  VAR_21->hba_inquiry = VAR_10;
  VAR_21->target_sprt = 0;
  VAR_21->hba_misc = VAR_9;
  VAR_21->hba_eng_cnt = 0;
  VAR_21->max_target = VAR_18->max_devices;
  VAR_21->max_lun = 0;
  VAR_21->unit_number = FUNC_5(VAR_16);
  VAR_21->bus_id = FUNC_2(VAR_16);
  VAR_21->initiator_id = VAR_18->max_devices;
  VAR_21->base_transfer_speed = 3300;

  FUNC_10(VAR_21->sim_vid, "FreeBSD", VAR_13);
  FUNC_10(VAR_21->hba_vid, "HPT   ", VAR_8);
  FUNC_10(VAR_21->dev_name, FUNC_3(VAR_16), VAR_6);
  VAR_21->transport = VAR_14;
  VAR_21->transport_version = 2;
  VAR_21->protocol = VAR_11;
  VAR_21->protocol_version = VAR_12;
  VAR_21->ccb_h.status = VAR_2;
  break;
 }

 default:
  VAR_17->ccb_h.status = VAR_4;
  break;
 }

 FUNC_11(VAR_17);
 return;
}
