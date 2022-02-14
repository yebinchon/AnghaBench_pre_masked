
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ocs_sm_event_t ;
struct TYPE_5__ {TYPE_2__* app; } ;
typedef TYPE_1__ ocs_sm_ctx_t ;
struct TYPE_6__ {TYPE_3__* hw; } ;
typedef TYPE_2__ ocs_sli_port_t ;
struct TYPE_7__ {int os; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef int int32_t ;





 int VAR_0 ;
 int FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int ,char*,char const*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int32_t
FUNC_4(const char *VAR_1, ocs_sm_ctx_t *VAR_2, ocs_sm_event_t VAR_3, void *VAR_4)
{
 ocs_sli_port_t *VAR_5 = VAR_2->app;
 ocs_hw_t *VAR_6 = VAR_5->hw;

 FUNC_3("port");

 switch (VAR_3) {
 case 130:

  break;

 case 128:
 case 129:
  if (VAR_4 != ((void*)0)) {
   FUNC_0(VAR_6->os, VAR_4, VAR_0);
  }

 default:
  FUNC_1(VAR_6->os, "%s %-20s not handled\n", VAR_1, FUNC_2(VAR_3));
  break;
 }

 return 0;
}
