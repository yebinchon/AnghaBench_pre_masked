
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int VCHIQ_STATUS_T ;
struct TYPE_11__ {int is_master; int sync_mutex; int slot_mutex; int id; } ;
typedef TYPE_1__ VCHIQ_STATE_T ;
struct TYPE_12__ {scalar_t__ public_fourcc; size_t srvstate; int sync; int remoteport; int localport; int remove_event; int client_id; TYPE_1__* state; } ;
typedef TYPE_2__ VCHIQ_SERVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*,int const) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,int ,int *,int ,int ,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int * VAR_7 ;
 int FUNC_8 (int *) ;
 int VAR_8 ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,char*,int,...) ;
 int FUNC_11 (int ,char*,int ,int ,int,int ) ;
 int FUNC_12 (TYPE_2__*,int const) ;

VCHIQ_STATUS_T
FUNC_13(VCHIQ_SERVICE_T *VAR_9, int VAR_10)
{
 VCHIQ_STATE_T *VAR_11 = VAR_9->state;
 VCHIQ_STATUS_T VAR_12 = VAR_6;
 int VAR_13 = (VAR_9->public_fourcc != VAR_2);

 FUNC_11(VAR_8, "%d: csi:%d,%d (%s)",
  VAR_9->state->id, VAR_9->localport, VAR_10,
  VAR_7[VAR_9->srvstate]);

 switch (VAR_9->srvstate) {
 case 136:
 case 132:
 case 131:
 case 133:
  if (VAR_10)
   FUNC_10(VAR_8,
    "vchiq_close_service_internal(1) called "
    "in state %s",
    VAR_7[VAR_9->srvstate]);
  else if (VAR_13) {
   if (VAR_9->srvstate == 131) {
    VAR_12 = VAR_1;
   } else {
    VAR_9->client_id = 0;
    VAR_9->remoteport = VAR_4;
    if (VAR_9->srvstate ==
     133)
     FUNC_12(VAR_9,
      131);
   }
   FUNC_8(&VAR_9->remove_event);
  } else
   FUNC_9(VAR_9);
  break;
 case 129:
  if (VAR_10) {

   FUNC_12(VAR_9,
    133);
   FUNC_8(&VAR_9->remove_event);
  } else {

   VAR_12 = FUNC_6(VAR_11, VAR_9,
    FUNC_0
    (VAR_3,
    VAR_9->localport,
    FUNC_1(VAR_9->remoteport)),
    ((void*)0), 0, 0, 0);
  }
  break;

 case 128:
  FUNC_4(&VAR_11->sync_mutex);


 case 130:
  if (VAR_11->is_master || VAR_10) {
   if (!FUNC_3(VAR_9))
    VAR_12 = VAR_5;
  }

  FUNC_7(VAR_9);

  if (VAR_12 == VAR_6)
   VAR_12 = FUNC_6(VAR_11, VAR_9,
    FUNC_0
    (VAR_3,
    VAR_9->localport,
    FUNC_1(VAR_9->remoteport)),
    ((void*)0), 0, 0, VAR_0);

  if (VAR_12 == VAR_6) {
   if (!VAR_10) {


    FUNC_12(VAR_9,
       134);
    FUNC_5(&VAR_11->slot_mutex);
    if (VAR_9->sync)
     FUNC_5(&VAR_11->sync_mutex);
    break;
   }
  } else if (VAR_9->srvstate == 128) {
   FUNC_5(&VAR_11->sync_mutex);
   break;
  } else
   break;


  FUNC_12(VAR_9, 135);
  FUNC_5(&VAR_11->slot_mutex);
  if (VAR_9->sync)
   FUNC_5(&VAR_11->sync_mutex);

  VAR_12 = FUNC_2(VAR_9,
    135);
  break;

 case 134:
  if (!VAR_10)

   break;

  if (!VAR_11->is_master) {
   if (!FUNC_3(VAR_9)) {
    VAR_12 = VAR_5;
    break;
   }
  }

  if (VAR_12 == VAR_6)
   VAR_12 = FUNC_2(VAR_9,
    135);
  break;

 case 135:
  if (!VAR_10 && VAR_13)

   FUNC_12(VAR_9,
    131);
  VAR_12 = FUNC_2(VAR_9,
   135);
  break;

 default:
  FUNC_10(VAR_8,
   "vchiq_close_service_internal(%d) called in state %s",
   VAR_10, VAR_7[VAR_9->srvstate]);
  break;
 }

 return VAR_12;
}
