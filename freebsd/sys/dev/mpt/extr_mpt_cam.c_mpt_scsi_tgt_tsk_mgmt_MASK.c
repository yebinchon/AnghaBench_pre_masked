
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int uintmax_t ;
struct TYPE_8__ {int inots; } ;
typedef TYPE_2__ tgt_resource_t ;
struct mpt_softc {int dummy; } ;
struct TYPE_7__ {int status; scalar_t__ target_lun; } ;
struct ccb_immediate_notify {int initiator_id; TYPE_1__ ccb_h; int arg; scalar_t__ seq_id; int tag_id; } ;
typedef int request_t ;
struct TYPE_9__ {union ccb* ccb; int tag_id; } ;
typedef TYPE_3__ mpt_tgt_state_t ;
typedef int mpt_task_mgmt_t ;
struct TYPE_10__ {int stqe; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;



 TYPE_3__* FUNC_0 (struct mpt_softc*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct mpt_softc*,int ,char*,...) ;
 int FUNC_4 (struct mpt_softc*,int *,int *,int ,int *,int ) ;
 TYPE_4__ VAR_12 ;
 int FUNC_5 (union ccb*) ;

__attribute__((used)) static void
FUNC_6(struct mpt_softc *VAR_13, request_t *VAR_14, mpt_task_mgmt_t VAR_15,
    tgt_resource_t *VAR_16, int VAR_17)
{
 struct ccb_immediate_notify *VAR_18;
 mpt_tgt_state_t *VAR_19;

 VAR_19 = FUNC_0(VAR_13, VAR_14);
 VAR_18 = (struct ccb_immediate_notify *) FUNC_1(&VAR_16->inots);
 if (VAR_18 == ((void*)0)) {
  FUNC_3(VAR_13, VAR_2, "no INOTSs- sending back BSY\n");
  FUNC_4(VAR_13, ((void*)0), VAR_14, VAR_11, ((void*)0), 0);
  return;
 }
 FUNC_2(&VAR_16->inots, VAR_12.stqe);
 FUNC_3(VAR_13, VAR_1,
     "Get FREE INOT %p lun %jx\n", VAR_18,
     (uintmax_t)VAR_18->ccb_h.target_lun);

 VAR_18->initiator_id = VAR_17;
 VAR_18->tag_id = VAR_19->tag_id;
 VAR_18->seq_id = 0;




 switch (VAR_15) {
 case 129:
  VAR_18->arg = VAR_9;
  break;
 case 134:
  VAR_18->arg = VAR_3;
  break;
 case 132:
  VAR_18->arg = VAR_5;
  break;
 case 130:
  VAR_18->arg = VAR_8;
  break;
 case 131:
  VAR_18->arg = VAR_6;
  break;
 case 128:
  VAR_18->arg = VAR_10;
  break;
 case 133:
  VAR_18->arg = VAR_4;
  break;
 default:
  VAR_18->arg = VAR_7;
  break;
 }
 VAR_19->ccb = (union ccb *) VAR_18;
 VAR_18->ccb_h.status = VAR_0;
 FUNC_5((union ccb *)VAR_18);
}
