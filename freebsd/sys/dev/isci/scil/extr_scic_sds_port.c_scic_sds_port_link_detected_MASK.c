
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_20__ {size_t phy_index; } ;
struct TYPE_19__ {scalar_t__ logical_port_index; TYPE_3__* owning_controller; } ;
struct TYPE_15__ {scalar_t__ stp_target; } ;
struct TYPE_16__ {TYPE_1__ bits; } ;
struct TYPE_18__ {TYPE_2__ u; } ;
struct TYPE_17__ {TYPE_5__* port_table; } ;
typedef TYPE_4__ SCI_SAS_IDENTIFY_ADDRESS_FRAME_PROTOCOLS_T ;
typedef TYPE_5__ SCIC_SDS_PORT_T ;
typedef TYPE_6__ SCIC_SDS_PHY_T ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_5__*,size_t,size_t) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;

BOOL FUNC_4(
   SCIC_SDS_PORT_T *VAR_3,
   SCIC_SDS_PHY_T *VAR_4
)
{
   SCI_SAS_IDENTIFY_ADDRESS_FRAME_PROTOCOLS_T VAR_5;

   FUNC_1(VAR_4, &VAR_5);

   if (
         (VAR_3->logical_port_index != VAR_1)
      && (VAR_5.u.bits.stp_target)
      )
   {
      if (FUNC_3(VAR_3))
      {

         FUNC_2( VAR_3, VAR_4);
      return VAR_0;
   }
      else
      {
         SCIC_SDS_PORT_T *VAR_6 = &(VAR_3->owning_controller->port_table[VAR_4->phy_index]);



         FUNC_0( VAR_6, VAR_4->phy_index, VAR_4->phy_index);
      }
   }

   return VAR_2;
}
