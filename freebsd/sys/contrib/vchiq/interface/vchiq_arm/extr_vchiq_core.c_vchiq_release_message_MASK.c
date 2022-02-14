
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {TYPE_2__* remote; } ;
typedef TYPE_1__ VCHIQ_STATE_T ;
typedef int VCHIQ_SLOT_INFO_T ;
struct TYPE_16__ {int slot_first; int slot_last; int slot_sync; } ;
typedef TYPE_2__ VCHIQ_SHARED_STATE_T ;
struct TYPE_17__ {TYPE_1__* state; } ;
typedef TYPE_3__ VCHIQ_SERVICE_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;
struct TYPE_18__ {int msgid; } ;
typedef TYPE_4__ VCHIQ_HEADER_T ;


 int FUNC_0 (TYPE_1__*,void*) ;
 int * FUNC_1 (TYPE_1__*,int) ;
 int VAR_0 ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_1__*,int *,TYPE_4__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

void
FUNC_6(VCHIQ_SERVICE_HANDLE_T VAR_1, VCHIQ_HEADER_T *VAR_2)
{
 VCHIQ_SERVICE_T *VAR_3 = FUNC_2(VAR_1);
 VCHIQ_SHARED_STATE_T *VAR_4;
 VCHIQ_STATE_T *VAR_5;
 int VAR_6;

 if (!VAR_3)
  return;

 VAR_5 = VAR_3->state;
 VAR_4 = VAR_5->remote;

 VAR_6 = FUNC_0(VAR_5, (void *)VAR_2);

 if ((VAR_6 >= VAR_4->slot_first) &&
  (VAR_6 <= VAR_4->slot_last)) {
  int VAR_7 = VAR_2->msgid;
  if (VAR_7 & VAR_0) {
   VCHIQ_SLOT_INFO_T *VAR_8 =
    FUNC_1(VAR_5, VAR_6);

   FUNC_4(VAR_5, VAR_8, VAR_2, VAR_3);
  }
 } else if (VAR_6 == VAR_4->slot_sync)
  FUNC_3(VAR_5, VAR_2);

 FUNC_5(VAR_3);
}
