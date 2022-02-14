
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ U8 ;
struct TYPE_8__ {scalar_t__ number_of_phys; } ;
struct TYPE_9__ {TYPE_1__ smp_device; } ;
struct TYPE_11__ {TYPE_3__* domain; TYPE_2__ protocol_device; } ;
struct TYPE_10__ {int controller; } ;
typedef int SCIF_SAS_SMP_PHY_T ;
typedef TYPE_4__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_4__*,scalar_t__) ;

void FUNC_5(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_2
)
{
   SCIF_SAS_SMP_PHY_T * VAR_3 = ((void*)0);
   U8 VAR_4 = 0;

   FUNC_1((
      FUNC_2(VAR_2),
      VAR_1 | VAR_0,
      "scif_sas_smp_remote_device_populate_smp_phy_list(0x%x) enter\n",
      VAR_2
   ));

   for ( VAR_4 = 0;
         VAR_4 < VAR_2->protocol_device.smp_device.number_of_phys;
         VAR_4++ )
   {
      VAR_3 =
         FUNC_3(VAR_2->domain->controller);

      FUNC_0( VAR_3 != ((void*)0) );

      if ( VAR_3 != ((void*)0) )
         FUNC_4(VAR_3, VAR_2, VAR_4);
   }
}
