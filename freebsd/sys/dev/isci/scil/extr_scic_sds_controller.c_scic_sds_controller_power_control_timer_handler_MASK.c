
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef size_t U8 ;
struct TYPE_17__ {scalar_t__ high; scalar_t__ low; } ;
struct TYPE_18__ {TYPE_4__ sas_address; } ;
struct TYPE_19__ {TYPE_5__ identify_address_frame_buffer; } ;
struct TYPE_20__ {TYPE_6__ sas; } ;
struct TYPE_22__ {scalar_t__ protocol; TYPE_7__ phy_type; } ;
struct TYPE_21__ {scalar_t__ remote_devices_granted_power; scalar_t__ phys_waiting; TYPE_9__** requesters; int timer_started; } ;
struct TYPE_14__ {scalar_t__ max_number_concurrent_device_spin_up; } ;
struct TYPE_15__ {TYPE_1__ controller; } ;
struct TYPE_16__ {TYPE_2__ sds1; } ;
struct TYPE_13__ {TYPE_8__ power_control; TYPE_3__ oem_parameters; } ;
typedef TYPE_9__ SCIC_SDS_PHY_T ;
typedef TYPE_10__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_10__*) ;
 int FUNC_1 (TYPE_9__*) ;

void FUNC_2(
   void *VAR_3
)
{
   SCIC_SDS_CONTROLLER_T *VAR_4;
   VAR_4 = (SCIC_SDS_CONTROLLER_T *)VAR_3;

   VAR_4->power_control.remote_devices_granted_power = 0;

   if (VAR_4->power_control.phys_waiting == 0)
   {
      VAR_4->power_control.timer_started = VAR_0;
   }
   else
   {
      SCIC_SDS_PHY_T *VAR_5 = ((void*)0);
      U8 VAR_6;

      for (VAR_6=0;
              (VAR_6 < VAR_2)
           && (VAR_4->power_control.phys_waiting != 0);
           VAR_6++)
      {
         if (VAR_4->power_control.requesters[VAR_6] != ((void*)0))
         {
            if ( VAR_4->power_control.remote_devices_granted_power <
                 VAR_4->oem_parameters.sds1.controller.max_number_concurrent_device_spin_up
               )
            {
               VAR_5 = VAR_4->power_control.requesters[VAR_6];
               VAR_4->power_control.requesters[VAR_6] = ((void*)0);
               VAR_4->power_control.phys_waiting--;
               VAR_4->power_control.remote_devices_granted_power ++;
               FUNC_1(VAR_5);

               if (VAR_5->protocol == VAR_1)
               {
                  U8 VAR_7;
                  SCIC_SDS_PHY_T * VAR_8;

                  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
                  {
                     VAR_8 = VAR_4->power_control.requesters[VAR_7];



                     if (VAR_8 != ((void*)0) &&
                         VAR_8 != VAR_5 &&
                         VAR_8->phy_type.sas.identify_address_frame_buffer.sas_address.high
                            == VAR_5->phy_type.sas.identify_address_frame_buffer.sas_address.high &&
                         VAR_8->phy_type.sas.identify_address_frame_buffer.sas_address.low
                            == VAR_5->phy_type.sas.identify_address_frame_buffer.sas_address.low)
                     {
                        VAR_4->power_control.requesters[VAR_7] = ((void*)0);
                        VAR_4->power_control.phys_waiting--;
                        FUNC_1(VAR_8);
                     }
                  }
               }
            }
            else
            {
               break;
            }
         }
      }



      FUNC_0(VAR_4);
   }
}
