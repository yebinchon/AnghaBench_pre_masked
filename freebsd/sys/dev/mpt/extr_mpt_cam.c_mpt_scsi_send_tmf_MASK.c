
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* u_int ;
typedef int target_id_t ;
struct mpt_softc {scalar_t__ verbose; TYPE_2__* tmf_req; int request_pending_list; } ;
typedef int lun_id_t ;
struct TYPE_12__ {int state; int index; int serno; scalar_t__ req_vbuf; } ;
struct TYPE_11__ {int MsgContext; void* TaskMsgContext; int LUN; void* MsgFlags; void* TaskType; int Function; void* Bus; int TargetID; } ;
typedef TYPE_1__ MSG_SCSI_TASK_MGMT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;
 int VAR_8 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int VAR_9 ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (struct mpt_softc*,TYPE_2__*) ;
 int FUNC_8 (struct mpt_softc*,scalar_t__,char*,TYPE_2__*,int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (struct mpt_softc*,TYPE_2__*) ;
 int FUNC_11 (struct mpt_softc*,int ) ;
 int FUNC_12 (struct mpt_softc*,int,TYPE_1__*) ;
 int FUNC_13 (struct mpt_softc*,TYPE_2__*,int,int,int,int ) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_14(struct mpt_softc *VAR_11, u_int VAR_12, u_int VAR_13,
    u_int VAR_14, target_id_t VAR_15, lun_id_t VAR_16, u_int VAR_17,
    int VAR_18)
{
 MSG_SCSI_TASK_MGMT *VAR_19;
 int VAR_20;





 VAR_20 = FUNC_13(VAR_11, VAR_11->tmf_req, VAR_6, VAR_6,
     VAR_18, VAR_4);
 if (VAR_20 != 0) {
  FUNC_11(VAR_11, VAR_8);
  return (VAR_0);
 }

 FUNC_7(VAR_11, VAR_11->tmf_req);
 VAR_11->tmf_req->state = VAR_5|VAR_7;

 VAR_19 = (MSG_SCSI_TASK_MGMT *)VAR_11->tmf_req->req_vbuf;
 FUNC_6(VAR_19, 0, sizeof(*VAR_19));
 VAR_19->TargetID = VAR_15;
 VAR_19->Bus = VAR_14;
 VAR_19->Function = VAR_1;
 VAR_19->TaskType = VAR_12;
 VAR_19->MsgFlags = VAR_13;
 VAR_19->MsgContext =
     FUNC_5(VAR_11->tmf_req->index | VAR_10);
 FUNC_4(VAR_19->LUN, FUNC_0(VAR_16));
 VAR_19->TaskMsgContext = VAR_17;

 FUNC_8(VAR_11, VAR_3,
     "Issuing TMF %p:%u with MsgContext of 0x%x\n", VAR_11->tmf_req,
     VAR_11->tmf_req->serno, VAR_19->MsgContext);
 if (VAR_11->verbose > VAR_3) {
  FUNC_9(VAR_19);
 }

 FUNC_1(FUNC_10(VAR_11, VAR_11->tmf_req) == 0,
     ("mpt_scsi_send_tmf: tmf_req already on pending list"));
 FUNC_2(&VAR_11->request_pending_list, VAR_11->tmf_req, VAR_9);
 VAR_20 = FUNC_12(VAR_11, sizeof(*VAR_19), VAR_19);
 if (VAR_20 != VAR_2) {
  FUNC_3(&VAR_11->request_pending_list, VAR_11->tmf_req, VAR_9);
  VAR_11->tmf_req->state = VAR_6;
  FUNC_11(VAR_11, VAR_8);
 }
 return (VAR_20);
}
