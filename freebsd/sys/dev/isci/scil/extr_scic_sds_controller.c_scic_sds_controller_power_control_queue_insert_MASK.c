
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef size_t U8 ;
struct TYPE_25__ {scalar_t__ high; scalar_t__ low; } ;
struct TYPE_26__ {TYPE_6__ sas_address; } ;
struct TYPE_27__ {TYPE_7__ identify_address_frame_buffer; } ;
struct TYPE_28__ {TYPE_8__ sas; } ;
struct TYPE_23__ {scalar_t__ current_state_id; } ;
struct TYPE_24__ {TYPE_4__ state_machine; } ;
struct TYPE_20__ {scalar_t__ max_number_concurrent_device_spin_up; } ;
struct TYPE_21__ {TYPE_1__ controller; } ;
struct TYPE_22__ {TYPE_2__ sds1; } ;
struct TYPE_17__ {scalar_t__ remote_devices_granted_power; int phys_waiting; TYPE_11__** requesters; } ;
struct TYPE_19__ {TYPE_10__ power_control; TYPE_11__* phy_table; TYPE_3__ oem_parameters; } ;
struct TYPE_18__ {scalar_t__ protocol; size_t phy_index; TYPE_9__ phy_type; TYPE_5__ parent; } ;
typedef TYPE_11__ SCIC_SDS_PHY_T ;
typedef TYPE_12__ SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (TYPE_12__*) ;
 int FUNC_2 (TYPE_11__*) ;

void FUNC_3(
   SCIC_SDS_CONTROLLER_T *VAR_3,
   SCIC_SDS_PHY_T *VAR_4
)
{
   FUNC_0 (VAR_4 != ((void*)0));

   if( VAR_3->power_control.remote_devices_granted_power <
       VAR_3->oem_parameters.sds1.controller.max_number_concurrent_device_spin_up
     )
   {
      VAR_3->power_control.remote_devices_granted_power ++;
      FUNC_2(VAR_4);



      FUNC_1 (VAR_3);
   }
   else
   {


      U8 VAR_5;
      SCIC_SDS_PHY_T * VAR_6;
      for(VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
      {
         VAR_6 = &VAR_3->phy_table[VAR_5];

         if (VAR_6->parent.state_machine.current_state_id == VAR_1 &&
             VAR_6->protocol == VAR_0 &&
             VAR_6->phy_type.sas.identify_address_frame_buffer.sas_address.high
                == VAR_4->phy_type.sas.identify_address_frame_buffer.sas_address.high &&
             VAR_6->phy_type.sas.identify_address_frame_buffer.sas_address.low
                == VAR_4->phy_type.sas.identify_address_frame_buffer.sas_address.low)
         {
            FUNC_2(VAR_4);
            break;
         }
      }

      if (VAR_5 == VAR_2)
      {

         VAR_3->power_control.requesters[VAR_4->phy_index] = VAR_4;
         VAR_3->power_control.phys_waiting++;
      }
   }
}
