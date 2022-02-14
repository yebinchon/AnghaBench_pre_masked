
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef char* uintmax_t ;
struct isp_fc {scalar_t__ loop_down_time; int path; } ;
struct ccb_scsiio {int dummy; } ;
struct ac_device_changed {int port; int target; scalar_t__ arrived; int wwpn; } ;
struct ac_contract {scalar_t__ contract_data; int contract_number; } ;
struct TYPE_17__ {int isp_maxcmds; TYPE_1__* isp_xflist; } ;
typedef TYPE_2__ ispsoftc_t ;
struct TYPE_18__ {scalar_t__ state; int portid; int port_wwn; scalar_t__ is_initiator; scalar_t__ is_target; } ;
typedef TYPE_3__ fcportdb_t ;
struct TYPE_19__ {TYPE_3__* portdb; } ;
typedef TYPE_4__ fcparam ;
struct TYPE_16__ {int handle; struct ccb_scsiio* cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,struct ccb_scsiio*,int) ;
 struct isp_fc* FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (struct ccb_scsiio*) ;
 int FUNC_5 (struct ccb_scsiio*,int ) ;
 int FUNC_6 (struct ccb_scsiio*) ;
 scalar_t__ FUNC_7 (struct ccb_scsiio*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,struct ccb_scsiio*) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (struct ccb_scsiio*) ;
 int FUNC_11 (TYPE_2__*,TYPE_3__*,int,int) ;
 int FUNC_12 (TYPE_2__*,int,char*,int,...) ;
 int FUNC_13 (TYPE_2__*,int) ;
 char* VAR_11 ;
 int FUNC_14 (int ,int ,struct ac_contract*) ;

__attribute__((used)) static void
FUNC_15(ispsoftc_t *VAR_12, int VAR_13)
{
 fcparam *VAR_14 = FUNC_0(VAR_12, VAR_13);
 struct isp_fc *VAR_15 = FUNC_2(VAR_12, VAR_13);
 fcportdb_t *VAR_16;
 struct ac_contract VAR_17;
 struct ac_device_changed *VAR_18;
 int VAR_19, VAR_20;

 FUNC_12(VAR_12, VAR_9|VAR_7, "Chan %d Loop is dead", VAR_13);




 for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++) {
  VAR_16 = &VAR_14->portdb[VAR_19];

  if (VAR_16->state == VAR_2)
   continue;

  for (VAR_20 = 0; VAR_20 < VAR_12->isp_maxcmds; VAR_20++) {
   struct ccb_scsiio *VAR_21;

   if (FUNC_3(VAR_12->isp_xflist[VAR_20].handle) != VAR_5) {
    continue;
   }
   if ((VAR_21 = VAR_12->isp_xflist[VAR_20].cmd) == ((void*)0)) {
    continue;
                        }
   if (VAR_19 != FUNC_6(VAR_21)) {
    continue;
   }
   FUNC_12(VAR_12, VAR_8, "command handle 0x%x for %d.%d.%jx orphaned by loop down timeout",
       VAR_12->isp_xflist[VAR_20].handle, VAR_13, FUNC_6(VAR_21),
       (uintmax_t)FUNC_4(VAR_21));






   if (FUNC_8(VAR_12, VAR_4, VAR_21) == 0) {
    continue;
   }

   if (FUNC_7(VAR_21)) {
    FUNC_1(VAR_12, VAR_21, VAR_12->isp_xflist[VAR_20].handle);
   }
   FUNC_9(VAR_12, VAR_12->isp_xflist[VAR_20].handle);
   FUNC_12(VAR_12, VAR_8, "command handle 0x%x for %d.%d.%jx could not be aborted and was destroyed",
       VAR_12->isp_xflist[VAR_20].handle, VAR_13, FUNC_6(VAR_21),
       (uintmax_t)FUNC_4(VAR_21));
   FUNC_5(VAR_21, VAR_3);
   FUNC_10(VAR_21);
  }

  FUNC_12(VAR_12, VAR_6, VAR_11, VAR_13, VAR_19, VAR_16->portid, "Loop Down Timeout");
  if (VAR_16->is_target) {
   VAR_16->is_target = 0;
   FUNC_11(VAR_12, VAR_16, VAR_13, VAR_19);
  }
  if (VAR_16->is_initiator) {
   VAR_16->is_initiator = 0;
   VAR_17.contract_number = VAR_1;
   VAR_18 = (struct ac_device_changed *) VAR_17.contract_data;
   VAR_18->wwpn = VAR_16->port_wwn;
   VAR_18->port = VAR_16->portid;
   VAR_18->target = VAR_19;
   VAR_18->arrived = 0;
   FUNC_14(VAR_0, VAR_15->path, &VAR_17);
  }
 }

 FUNC_13(VAR_12, VAR_13);
 VAR_15->loop_down_time = 0;
}
