
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_7__ {scalar_t__ public_fourcc; int srvstate; int service_use_count; int remove_event; scalar_t__ closing; void* remoteport; scalar_t__ client_id; int handle; int auto_close; } ;
typedef TYPE_1__ VCHIQ_SERVICE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;


 scalar_t__ VAR_6 ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int *,int *) ;
 int * VAR_7 ;
 int FUNC_2 (int *) ;
 int VAR_8 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static VCHIQ_STATUS_T
FUNC_7(VCHIQ_SERVICE_T *VAR_9, int VAR_10)
{
 VCHIQ_STATUS_T VAR_11;
 int VAR_12 = (VAR_9->public_fourcc != VAR_1);
 int VAR_13;

 switch (VAR_9->srvstate) {
 case 128:
 case 130:
 case 131:
  if (VAR_12) {
   if (VAR_9->auto_close) {
    VAR_9->client_id = 0;
    VAR_9->remoteport = VAR_2;
    VAR_13 = 129;
   } else
    VAR_13 = VAR_6;
  } else
   VAR_13 = VAR_5;
  FUNC_6(VAR_9, VAR_13);
  break;
 case 129:
  break;
 default:
  FUNC_4(VAR_8,
   "close_service_complete(%x) called in state %s",
   VAR_9->handle, VAR_7[VAR_9->srvstate]);
  FUNC_0(1, "close_service_complete in unexpected state\n");
  return VAR_0;
 }

 VAR_11 = FUNC_1(VAR_9,
  VAR_4, ((void*)0), ((void*)0));

 if (VAR_11 != VAR_3) {
  int VAR_14 = VAR_9->service_use_count;
  int VAR_15;

  for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)


   FUNC_5(VAR_9);

  VAR_9->client_id = 0;
  VAR_9->remoteport = VAR_2;

  if (VAR_9->srvstate == VAR_5)
   FUNC_3(VAR_9);
  else if (VAR_9->srvstate != VAR_6) {
   if (VAR_12)
    VAR_9->closing = 0;

   FUNC_2(&VAR_9->remove_event);
  }
 } else
  FUNC_6(VAR_9, VAR_10);

 return VAR_11;
}
