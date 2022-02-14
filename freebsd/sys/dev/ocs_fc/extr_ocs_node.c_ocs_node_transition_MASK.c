
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ocs_sm_function_t ;
struct TYPE_7__ {scalar_t__ current_state; } ;
typedef TYPE_1__ ocs_sm_ctx_t ;
struct TYPE_8__ {TYPE_1__ sm; } ;
typedef TYPE_2__ ocs_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,void*) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(ocs_node_t *VAR_3, ocs_sm_function_t VAR_4, void *VAR_5)
{
 ocs_sm_ctx_t *VAR_6 = &VAR_3->sm;

 FUNC_0(VAR_3);
  if (VAR_6->current_state == VAR_4) {
   FUNC_1(VAR_3, VAR_2, VAR_5);
  } else {
   FUNC_1(VAR_3, VAR_1, VAR_5);
   VAR_6->current_state = VAR_4;
   FUNC_1(VAR_3, VAR_0, VAR_5);
  }
 FUNC_2(VAR_3);
}
