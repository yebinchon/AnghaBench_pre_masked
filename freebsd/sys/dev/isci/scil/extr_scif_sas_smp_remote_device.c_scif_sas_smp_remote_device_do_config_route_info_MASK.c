
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int core_object; } ;
struct TYPE_9__ {scalar_t__ low; scalar_t__ high; } ;
struct TYPE_11__ {scalar_t__ attached_device_type; TYPE_1__ attached_sas_address; } ;
struct TYPE_10__ {scalar_t__ high; scalar_t__ low; } ;
typedef TYPE_2__ SCI_SAS_ADDRESS_T ;
typedef TYPE_3__ SCIF_SAS_SMP_PHY_T ;
typedef TYPE_4__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;

BOOL FUNC_3(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_5,
   SCIF_SAS_SMP_PHY_T * VAR_6
)
{
   SCI_SAS_ADDRESS_T VAR_7;

   FUNC_0((
      FUNC_1(VAR_5),
      VAR_2 | VAR_1,
      "scif_sas_smp_remote_device_do_config_route_info(0x%x, 0x%x) enter\n",
      VAR_5, VAR_6
   ));

   FUNC_2(
      VAR_5->core_object, &VAR_7
   );


   if ((VAR_6->attached_sas_address.low == 0
        && VAR_6->attached_sas_address.high == 0)
       && (VAR_6->attached_device_type == VAR_3))
   {
      return VAR_0;
   }


   if (VAR_6->attached_sas_address.high ==
          VAR_7.high
       && VAR_6->attached_sas_address.low ==
             VAR_7.low)
   {
      return VAR_0;
   }




   return VAR_4;
}
