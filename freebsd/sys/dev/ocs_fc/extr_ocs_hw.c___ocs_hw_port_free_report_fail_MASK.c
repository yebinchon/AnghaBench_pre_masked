
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
struct TYPE_11__ {TYPE_5__* hw; } ;
typedef TYPE_4__ ocs_sli_port_t ;
struct TYPE_9__ {int port; } ;
struct TYPE_8__ {int (* port ) (int ,int ,TYPE_4__*) ;} ;
struct TYPE_12__ {TYPE_2__ args; TYPE_1__ callback; int os; } ;
typedef TYPE_5__ ocs_hw_t ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,TYPE_4__*) ;

__attribute__((used)) static void *
FUNC_3(ocs_sm_ctx_t *VAR_2, ocs_sm_event_t VAR_3, void *VAR_4)
{
 ocs_sli_port_t *VAR_5 = VAR_2->app;
 ocs_hw_t *VAR_6 = VAR_5->hw;

 FUNC_1("port");

 switch (VAR_3) {
 case 128:
  if (VAR_4 != ((void*)0)) {
   FUNC_0(VAR_6->os, VAR_4, VAR_1);
  }
  if (VAR_6->callback.port != ((void*)0)) {
   VAR_6->callback.port(VAR_6->args.port,
     VAR_0, VAR_5);
  }
  break;
 default:
  break;
 }

 return ((void*)0);
}
