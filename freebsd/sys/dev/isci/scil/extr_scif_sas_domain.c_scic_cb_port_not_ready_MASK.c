
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_5__ {scalar_t__ controller; int parent; TYPE_1__* state_handlers; int is_port_ready; } ;
struct TYPE_4__ {int (* port_not_ready_handler ) (int *,int ) ;} ;
typedef int SCI_PORT_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_2__ SCIF_SAS_DOMAIN_T ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(
   SCI_CONTROLLER_HANDLE_T VAR_3,
   SCI_PORT_HANDLE_T VAR_4,
   U32 VAR_5
)
{
   SCIF_SAS_DOMAIN_T * VAR_6 = (SCIF_SAS_DOMAIN_T*)
                                   FUNC_3(VAR_4);

   FUNC_1((
      FUNC_2(VAR_6),
      VAR_2,
      "scic_cb_port_not_ready(0x%x, 0x%x) enter\n",
      VAR_3, VAR_4
   ));



   FUNC_0(FUNC_3(VAR_3) == VAR_6->controller);



   if (VAR_5 != VAR_1)
   {
      VAR_6->is_port_ready = VAR_0;

      VAR_6->state_handlers->port_not_ready_handler(
                                    &VAR_6->parent, VAR_5);
   }
}
