
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int shutdown_reason; int display_name; struct TYPE_9__* ocs; struct TYPE_9__* app; } ;
typedef TYPE_1__ ocs_t ;
typedef int ocs_sm_event_t ;
typedef TYPE_1__ ocs_sm_ctx_t ;
typedef TYPE_1__ ocs_node_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,TYPE_1__*,int,void*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,char*,int ,char const*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void *
FUNC_5(const char *VAR_4, ocs_sm_ctx_t *VAR_5, ocs_sm_event_t VAR_6, void *VAR_7)
{
 ocs_node_t *VAR_8 = ((void*)0);
 ocs_t *VAR_9 = ((void*)0);
 FUNC_1(VAR_5, ((void*)0));
 VAR_8 = VAR_5->app;
 FUNC_1(VAR_8, ((void*)0));
 VAR_9 = VAR_8->ocs;
 FUNC_1(VAR_9, ((void*)0));

 switch(VAR_6) {


 case 130:
  FUNC_2(VAR_9, "[%s] %-20s %-20s\n", VAR_8->display_name, VAR_4, FUNC_4(VAR_6));
  VAR_8->shutdown_reason = VAR_0;
  FUNC_3(VAR_8, VAR_3, ((void*)0));
  break;
 case 129:
  FUNC_2(VAR_9, "[%s] %-20s %-20s\n", VAR_8->display_name, VAR_4, FUNC_4(VAR_6));
  VAR_8->shutdown_reason = VAR_1;
  FUNC_3(VAR_8, VAR_3, ((void*)0));
  break;
 case 128:
  FUNC_2(VAR_9, "[%s] %-20s %-20s\n", VAR_8->display_name, VAR_4, FUNC_4(VAR_6));
  VAR_8->shutdown_reason = VAR_2;
  FUNC_3(VAR_8, VAR_3, ((void*)0));
  break;

 default:

  FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);
  break;
 }
 return ((void*)0);
}
