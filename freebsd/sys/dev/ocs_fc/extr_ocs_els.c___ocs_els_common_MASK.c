
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ocs_sm_event_t ;
typedef int ocs_sm_ctx_t ;
struct TYPE_7__ {int display_name; } ;
struct TYPE_6__ {TYPE_1__* node; } ;
struct TYPE_5__ {int ocs; } ;






 TYPE_2__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (TYPE_2__*,int const,void*) ;
 int FUNC_1 (int ,char*,int ,char const*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;

void *
FUNC_4(const char *VAR_2, ocs_sm_ctx_t *VAR_3, ocs_sm_event_t VAR_4, void *VAR_5)
{
 FUNC_3();

 switch(VAR_4) {
 case 131:
 case 129:
 case 130:
  break;




 case 128:
  FUNC_1(VAR_0->node->ocs, "[%s] %-20s %-20s not handled - terminating ELS\n", VAR_1->display_name, VAR_2,
   FUNC_2(VAR_4));
  FUNC_0(VAR_0, 128, VAR_5);
  break;
 default:
  FUNC_1(VAR_0->node->ocs, "[%s] %-20s %-20s not handled\n", VAR_1->display_name, VAR_2,
   FUNC_2(VAR_4));
  break;
 }
 return ((void*)0);
}
