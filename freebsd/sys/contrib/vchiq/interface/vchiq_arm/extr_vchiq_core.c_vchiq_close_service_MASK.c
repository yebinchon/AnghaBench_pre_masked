
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_8__ {size_t srvstate; int localport; TYPE_4__* state; int remove_event; } ;
typedef TYPE_1__ VCHIQ_SERVICE_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;
struct TYPE_9__ {scalar_t__ slot_handler_thread; int id; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_1__*,int ) ;
 int * VAR_9 ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 int VAR_10 ;
 int FUNC_7 (int ,char*,int ,int ) ;
 int FUNC_8 (int ,char*,int ,int ,int ) ;

VCHIQ_STATUS_T
FUNC_9(VCHIQ_SERVICE_HANDLE_T VAR_11)
{

 VCHIQ_SERVICE_T *VAR_12 = FUNC_2(VAR_11);
 VCHIQ_STATUS_T VAR_13 = VAR_7;

 if (!VAR_12)
  return VAR_0;

 FUNC_7(VAR_10,
  "%d: close_service:%d",
  VAR_12->state->id, VAR_12->localport);

 if ((VAR_12->srvstate == VAR_3) ||
  (VAR_12->srvstate == VAR_5) ||
  (VAR_12->srvstate == VAR_4)) {
  FUNC_5(VAR_12);
  return VAR_0;
 }

 FUNC_3(VAR_12);

 if (VAR_8 == VAR_12->state->slot_handler_thread) {
  VAR_13 = FUNC_6(VAR_12,
   0 );
  FUNC_0(VAR_13 == VAR_2);
 } else {

  FUNC_4(VAR_12->state, VAR_12, VAR_1);
 }

 while (1) {
  if (FUNC_1(&VAR_12->remove_event) != 0) {
   VAR_13 = VAR_2;
   break;
  }

  if ((VAR_12->srvstate == VAR_3) ||
   (VAR_12->srvstate == VAR_5) ||
   (VAR_12->srvstate == VAR_6))
   break;

  FUNC_8(VAR_10,
   "%d: close_service:%d - waiting in state %s",
   VAR_12->state->id, VAR_12->localport,
   VAR_9[VAR_12->srvstate]);
 }

 if ((VAR_13 == VAR_7) &&
  (VAR_12->srvstate != VAR_3) &&
  (VAR_12->srvstate != VAR_5))
  VAR_13 = VAR_0;

 FUNC_5(VAR_12);

 return VAR_13;
}
