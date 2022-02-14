
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ** services; } ;
typedef TYPE_2__ VCHIQ_STATE_T ;
struct TYPE_6__ {int userdata; } ;
struct TYPE_8__ {scalar_t__ ref_count; scalar_t__ srvstate; size_t localport; TYPE_1__ base; int (* userdata_term ) (int ) ;int bulk_mutex; int bulk_remove_event; int remove_event; TYPE_2__* state; } ;
typedef TYPE_3__ VCHIQ_SERVICE_T ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

void
FUNC_7(VCHIQ_SERVICE_T *VAR_2)
{
 VCHIQ_STATE_T *VAR_3 = VAR_2->state;
 FUNC_4(&VAR_1);
 FUNC_0(!VAR_2 || (VAR_2->ref_count == 0));
 if (VAR_2 && VAR_2->ref_count) {
  VAR_2->ref_count--;
  if (!VAR_2->ref_count) {
   FUNC_0(VAR_2->srvstate != VAR_0);
   VAR_3->services[VAR_2->localport] = ((void*)0);

   FUNC_1(&VAR_2->remove_event);
   FUNC_1(&VAR_2->bulk_remove_event);
   FUNC_3(&VAR_2->bulk_mutex);
  } else
   VAR_2 = ((void*)0);
 }
 FUNC_5(&VAR_1);

 if (VAR_2 && VAR_2->userdata_term)
  VAR_2->userdata_term(VAR_2->base.userdata);

 FUNC_2(VAR_2);
}
