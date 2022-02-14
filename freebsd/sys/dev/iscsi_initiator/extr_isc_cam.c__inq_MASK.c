
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ target_lun; int target_id; } ;
struct TYPE_8__ {int status; } ;
struct ccb_pathinq {int version_num; int hba_inquiry; int base_transfer_speed; scalar_t__ transport_version; int transport; TYPE_3__ ccb_h; int unit_number; int dev_name; int hba_vid; int sim_vid; int bus_id; scalar_t__ max_lun; int initiator_id; scalar_t__ max_target; scalar_t__ hba_eng_cnt; scalar_t__ hba_misc; scalar_t__ target_sprt; } ;
union ccb {TYPE_1__ ccb_h; struct ccb_pathinq cpi; } ;
typedef int uintmax_t ;
struct cam_sim {int dummy; } ;
struct TYPE_7__ {scalar_t__ maxluns; } ;
struct TYPE_9__ {TYPE_2__ opt; int sid; } ;
typedef TYPE_4__ isc_session_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cam_sim*) ;
 char* FUNC_1 (struct cam_sim*) ;
 TYPE_4__* FUNC_2 (struct cam_sim*) ;
 int FUNC_3 (struct cam_sim*) ;
 int FUNC_4 (int,char*,int ,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_7(struct cam_sim *VAR_9, union ccb *VAR_10)
{
     struct ccb_pathinq *VAR_11 = &VAR_10->cpi;
     isc_session_t *VAR_12 = FUNC_2(VAR_9);

     FUNC_5(8);
     FUNC_4(3, "sid=%d target=%d lun=%jx", VAR_12->sid, VAR_10->ccb_h.target_id, (uintmax_t)VAR_10->ccb_h.target_lun);

     VAR_11->version_num = 1;
     VAR_11->hba_inquiry = VAR_4 | VAR_5 | VAR_6;
     VAR_11->target_sprt = 0;
     VAR_11->hba_misc = 0;
     VAR_11->hba_eng_cnt = 0;
     VAR_11->max_target = 0;
     VAR_11->initiator_id = VAR_3;
     VAR_11->max_lun = VAR_12->opt.maxluns - 1;
     VAR_11->bus_id = FUNC_0(VAR_9);
     VAR_11->base_transfer_speed = 3300;
     FUNC_6(VAR_11->sim_vid, "FreeBSD", VAR_7);
     FUNC_6(VAR_11->hba_vid, "iSCSI", VAR_2);
     FUNC_6(VAR_11->dev_name, FUNC_1(VAR_9), VAR_1);
     VAR_11->unit_number = FUNC_3(VAR_9);
     VAR_11->ccb_h.status = VAR_0;




}
