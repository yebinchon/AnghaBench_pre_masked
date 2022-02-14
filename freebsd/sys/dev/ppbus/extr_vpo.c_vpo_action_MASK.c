
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int func_code; int flags; void* status; } ;
struct TYPE_3__ {void* status; } ;
struct ccb_pathinq {int version_num; int max_target; int base_transfer_speed; TYPE_1__ ccb_h; int transport_version; int transport; int unit_number; int dev_name; int hba_vid; int sim_vid; int bus_id; int initiator_id; int max_lun; int hba_eng_cnt; int hba_misc; int target_sprt; int hba_inquiry; } ;
struct ccb_calc_geometry {int volume_size; int cylinders; int heads; int secs_per_track; int block_size; } ;
struct ccb_scsiio {int dummy; } ;
union ccb {TYPE_2__ ccb_h; struct ccb_pathinq cpi; struct ccb_calc_geometry ccg; struct ccb_scsiio csio; } ;
struct vpo_data {int vpo_dev; int vpo_io; int vpo_isplus; } ;
struct cam_sim {char* sim_name; int unit_number; int bus_id; scalar_t__ softc; } ;
typedef int intmax_t ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (struct ccb_scsiio*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (struct vpo_data*,struct ccb_scsiio*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (union ccb*) ;

__attribute__((used)) static void
FUNC_9(struct cam_sim *VAR_9, union ccb *VAR_10)
{
 struct vpo_data *VAR_11 = (struct vpo_data *)VAR_9->softc;

 FUNC_3(FUNC_0(VAR_11->vpo_dev));
 switch (VAR_10->ccb_h.func_code) {
 case 128:
 {
  struct ccb_scsiio *VAR_12;

  VAR_12 = &VAR_10->csio;

  if (VAR_10->ccb_h.flags & VAR_0) {
   VAR_10->ccb_h.status = VAR_3;
   FUNC_8(VAR_10);
   break;
  }




  FUNC_6(VAR_11, VAR_12);

  FUNC_8(VAR_10);

  break;
 }
 case 131:
 {
  struct ccb_calc_geometry *VAR_13;

  VAR_13 = &VAR_10->ccg;
  VAR_13->heads = 64;
  VAR_13->secs_per_track = 32;
  VAR_13->cylinders = VAR_13->volume_size /
     (VAR_13->heads * VAR_13->secs_per_track);

  VAR_10->ccb_h.status = VAR_1;
  FUNC_8(VAR_10);
  break;
 }
 case 129:
 {





  if (VAR_11->vpo_isplus) {
   if (FUNC_2(&VAR_11->vpo_io)) {
    VAR_10->ccb_h.status = VAR_2;
    FUNC_8(VAR_10);
    return;
   }
  } else {
   if (FUNC_7(&VAR_11->vpo_io)) {
    VAR_10->ccb_h.status = VAR_2;
    FUNC_8(VAR_10);
    return;
   }
  }

  VAR_10->ccb_h.status = VAR_1;
  FUNC_8(VAR_10);
  break;
 }
 case 130:
 {
  struct ccb_pathinq *VAR_14 = &VAR_10->cpi;




  VAR_14->version_num = 1;
  VAR_14->hba_inquiry = 0;
  VAR_14->target_sprt = 0;
  VAR_14->hba_misc = 0;
  VAR_14->hba_eng_cnt = 0;
  VAR_14->max_target = 7;
  VAR_14->max_lun = 0;
  VAR_14->initiator_id = VAR_7;
  VAR_14->bus_id = VAR_9->bus_id;
  VAR_14->base_transfer_speed = 93;
  FUNC_5(VAR_14->sim_vid, "FreeBSD", VAR_6);
  FUNC_5(VAR_14->hba_vid, "Iomega", VAR_5);
  FUNC_5(VAR_14->dev_name, VAR_9->sim_name, VAR_4);
  VAR_14->unit_number = VAR_9->unit_number;
  VAR_14->transport = VAR_8;
  VAR_14->transport_version = 0;

  VAR_14->ccb_h.status = VAR_1;
  FUNC_8(VAR_10);
  break;
 }
 default:
  VAR_10->ccb_h.status = VAR_3;
  FUNC_8(VAR_10);
  break;
 }

 return;
}
