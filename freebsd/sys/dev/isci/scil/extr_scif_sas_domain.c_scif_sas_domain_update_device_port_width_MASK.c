
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_13__ {int sas_address; } ;
struct TYPE_16__ {int phy_mask; TYPE_3__ remote; } ;
struct TYPE_15__ {int core_object; } ;
struct TYPE_11__ {scalar_t__ attached_ssp_target; } ;
struct TYPE_12__ {TYPE_1__ bits; } ;
struct TYPE_14__ {TYPE_2__ u; } ;
typedef TYPE_4__ SMP_DISCOVER_RESPONSE_PROTOCOLS_T ;
typedef int SCI_PORT_HANDLE_T ;
typedef TYPE_5__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef int SCIF_SAS_DOMAIN_T ;
typedef TYPE_6__ SCIC_PORT_PROPERTIES_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_5__* VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_6__*) ;
 int FUNC_4 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_5__*,int ) ;

void FUNC_7(
   SCIF_SAS_DOMAIN_T * VAR_2,
   SCI_PORT_HANDLE_T VAR_3
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_4;
   SCIC_PORT_PROPERTIES_T VAR_5;
   U8 VAR_6 = 0;

   FUNC_0((
      FUNC_2(VAR_2),
      VAR_0,
      "scif_sas_domain_update_device_port_width(0x%x, 0x%x) enter\n",
      VAR_2, VAR_3
   ));

   FUNC_3(VAR_3, &VAR_5);

   VAR_4 = (SCIF_SAS_REMOTE_DEVICE_T *)
                  FUNC_5(
                  VAR_2, &VAR_5.remote.sas_address
               );



   if (VAR_4 != VAR_1)
   {
      SMP_DISCOVER_RESPONSE_PROTOCOLS_T VAR_7;
      FUNC_4(VAR_4->core_object, &VAR_7);

      if (VAR_7.u.bits.attached_ssp_target)
      {

         FUNC_1(VAR_5.phy_mask, VAR_6);

         FUNC_6(VAR_4, VAR_6);
      }
   }
}
