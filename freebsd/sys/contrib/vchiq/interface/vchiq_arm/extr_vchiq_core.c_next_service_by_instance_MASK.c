
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int unused_service; TYPE_2__** services; } ;
typedef TYPE_1__ VCHIQ_STATE_T ;
struct TYPE_6__ {scalar_t__ srvstate; scalar_t__ instance; scalar_t__ ref_count; } ;
typedef TYPE_2__ VCHIQ_SERVICE_T ;
typedef scalar_t__ VCHIQ_INSTANCE_T ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

VCHIQ_SERVICE_T *
FUNC_3(VCHIQ_STATE_T *VAR_2, VCHIQ_INSTANCE_T VAR_3,
 int *VAR_4)
{
 VCHIQ_SERVICE_T *VAR_5 = ((void*)0);
 int VAR_6 = *VAR_4;

 FUNC_1(&VAR_1);
 while (VAR_6 < VAR_2->unused_service) {
  VCHIQ_SERVICE_T *VAR_7 = VAR_2->services[VAR_6++];
  if (VAR_7 && (VAR_7->srvstate != VAR_0) &&
   (VAR_7->instance == VAR_3)) {
   VAR_5 = VAR_7;
   FUNC_0(VAR_5->ref_count == 0);
   VAR_5->ref_count++;
   break;
  }
 }
 FUNC_2(&VAR_1);

 *VAR_4 = VAR_6;

 return VAR_5;
}
