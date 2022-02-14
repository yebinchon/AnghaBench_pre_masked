
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ broadcast_change_count; int core_object; } ;
typedef int SCI_PORT_HANDLE_T ;
typedef int SCI_PHY_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_1__ SCIF_SAS_DOMAIN_T ;
typedef int SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(
   SCI_CONTROLLER_HANDLE_T VAR_2,
   SCI_PORT_HANDLE_T VAR_3,
   SCI_PHY_HANDLE_T VAR_4
)
{
   SCIF_SAS_DOMAIN_T * VAR_5 = (SCIF_SAS_DOMAIN_T*)
                                   FUNC_2(VAR_3);

   SCIF_SAS_CONTROLLER_T * VAR_6 = (SCIF_SAS_CONTROLLER_T *)
                                           FUNC_2(VAR_2);

   FUNC_0((
      FUNC_1(VAR_5),
      VAR_0 | VAR_1,
      "scic_cb_port_bc_change_primitive_recieved(0x%x, 0x%x, 0x%x) enter\n",
      VAR_2, VAR_3, VAR_4
   ));

   if (VAR_5->broadcast_change_count == 0)
   {



      FUNC_3(VAR_5->core_object);
   }

   VAR_5->broadcast_change_count++;



   if( ! FUNC_5(VAR_5) )

      FUNC_4(VAR_6, VAR_5);
}
