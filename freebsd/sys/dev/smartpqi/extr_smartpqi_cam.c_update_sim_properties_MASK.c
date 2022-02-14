
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_sg_elem; } ;
struct pqisrc_softstate {TYPE_1__ pqi_cap; } ;
struct TYPE_4__ {int status; } ;
struct ccb_pathinq {int version_num; int hba_inquiry; int hba_misc; int max_target; int maxio; int initiator_id; int base_transfer_speed; int transport_version; TYPE_2__ ccb_h; int transport; int protocol_version; int protocol; int bus_id; int unit_number; int dev_name; int hba_vid; int sim_vid; int max_lun; scalar_t__ hba_eng_cnt; scalar_t__ target_sprt; } ;
struct cam_sim {int dummy; } ;
typedef struct pqisrc_softstate pqisrc_softstate_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
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
 int FUNC_1 (struct cam_sim*) ;
 char* FUNC_2 (struct cam_sim*) ;
 scalar_t__ FUNC_3 (struct cam_sim*) ;
 int FUNC_4 (struct cam_sim*) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_6(struct cam_sim *VAR_14, struct ccb_pathinq *VAR_15)
{

 pqisrc_softstate_t *VAR_16 = (struct pqisrc_softstate *)
     FUNC_3(VAR_14);
 FUNC_0("IN\n");

 VAR_15->version_num = 1;
 VAR_15->hba_inquiry = VAR_6|VAR_7|VAR_8;
 VAR_15->target_sprt = 0;
 VAR_15->hba_misc = VAR_4 | VAR_5;
 VAR_15->hba_eng_cnt = 0;
 VAR_15->max_lun = VAR_9;
 VAR_15->max_target = 1088;
 VAR_15->maxio = (VAR_16->pqi_cap.max_sg_elem - 1) * VAR_3;
 VAR_15->initiator_id = 255;
 FUNC_5(VAR_15->sim_vid, "FreeBSD", VAR_12);
 FUNC_5(VAR_15->hba_vid, "Microsemi", VAR_2);
 FUNC_5(VAR_15->dev_name, FUNC_2(VAR_14), VAR_1);
 VAR_15->unit_number = FUNC_4(VAR_14);
 VAR_15->bus_id = FUNC_1(VAR_14);
 VAR_15->base_transfer_speed = 1200000;
 VAR_15->protocol = VAR_10;
 VAR_15->protocol_version = VAR_11;
 VAR_15->transport = VAR_13;
 VAR_15->transport_version = 2;
 VAR_15->ccb_h.status = VAR_0;

 FUNC_0("OUT\n");
}
