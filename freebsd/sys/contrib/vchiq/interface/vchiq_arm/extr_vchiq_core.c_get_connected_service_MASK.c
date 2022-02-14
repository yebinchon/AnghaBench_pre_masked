
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int unused_service; TYPE_2__** services; } ;
typedef TYPE_1__ VCHIQ_STATE_T ;
struct TYPE_7__ {scalar_t__ srvstate; unsigned int remoteport; } ;
typedef TYPE_2__ VCHIQ_SERVICE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static VCHIQ_SERVICE_T *
FUNC_1(VCHIQ_STATE_T *VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1->unused_service; VAR_3++) {
  VCHIQ_SERVICE_T *VAR_4 = VAR_1->services[VAR_3];
  if (VAR_4 && (VAR_4->srvstate == VAR_0)
   && (VAR_4->remoteport == VAR_2)) {
   FUNC_0(VAR_4);
   return VAR_4;
  }
 }
 return ((void*)0);
}
