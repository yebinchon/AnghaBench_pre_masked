
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ocs_sm_function_t ;
struct TYPE_4__ {scalar_t__ current_state; } ;
typedef TYPE_1__ ocs_sm_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,void*) ;

void
FUNC_1(ocs_sm_ctx_t *VAR_3, ocs_sm_function_t VAR_4, void *VAR_5)
{
 if (VAR_3->current_state == VAR_4) {
  FUNC_0(VAR_3, VAR_2, VAR_5);
 } else {
  FUNC_0(VAR_3, VAR_1, VAR_5);
  VAR_3->current_state = VAR_4;
  FUNC_0(VAR_3, VAR_0, VAR_5);
 }
}
