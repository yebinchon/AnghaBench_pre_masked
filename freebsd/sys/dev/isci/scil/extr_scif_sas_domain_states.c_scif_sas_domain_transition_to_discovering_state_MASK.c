
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state_machine; } ;
struct TYPE_5__ {TYPE_1__ parent; int controller; } ;
typedef TYPE_2__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(
   SCIF_SAS_DOMAIN_T * VAR_1
)
{
   FUNC_1(VAR_1->controller);

   FUNC_0(
      &VAR_1->parent.state_machine, VAR_0
   );
}
