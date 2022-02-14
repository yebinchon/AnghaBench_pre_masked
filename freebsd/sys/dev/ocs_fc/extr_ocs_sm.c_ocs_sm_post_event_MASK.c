
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ocs_sm_event_t ;
struct TYPE_4__ {int (* current_state ) (TYPE_1__*,int ,void*) ;} ;
typedef TYPE_1__ ocs_sm_ctx_t ;


 int FUNC_0 (TYPE_1__*,int ,void*) ;

int
FUNC_1(ocs_sm_ctx_t *VAR_0, ocs_sm_event_t VAR_1, void *VAR_2)
{
 if (VAR_0->current_state) {
  VAR_0->current_state(VAR_0, VAR_1, VAR_2);
  return 0;
 } else {
  return -1;
 }
}
