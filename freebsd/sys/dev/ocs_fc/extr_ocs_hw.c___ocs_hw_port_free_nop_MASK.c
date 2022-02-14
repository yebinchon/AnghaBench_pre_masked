
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ocs_sm_event_t ;
struct TYPE_8__ {TYPE_2__* app; } ;
typedef TYPE_1__ ocs_sm_ctx_t ;
struct TYPE_9__ {TYPE_3__* hw; } ;
typedef TYPE_2__ ocs_sli_port_t ;
struct TYPE_10__ {int os; } ;
typedef TYPE_3__ ocs_hw_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ,void*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void *
FUNC_4(ocs_sm_ctx_t *VAR_3, ocs_sm_event_t VAR_4, void *VAR_5)
{
 ocs_sli_port_t *VAR_6 = VAR_3->app;
 ocs_hw_t *VAR_7 = VAR_6->hw;

 FUNC_3("port");

 switch (VAR_4) {
 case 130:

  if (FUNC_0(VAR_7, VAR_2, VAR_6)) {
   FUNC_1(VAR_7->os, "ocs_hw_async_call failed\n");
  }
  break;
 case 128:
  FUNC_2(VAR_3, VAR_1, VAR_5);
  break;
 case 129:
  FUNC_2(VAR_3, VAR_0, VAR_5);
  break;
 default:
  break;
 }

 return ((void*)0);
}
