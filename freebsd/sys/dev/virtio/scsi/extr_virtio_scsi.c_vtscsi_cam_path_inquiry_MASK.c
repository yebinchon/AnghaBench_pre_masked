
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
struct ccb_pathinq {int version_num; int hba_misc; int base_transfer_speed; int maxio; int hba_subdevice; int hba_subvendor; int hba_device; int hba_vendor; scalar_t__ transport_version; int transport; int protocol_version; int protocol; int bus_id; int unit_number; int dev_name; int hba_vid; int sim_vid; int initiator_id; int max_lun; int max_target; scalar_t__ hba_eng_cnt; scalar_t__ target_sprt; int hba_inquiry; } ;
union ccb {TYPE_1__ ccb_h; struct ccb_pathinq cpi; } ;
struct vtscsi_softc {int vtscsi_max_nsegs; int vtscsi_max_lun; int vtscsi_max_target; int vtscsi_dev; } ;
struct cam_sim {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct cam_sim*) ;
 char* FUNC_1 (struct cam_sim*) ;
 int FUNC_2 (struct cam_sim*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_15 ;
 int FUNC_8 (struct vtscsi_softc*,int ,char*,struct cam_sim*,union ccb*) ;
 int FUNC_9 (union ccb*) ;

__attribute__((used)) static void
FUNC_10(struct vtscsi_softc *VAR_16, struct cam_sim *VAR_17,
    union ccb *VAR_18)
{
 device_t VAR_19;
 struct ccb_pathinq *VAR_20;

 VAR_19 = VAR_16->vtscsi_dev;
 VAR_20 = &VAR_18->cpi;

 FUNC_8(VAR_16, VAR_13, "sim=%p ccb=%p\n", VAR_17, VAR_18);

 VAR_20->version_num = 1;
 VAR_20->hba_inquiry = VAR_7;
 VAR_20->target_sprt = 0;
 VAR_20->hba_misc = VAR_5 | VAR_6;
 if (VAR_15 != 0)
  VAR_20->hba_misc |= VAR_4;
 VAR_20->hba_eng_cnt = 0;

 VAR_20->max_target = VAR_16->vtscsi_max_target;
 VAR_20->max_lun = VAR_16->vtscsi_max_lun;
 VAR_20->initiator_id = VAR_11;

 FUNC_3(VAR_20->sim_vid, "FreeBSD", VAR_10);
 FUNC_3(VAR_20->hba_vid, "VirtIO", VAR_2);
 FUNC_3(VAR_20->dev_name, FUNC_1(VAR_17), VAR_1);

 VAR_20->unit_number = FUNC_2(VAR_17);
 VAR_20->bus_id = FUNC_0(VAR_17);

 VAR_20->base_transfer_speed = 300000;

 VAR_20->protocol = VAR_8;
 VAR_20->protocol_version = VAR_9;
 VAR_20->transport = VAR_14;
 VAR_20->transport_version = 0;

 VAR_20->maxio = (VAR_16->vtscsi_max_nsegs - VAR_12 - 1) *
     VAR_3;

 VAR_20->hba_vendor = FUNC_7(VAR_19);
 VAR_20->hba_device = FUNC_4(VAR_19);
 VAR_20->hba_subvendor = FUNC_6(VAR_19);
 VAR_20->hba_subdevice = FUNC_5(VAR_19);

 VAR_18->ccb_h.status = VAR_0;
 FUNC_9(VAR_18);
}
