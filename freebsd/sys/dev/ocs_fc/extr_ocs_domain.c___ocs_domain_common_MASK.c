
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ocs_sm_event_t ;
struct TYPE_4__ {TYPE_2__* app; } ;
typedef TYPE_1__ ocs_sm_ctx_t ;
struct TYPE_5__ {int ocs; } ;
typedef TYPE_2__ ocs_domain_t ;






 int FUNC_0 (int ,char*,char const*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void *
FUNC_2(const char *VAR_0, ocs_sm_ctx_t *VAR_1, ocs_sm_event_t VAR_2, void *VAR_3)
{
 ocs_domain_t *VAR_4 = VAR_1->app;

 switch(VAR_2) {
 case 130:
 case 128:
 case 129:
 case 131:

  break;
 default:
  FUNC_0(VAR_4->ocs, "%-20s %-20s not handled\n", VAR_0, FUNC_1(VAR_2));
  break;
 }

 return ((void*)0);
}
