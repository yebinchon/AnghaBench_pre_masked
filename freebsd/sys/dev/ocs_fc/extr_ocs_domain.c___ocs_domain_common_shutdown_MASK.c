
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ocs_sm_event_t ;
struct TYPE_4__ {TYPE_2__* app; } ;
typedef TYPE_1__ ocs_sm_ctx_t ;
struct TYPE_5__ {int ocs; int domain_found_pending; int pending_drec; } ;
typedef TYPE_2__ ocs_domain_t ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (void*,int *) ;
 int FUNC_1 (int ,char*,char const*,int ) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void *
FUNC_4(const char *VAR_2, ocs_sm_ctx_t *VAR_3, ocs_sm_event_t VAR_4, void *VAR_5)
{
 ocs_domain_t *VAR_6 = VAR_3->app;

 switch(VAR_4) {
 case 130:
 case 128:
 case 129:
  break;
 case 132:
  FUNC_0(VAR_5, ((void*)0));

  FUNC_2(&VAR_6->pending_drec, VAR_5, sizeof(VAR_6->pending_drec));
  VAR_6->domain_found_pending = VAR_1;
  break;
 case 131:


  VAR_6->domain_found_pending = VAR_0;
  break;

 default:
  FUNC_1(VAR_6->ocs, "%-20s %-20s not handled\n", VAR_2, FUNC_3(VAR_4));
  break;
 }

 return ((void*)0);
}
