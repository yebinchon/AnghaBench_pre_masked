
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int func_code; void* status; } ;
struct TYPE_7__ {int valid; } ;
struct ccb_trans_settings_mmc {int host_f_max; int host_f_min; int host_ocr; } ;
struct TYPE_6__ {struct ccb_trans_settings_mmc mmc; } ;
struct ccb_trans_settings {TYPE_3__ xport_specific; int transport_version; void* transport; int protocol_version; void* protocol; TYPE_2__ proto_specific; } ;
struct TYPE_5__ {void* status; } ;
struct ccb_pathinq {int version_num; int hba_inquiry; int hba_misc; int initiator_id; int base_transfer_speed; TYPE_1__ ccb_h; int transport_version; void* transport; int protocol_version; void* protocol; int bus_id; int unit_number; int dev_name; int hba_vid; int sim_vid; int max_lun; int max_target; int hba_eng_cnt; int target_sprt; } ;
union ccb {TYPE_4__ ccb_h; struct ccb_trans_settings cts; struct ccb_pathinq cpi; } ;
struct mmcnull_softc {int dev; int sc_mtx; } ;
struct cam_sim {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;






 int FUNC_0 (struct cam_sim*) ;
 char* FUNC_1 (struct cam_sim*) ;
 struct mmcnull_softc* FUNC_2 (struct cam_sim*) ;
 int FUNC_3 (struct cam_sim*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct cam_sim*,union ccb*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (union ccb*) ;

__attribute__((used)) static void
FUNC_9(struct cam_sim *VAR_15, union ccb *VAR_16)
{
 struct mmcnull_softc *VAR_17;

 VAR_17 = FUNC_2(VAR_15);
 if (VAR_17 == ((void*)0)) {
  VAR_16->ccb_h.status = VAR_2;
  FUNC_8(VAR_16);
  return;
 }

 FUNC_6(&VAR_17->sc_mtx, VAR_5);

 FUNC_4(VAR_17->dev, "action: func_code %0x\n", VAR_16->ccb_h.func_code);

 switch (VAR_16->ccb_h.func_code) {
 case 131:
 {
  struct ccb_pathinq *VAR_18;

  VAR_18 = &VAR_16->cpi;
  VAR_18->version_num = 1;
  VAR_18->hba_inquiry = VAR_8 | VAR_9 | VAR_10;
  VAR_18->target_sprt = 0;
  VAR_18->hba_misc = VAR_6 | VAR_7;
  VAR_18->hba_eng_cnt = 0;
  VAR_18->max_target = 0;
  VAR_18->max_lun = 0;
  VAR_18->initiator_id = 1;
  FUNC_7(VAR_18->sim_vid, "FreeBSD", VAR_13);
  FUNC_7(VAR_18->hba_vid, "FreeBSD Foundation", VAR_4);
  FUNC_7(VAR_18->dev_name, FUNC_1(VAR_15), VAR_3);
  VAR_18->unit_number = FUNC_3(VAR_15);
  VAR_18->bus_id = FUNC_0(VAR_15);
  VAR_18->base_transfer_speed = 100;
  VAR_18->protocol = VAR_11;
  VAR_18->protocol_version = VAR_12;
  VAR_18->transport = VAR_14;
  VAR_18->transport_version = 0;

  VAR_18->ccb_h.status = VAR_0;
  break;
 }
 case 133:
 {
  struct ccb_trans_settings *VAR_19 = &VAR_16->cts;
  struct ccb_trans_settings_mmc *VAR_20;
  VAR_20 = &VAR_16->cts.proto_specific.mmc;

                FUNC_4(VAR_17->dev, "Got XPT_GET_TRAN_SETTINGS\n");

                VAR_19->protocol = VAR_11;
                VAR_19->protocol_version = 0;
                VAR_19->transport = VAR_14;
                VAR_19->transport_version = 0;
                VAR_19->xport_specific.valid = 0;
  VAR_20->host_f_max = 12000000;
  VAR_20->host_f_min = 200000;
  VAR_20->host_ocr = 1;
                VAR_16->ccb_h.status = VAR_0;
                break;
        }
 case 128:
  FUNC_4(VAR_17->dev, "Got XPT_SET_TRAN_SETTINGS, should update IOS...\n");
  VAR_16->ccb_h.status = VAR_0;
  break;
 case 130:
  FUNC_4(VAR_17->dev, "Got XPT_RESET_BUS, ACK it...\n");
  VAR_16->ccb_h.status = VAR_0;
                break;
 case 132:






  FUNC_4(VAR_17->dev, "Got XPT_MMC_IO\n");
  FUNC_5(VAR_15, VAR_16);
  return;
  break;
        case 129:

                FUNC_4(VAR_17->dev, "Got XPT_RESET_DEV\n");
  VAR_16->ccb_h.status = VAR_0;
                break;
 default:
  FUNC_4(VAR_17->dev, "Func code %d is unknown\n", VAR_16->ccb_h.func_code);
  VAR_16->ccb_h.status = VAR_1;
  break;
 }
 FUNC_8(VAR_16);
 return;
}
