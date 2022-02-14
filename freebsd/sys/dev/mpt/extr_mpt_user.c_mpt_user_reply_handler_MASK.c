
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct mpt_user_raid_action_result {int action_data; int volume_status; int action_status; } ;
struct mpt_softc {int request_pending_list; } ;
struct TYPE_7__ {int state; scalar_t__ req_vbuf; int IOCStatus; } ;
typedef TYPE_1__ request_t ;
struct TYPE_8__ {int ActionData; int VolumeStatus; int ActionStatus; int IOCStatus; } ;
typedef TYPE_2__ MSG_RAID_ACTION_REPLY ;
typedef int MSG_DEFAULT_REPLY ;


 int FUNC_0 (struct mpt_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (struct mpt_softc*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(struct mpt_softc *VAR_6, request_t *VAR_7,
    uint32_t VAR_8, MSG_DEFAULT_REPLY *VAR_9)
{
 MSG_RAID_ACTION_REPLY *VAR_10;
 struct mpt_user_raid_action_result *VAR_11;

 if (VAR_7 == ((void*)0))
  return (VAR_4);

 if (VAR_9 != ((void*)0)) {
  VAR_10 = (MSG_RAID_ACTION_REPLY *)VAR_9;
  VAR_7->IOCStatus = FUNC_3(VAR_10->IOCStatus);
  VAR_11 = (struct mpt_user_raid_action_result *)
      (((uint8_t *)VAR_7->req_vbuf) + FUNC_0(VAR_6));
  VAR_11->action_status = VAR_10->ActionStatus;
  VAR_11->volume_status = VAR_10->VolumeStatus;
  FUNC_2(&VAR_10->ActionData, VAR_11->action_data,
      sizeof(VAR_11->action_data));
 }

 VAR_7->state &= ~VAR_2;
 VAR_7->state |= VAR_0;
 FUNC_1(&VAR_6->request_pending_list, VAR_7, VAR_5);

 if ((VAR_7->state & VAR_1) != 0) {
  FUNC_5(VAR_7);
 } else if ((VAR_7->state & VAR_3) != 0) {



  FUNC_4(VAR_6, VAR_7);
 }

 return (VAR_4);
}
