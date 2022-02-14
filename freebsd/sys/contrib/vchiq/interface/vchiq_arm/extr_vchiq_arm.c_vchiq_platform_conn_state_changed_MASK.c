
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int threadname ;
struct TYPE_6__ {int id; scalar_t__ conn_state; } ;
typedef TYPE_1__ VCHIQ_STATE_T ;
typedef int VCHIQ_CONNSTATE_T ;
struct TYPE_7__ {int first_connect; int susp_res_lock; int * ka_thread; } ;
typedef TYPE_2__ VCHIQ_ARM_STATE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ,char*,int,int ,int ) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 int * FUNC_5 (int *,void*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(VCHIQ_STATE_T *VAR_3,
 VCHIQ_CONNSTATE_T VAR_4, VCHIQ_CONNSTATE_T VAR_5)
{
 VCHIQ_ARM_STATE_T *VAR_6 = FUNC_4(VAR_3);
 FUNC_3(VAR_2, "%d: %s->%s", VAR_3->id,
  FUNC_0(VAR_4), FUNC_0(VAR_5));
 if (VAR_3->conn_state == VAR_0) {
  FUNC_7(&VAR_6->susp_res_lock);
  if (!VAR_6->first_connect) {
   char VAR_7[10];
   VAR_6->first_connect = 1;
   FUNC_8(&VAR_6->susp_res_lock);
   FUNC_1(VAR_7, sizeof(VAR_7), "VCHIQka-%d",
    VAR_3->id);
   VAR_6->ka_thread = FUNC_5(
    &VAR_1,
    (void *)VAR_3,
    VAR_7);
   if (VAR_6->ka_thread == ((void*)0)) {
    FUNC_2(VAR_2,
     "vchiq: FATAL: couldn't create thread %s",
     VAR_7);
   } else {
    FUNC_6(VAR_6->ka_thread);
   }
  } else
   FUNC_8(&VAR_6->susp_res_lock);
 }
}
