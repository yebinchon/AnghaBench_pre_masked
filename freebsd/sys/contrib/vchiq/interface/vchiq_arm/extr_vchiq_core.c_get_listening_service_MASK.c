
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int unused_service; TYPE_2__** services; } ;
typedef TYPE_1__ VCHIQ_STATE_T ;
struct TYPE_7__ {int public_fourcc; scalar_t__ srvstate; scalar_t__ remoteport; } ;
typedef TYPE_2__ VCHIQ_SERVICE_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static VCHIQ_SERVICE_T *
FUNC_2(VCHIQ_STATE_T *VAR_4, int VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_5 == VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_4->unused_service; VAR_6++) {
  VCHIQ_SERVICE_T *VAR_7 = VAR_4->services[VAR_6];
  if (VAR_7 &&
   (VAR_7->public_fourcc == VAR_5) &&
   ((VAR_7->srvstate == VAR_2) ||
   ((VAR_7->srvstate == VAR_3) &&
   (VAR_7->remoteport == VAR_1)))) {
   FUNC_1(VAR_7);
   return VAR_7;
  }
 }

 return ((void*)0);
}
