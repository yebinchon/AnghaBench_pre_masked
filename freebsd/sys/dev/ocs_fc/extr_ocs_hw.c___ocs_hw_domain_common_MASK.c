
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ocs_sm_event_t ;
struct TYPE_5__ {TYPE_3__* app; } ;
typedef TYPE_1__ ocs_sm_ctx_t ;
struct TYPE_6__ {int os; } ;
typedef TYPE_2__ ocs_hw_t ;
struct TYPE_7__ {TYPE_2__* hw; } ;
typedef TYPE_3__ ocs_domain_t ;
typedef int int32_t ;



 int FUNC_0 (int ,char*,char const*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int32_t
FUNC_3(const char *VAR_0, ocs_sm_ctx_t *VAR_1, ocs_sm_event_t VAR_2, void *VAR_3)
{
 ocs_domain_t *VAR_4 = VAR_1->app;
 ocs_hw_t *VAR_5 = VAR_4->hw;

 FUNC_2("domain");

 switch (VAR_2) {
 case 128:

  break;

 default:
  FUNC_0(VAR_5->os, "%s %-20s not handled\n", VAR_0, FUNC_1(VAR_2));
  break;
 }

 return 0;
}
