
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int id; } ;
typedef TYPE_1__ VCHIQ_STATE_T ;
struct TYPE_8__ {int remoteport; int localport; TYPE_1__* state; } ;
typedef TYPE_2__ VCHIQ_SERVICE_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;

void
FUNC_3(VCHIQ_SERVICE_T *VAR_2)
{
 VCHIQ_STATE_T *VAR_3 = VAR_2->state;

 FUNC_2(VAR_1, "%d: tsi - (%d<->%d)",
  VAR_3->id, VAR_2->localport, VAR_2->remoteport);

 FUNC_0(VAR_2);


 FUNC_1(VAR_3, VAR_2, VAR_0);
}
