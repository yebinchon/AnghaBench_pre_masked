
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mpt_softc {int dummy; } ;
struct mpt_raid_action_result {void* action_status; int action_data; } ;
struct TYPE_6__ {scalar_t__ req_vbuf; void* IOCStatus; } ;
typedef TYPE_1__ request_t ;
struct TYPE_8__ {int ActionStatus; int ActionData; int IOCStatus; } ;
struct TYPE_7__ {int Action; } ;
typedef TYPE_2__ MSG_RAID_ACTION_REQUEST ;
typedef TYPE_3__ MSG_RAID_ACTION_REPLY ;
typedef int MSG_DEFAULT_REPLY ;




 struct mpt_raid_action_result* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct mpt_softc*,char*) ;

__attribute__((used)) static int
FUNC_4(struct mpt_softc *VAR_1, request_t *VAR_2,
    MSG_DEFAULT_REPLY *VAR_3)
{
 MSG_RAID_ACTION_REPLY *VAR_4;
 struct mpt_raid_action_result *VAR_5;
 MSG_RAID_ACTION_REQUEST *VAR_6;

 VAR_4 = (MSG_RAID_ACTION_REPLY *)VAR_3;
 VAR_2->IOCStatus = FUNC_1(VAR_4->IOCStatus);
 VAR_6 = (MSG_RAID_ACTION_REQUEST *)VAR_2->req_vbuf;

 switch (VAR_6->Action) {
 case 128:
  FUNC_3(VAR_1, "QUIESCE PHYSIO DONE\n");
  break;
 case 129:
  FUNC_3(VAR_1, "ENABLY PHYSIO DONE\n");
  break;
 default:
  break;
 }
 VAR_5 = FUNC_0(VAR_2);
 FUNC_2(&VAR_5->action_data, &VAR_4->ActionData,
     sizeof(VAR_5->action_data));
 VAR_5->action_status = FUNC_1(VAR_4->ActionStatus);
 return (VAR_0);
}
