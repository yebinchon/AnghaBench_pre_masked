
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef scalar_t__ U8 ;
typedef size_t U16 ;
struct TYPE_28__ {scalar_t__ mode_type; scalar_t__ max_number_concurrent_device_spin_up; } ;
struct TYPE_30__ {TYPE_7__ controller; TYPE_6__* ports; TYPE_5__* phys; } ;
struct TYPE_29__ {int do_enable_ssc; } ;
struct TYPE_27__ {scalar_t__ phy_mask; } ;
struct TYPE_24__ {scalar_t__ high; scalar_t__ low; } ;
struct TYPE_25__ {TYPE_3__ sci_format; } ;
struct TYPE_26__ {scalar_t__ afe_tx_amp_control0; scalar_t__ afe_tx_amp_control1; scalar_t__ afe_tx_amp_control2; scalar_t__ afe_tx_amp_control3; TYPE_4__ sas_address; } ;
struct TYPE_22__ {scalar_t__ current_state_id; } ;
struct TYPE_23__ {TYPE_1__ state_machine; } ;
struct TYPE_21__ {TYPE_9__ sds1; } ;
struct TYPE_20__ {int oem_parameters; scalar_t__ oem_parameters_version; TYPE_2__ parent; } ;
struct TYPE_19__ {TYPE_8__ controller; } ;
struct TYPE_17__ {scalar_t__ ssc_sata_tx_spread_level; scalar_t__ ssc_sas_tx_spread_level; int ssc_sas_tx_type; } ;
struct TYPE_18__ {TYPE_10__ controller; } ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_11__ SCI_BIOS_OEM_PARAM_ELEMENT_v_1_1_T ;
typedef TYPE_12__ SCI_BIOS_OEM_PARAM_ELEMENT_T ;
typedef TYPE_13__ SCIC_SDS_CONTROLLER_T ;
typedef TYPE_14__ SCIC_OEM_PARAMETERS_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,TYPE_14__*,int) ;

SCI_STATUS FUNC_1(
   SCI_CONTROLLER_HANDLE_T VAR_14,
   SCIC_OEM_PARAMETERS_T * VAR_15,
   U8 VAR_16
)
{
   SCIC_SDS_CONTROLLER_T * VAR_17 = (SCIC_SDS_CONTROLLER_T*)VAR_14;
   SCI_BIOS_OEM_PARAM_ELEMENT_T *VAR_18 =
                (SCI_BIOS_OEM_PARAM_ELEMENT_T *)(&(VAR_15->sds1));


   if (
         (VAR_17->parent.state_machine.current_state_id
          == VAR_6)
      || (VAR_17->parent.state_machine.current_state_id
          == VAR_5)
      || (VAR_17->parent.state_machine.current_state_id
          == VAR_4)
      )
   {
      U16 VAR_19;
      U8 VAR_20 = 0;






      VAR_17->oem_parameters_version = VAR_16;



      for(VAR_19=0; VAR_19<VAR_10; VAR_19++)
      {
         if (VAR_15->sds1.ports[VAR_19].phy_mask > VAR_3)
         {
            return VAR_7;
         }
      }

      for(VAR_19=0; VAR_19<VAR_9; VAR_19++)
      {
         if (
             VAR_15->sds1.phys[VAR_19].sas_address.sci_format.high == 0
                 && VAR_15->sds1.phys[VAR_19].sas_address.sci_format.low == 0
        )
        {
            return VAR_7;
        }
      }

      if (VAR_15->sds1.controller.mode_type == VAR_1)
      {
         for(VAR_19=0; VAR_19<VAR_9; VAR_19++)
         {
            if (VAR_15->sds1.ports[VAR_19].phy_mask != 0)
            {
               return VAR_7;
            }
         }
      }
      else if (VAR_15->sds1.controller.mode_type == VAR_2)
      {
         for(VAR_19=0; VAR_19<VAR_9; VAR_19++)
         {
            VAR_20 |= VAR_15->sds1.ports[VAR_19].phy_mask;
         }

         if (VAR_20 == 0)
         {
            return VAR_7;
         }
      }
      else
      {
         return VAR_7;
      }

      if (VAR_15->sds1.controller.max_number_concurrent_device_spin_up > VAR_0)
      {
         return VAR_7;
      }

      if (VAR_18->controller.do_enable_ssc != 0)
      {
         if ( (VAR_16 == VAR_11)
            && (VAR_18->controller.do_enable_ssc != 0x01))
             return VAR_7;

         if (VAR_16 >= VAR_12)
         {
            SCI_BIOS_OEM_PARAM_ELEMENT_v_1_1_T *VAR_21 =
                (SCI_BIOS_OEM_PARAM_ELEMENT_v_1_1_T*)(&(VAR_15->sds1));

            U8 VAR_22 = VAR_21->controller.ssc_sata_tx_spread_level;
            if ( !((VAR_22 == 0x0) || (VAR_22 == 0x2) || (VAR_22 == 0x3) ||
                 (VAR_22 == 0x6) || (VAR_22 == 0x7)) )
                return VAR_7;

            VAR_22 = VAR_21->controller.ssc_sas_tx_spread_level;
            if (VAR_21->controller.ssc_sas_tx_type == 0)
            {
                if ( !((VAR_22 == 0x0) || (VAR_22 == 0x2) || (VAR_22 == 0x3)) )
                    return VAR_7;
            }
            else
            if (VAR_21->controller.ssc_sas_tx_type == 1)
            {
                if ( !((VAR_22 == 0x0) || (VAR_22 == 0x3) || (VAR_22 == 0x6)) )
                    return VAR_7;
            }
         }
      }

      FUNC_0(
         (&VAR_17->oem_parameters), VAR_15, sizeof(*VAR_15));
      return VAR_13;
   }

   return VAR_8;
}
