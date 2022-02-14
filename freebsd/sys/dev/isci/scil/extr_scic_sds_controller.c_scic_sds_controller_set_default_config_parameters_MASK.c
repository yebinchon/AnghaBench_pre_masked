
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef size_t U16 ;
struct TYPE_23__ {int stp_inactivity_timeout; int ssp_inactivity_timeout; int stp_max_occupancy_timeout; int ssp_max_occupancy_timeout; int no_outbound_task_timeout; TYPE_3__* phys; } ;
struct TYPE_15__ {int max_number_concurrent_device_spin_up; scalar_t__ cable_selection_mask; scalar_t__ ssc_sas_tx_type; scalar_t__ ssc_sas_tx_spread_level; scalar_t__ ssc_sata_tx_spread_level; int mode_type; } ;
struct TYPE_21__ {TYPE_6__* phys; TYPE_2__* ports; TYPE_1__ controller; } ;
struct TYPE_22__ {TYPE_7__ sds1; } ;
struct TYPE_18__ {int high; scalar_t__ low; } ;
struct TYPE_19__ {TYPE_4__ sci_format; } ;
struct TYPE_20__ {int afe_tx_amp_control0; int afe_tx_amp_control1; int afe_tx_amp_control2; int afe_tx_amp_control3; TYPE_5__ sas_address; } ;
struct TYPE_17__ {int max_speed_generation; int align_insertion_frequency; int in_connection_align_insertion_frequency; int notify_enable_spin_up_insertion_frequency; } ;
struct TYPE_16__ {scalar_t__ phy_mask; } ;
struct TYPE_13__ {TYPE_9__ sds1; } ;
struct TYPE_14__ {scalar_t__ pci_revision; TYPE_10__ user_parameters; TYPE_8__ oem_parameters; scalar_t__ controller_index; } ;
typedef TYPE_11__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static
void FUNC_0(
   SCIC_SDS_CONTROLLER_T *VAR_6
)
{
   U16 VAR_7;


   VAR_6->oem_parameters.sds1.controller.mode_type = VAR_0;


   VAR_6->oem_parameters.sds1.controller.max_number_concurrent_device_spin_up = 1;


   VAR_6->oem_parameters.sds1.controller.ssc_sata_tx_spread_level = 0;
   VAR_6->oem_parameters.sds1.controller.ssc_sas_tx_spread_level = 0;
   VAR_6->oem_parameters.sds1.controller.ssc_sas_tx_type = 0;


   VAR_6->oem_parameters.sds1.controller.cable_selection_mask = 0;


   for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
   {
      VAR_6->oem_parameters.sds1.ports[VAR_7].phy_mask = 0;
   }


   for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
   {


      VAR_6->user_parameters.sds1.phys[VAR_7].max_speed_generation = 2;


      VAR_6->user_parameters.sds1.phys[VAR_7].align_insertion_frequency = 0x7f;
      VAR_6->user_parameters.sds1.phys[VAR_7].in_connection_align_insertion_frequency = 0xff;
      VAR_6->user_parameters.sds1.phys[VAR_7].notify_enable_spin_up_insertion_frequency = 0x33;





      VAR_6->oem_parameters.sds1.phys[VAR_7].sas_address.sci_format.high
         = 0x5FCFFFFF;


      VAR_6->oem_parameters.sds1.phys[VAR_7].sas_address.sci_format.low
         = 0x00000001 + VAR_6->controller_index;

      if ( (VAR_6->pci_revision == VAR_1)
         || (VAR_6->pci_revision == VAR_2)
         || (VAR_6->pci_revision == VAR_3) )
      {
         VAR_6->oem_parameters.sds1.phys[VAR_7].afe_tx_amp_control0 = 0x000E7C03;
         VAR_6->oem_parameters.sds1.phys[VAR_7].afe_tx_amp_control1 = 0x000E7C03;
         VAR_6->oem_parameters.sds1.phys[VAR_7].afe_tx_amp_control2 = 0x000E7C03;
         VAR_6->oem_parameters.sds1.phys[VAR_7].afe_tx_amp_control3 = 0x000E7C03;
      }
      else
      {
         VAR_6->oem_parameters.sds1.phys[VAR_7].afe_tx_amp_control0 = 0x000BDD08;
         VAR_6->oem_parameters.sds1.phys[VAR_7].afe_tx_amp_control1 = 0x000B7069;
         VAR_6->oem_parameters.sds1.phys[VAR_7].afe_tx_amp_control2 = 0x000B7C09;
         VAR_6->oem_parameters.sds1.phys[VAR_7].afe_tx_amp_control3 = 0x000AFC6E;
      }
   }

   VAR_6->user_parameters.sds1.stp_inactivity_timeout = 5;
   VAR_6->user_parameters.sds1.ssp_inactivity_timeout = 5;
   VAR_6->user_parameters.sds1.stp_max_occupancy_timeout = 5;
   VAR_6->user_parameters.sds1.ssp_max_occupancy_timeout = 20;
   VAR_6->user_parameters.sds1.no_outbound_task_timeout = 20;

}
