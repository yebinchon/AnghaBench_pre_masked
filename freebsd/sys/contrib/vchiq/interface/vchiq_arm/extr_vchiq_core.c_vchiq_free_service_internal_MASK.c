
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
typedef TYPE_1__ VCHIQ_STATE_T ;
struct TYPE_7__ {int srvstate; int remove_event; int localport; TYPE_1__* state; } ;
typedef TYPE_2__ VCHIQ_SERVICE_T ;




 int VAR_0 ;



 int * VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;

void
FUNC_5(VCHIQ_SERVICE_T *VAR_3)
{
 VCHIQ_STATE_T *VAR_4 = VAR_3->state;

 FUNC_3(VAR_2, "%d: fsi - (%d)",
  VAR_4->id, VAR_3->localport);

 switch (VAR_3->srvstate) {
 case 128:
 case 132:
 case 130:
 case 129:
 case 131:
  break;
 default:
  FUNC_2(VAR_2,
   "%d: fsi - (%d) in state %s",
   VAR_4->id, VAR_3->localport,
   VAR_1[VAR_3->srvstate]);
  return;
 }

 FUNC_4(VAR_3, VAR_0);

 FUNC_1(&VAR_3->remove_event);


 FUNC_0(VAR_3);
}
