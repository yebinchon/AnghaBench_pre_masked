
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int protocols; int sas_address; } ;
struct TYPE_12__ {int protocols; int sas_address; } ;
struct TYPE_15__ {scalar_t__ index; TYPE_2__ remote; TYPE_1__ local; int phy_mask; } ;
struct TYPE_14__ {scalar_t__ logical_port_index; } ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_PORT_HANDLE_T ;
typedef TYPE_3__ SCIC_SDS_PORT_T ;
typedef TYPE_4__ SCIC_PORT_PROPERTIES_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*,int *) ;

SCI_STATUS FUNC_7(
   SCI_PORT_HANDLE_T VAR_5,
   SCIC_PORT_PROPERTIES_T * VAR_6
)
{
   SCIC_SDS_PORT_T *VAR_7 = (SCIC_SDS_PORT_T *)VAR_5;

   FUNC_0((
      FUNC_1(VAR_7),
      VAR_0,
      "scic_port_get_properties(0x%x, 0x%x) enter\n",
      VAR_5, VAR_6
   ));

   if (
         (VAR_5 == VAR_3)
      || (VAR_7->logical_port_index == VAR_1)
      )
   {
      return VAR_2;
   }

   VAR_6->index = VAR_7->logical_port_index;
   VAR_6->phy_mask = FUNC_4(VAR_7);
   FUNC_6(VAR_7, &VAR_6->local.sas_address);
   FUNC_5(VAR_7, &VAR_6->local.protocols);
   FUNC_3(VAR_7, &VAR_6->remote.sas_address);
   FUNC_2(VAR_7, &VAR_6->remote.protocols);

   return VAR_4;
}
