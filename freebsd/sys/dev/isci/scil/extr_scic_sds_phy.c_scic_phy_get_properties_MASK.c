
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef scalar_t__ U8 ;
struct TYPE_33__ {TYPE_8__* phys; } ;
struct TYPE_30__ {int low; int high; } ;
struct TYPE_31__ {TYPE_6__ sci_format; } ;
struct TYPE_32__ {TYPE_7__ sas_address; } ;
struct TYPE_28__ {int low; int high; } ;
struct TYPE_29__ {TYPE_4__ sas_address; int protocols; } ;
struct TYPE_26__ {TYPE_1__* phys; } ;
struct TYPE_27__ {TYPE_2__ sds1; } ;
struct TYPE_25__ {scalar_t__ max_speed_generation; } ;
struct TYPE_24__ {size_t index; TYPE_5__ transmit_iaf; int owning_port; int max_link_rate; int negotiated_link_rate; } ;
struct TYPE_23__ {size_t phy_index; TYPE_12__* owning_port; int max_negotiated_speed; } ;
struct TYPE_22__ {TYPE_11__* owning_controller; } ;
struct TYPE_20__ {TYPE_9__ sds1; } ;
struct TYPE_21__ {TYPE_10__ oem_parameters; TYPE_3__ user_parameters; } ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_PHY_HANDLE_T ;
typedef TYPE_13__ SCIC_SDS_PHY_T ;
typedef TYPE_14__ SCIC_PHY_PROPERTIES_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_14__*,int ,int) ;
 int FUNC_2 (TYPE_13__*) ;
 int FUNC_3 (TYPE_13__*) ;
 int FUNC_4 (TYPE_13__*,int *) ;

SCI_STATUS FUNC_5(
   SCI_PHY_HANDLE_T VAR_9,
   SCIC_PHY_PROPERTIES_T * VAR_10
)
{
   SCIC_SDS_PHY_T *VAR_11;
   U8 VAR_12;

   VAR_11 = (SCIC_SDS_PHY_T *)VAR_9;

   FUNC_0((
      FUNC_2(VAR_11),
      VAR_0,
      "scic_phy_get_properties(0x%x, 0x%x) enter\n",
      VAR_11, VAR_10
   ));

   if (VAR_9 == VAR_4)
   {
      return VAR_3;
   }

   FUNC_1(VAR_10, 0, sizeof(SCIC_PHY_PROPERTIES_T));


   VAR_12 =
      VAR_11->owning_port->owning_controller->user_parameters.sds1.
         phys[VAR_11->phy_index].max_speed_generation;

   VAR_10->negotiated_link_rate = VAR_11->max_negotiated_speed;

   if (VAR_12 == VAR_2)
      VAR_10->max_link_rate = VAR_7;
   else if (VAR_12 == VAR_1)
      VAR_10->max_link_rate = VAR_6;
   else
      VAR_10->max_link_rate = VAR_5;

   VAR_10->index = VAR_11->phy_index;
   VAR_10->owning_port = FUNC_3(VAR_11);

   FUNC_4(VAR_11, &VAR_10->transmit_iaf.protocols);

   VAR_10->transmit_iaf.sas_address.high =
      VAR_11->owning_port->owning_controller->oem_parameters.sds1.
         phys[VAR_11->phy_index].sas_address.sci_format.high;

   VAR_10->transmit_iaf.sas_address.low =
      VAR_11->owning_port->owning_controller->oem_parameters.sds1.
         phys[VAR_11->phy_index].sas_address.sci_format.low;

   return VAR_8;
}
