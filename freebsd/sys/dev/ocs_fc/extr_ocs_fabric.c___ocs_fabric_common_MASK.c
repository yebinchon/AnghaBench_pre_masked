
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int ocs_sm_event_t ;
struct TYPE_7__ {int shutdown_reason; struct TYPE_7__* app; } ;
typedef TYPE_1__ ocs_sm_ctx_t ;
typedef TYPE_1__ ocs_node_t ;




 int VAR_0 ;
 int FUNC_0 (char const*,TYPE_1__*,int,void*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void *
FUNC_3(const char *VAR_1, ocs_sm_ctx_t *VAR_2, ocs_sm_event_t VAR_3, void *VAR_4)
{
 ocs_node_t *VAR_5 = ((void*)0);
 FUNC_1(VAR_2, ((void*)0));
 FUNC_1(VAR_2->app, ((void*)0));
 VAR_5 = VAR_2->app;

 switch(VAR_3) {
 case 129:
  break;
 case 128:
  VAR_5->shutdown_reason = VAR_0;
  FUNC_2(VAR_5);
  break;

 default:

  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
  break;
 }
 return ((void*)0);
}
