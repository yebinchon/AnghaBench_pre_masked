
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ocs_sm_event_t ;
struct TYPE_10__ {TYPE_4__* app; } ;
typedef TYPE_3__ ocs_sm_ctx_t ;
struct TYPE_11__ {int fc_id; int indicator; TYPE_5__* hw; } ;
typedef TYPE_4__ ocs_sli_port_t ;
struct TYPE_9__ {int port; } ;
struct TYPE_8__ {int (* port ) (int ,int ,TYPE_4__*) ;} ;
struct TYPE_12__ {TYPE_2__ args; TYPE_1__ callback; int os; int sli; } ;
typedef TYPE_5__ ocs_hw_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,TYPE_4__*) ;

__attribute__((used)) static void *
FUNC_5(ocs_sm_ctx_t *VAR_3, ocs_sm_event_t VAR_4, void *VAR_5)
{
 ocs_sli_port_t *VAR_6 = VAR_3->app;
 ocs_hw_t *VAR_7 = VAR_6->hw;

 FUNC_3("port");

 switch (VAR_4) {
 case 128:

  if (FUNC_2(&VAR_7->sli, VAR_2, VAR_6->indicator)) {
   FUNC_1(VAR_7->os, "FCOE_VPI free failure addr=%#x\n", VAR_6->fc_id);
  }


  if (VAR_5 != ((void*)0)) {
   FUNC_0(VAR_7->os, VAR_5, VAR_1);
  }
  if (VAR_7->callback.port != ((void*)0)) {
   VAR_7->callback.port(VAR_7->args.port,
     VAR_0, VAR_6);
  }
  break;
 default:
  break;
 }

 return ((void*)0);
}
