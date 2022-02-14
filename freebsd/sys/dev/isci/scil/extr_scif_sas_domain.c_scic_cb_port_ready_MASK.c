
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ controller; int parent; TYPE_1__* state_handlers; int is_port_ready; } ;
struct TYPE_4__ {int (* port_ready_handler ) (int *) ;} ;
typedef int SCI_PORT_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_2__ SCIF_SAS_DOMAIN_T ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(
   SCI_CONTROLLER_HANDLE_T VAR_2,
   SCI_PORT_HANDLE_T VAR_3
)
{
   SCIF_SAS_DOMAIN_T * VAR_4 = (SCIF_SAS_DOMAIN_T*)
                                   FUNC_3(VAR_3);

   FUNC_1((
      FUNC_2(VAR_4),
      VAR_0,
      "scic_cb_port_ready(0x%x, 0x%x) enter\n",
      VAR_2, VAR_3
   ));



   FUNC_0(FUNC_3(VAR_2) == VAR_4->controller);

   VAR_4->is_port_ready = VAR_1;

   VAR_4->state_handlers->port_ready_handler(&VAR_4->parent);
}
