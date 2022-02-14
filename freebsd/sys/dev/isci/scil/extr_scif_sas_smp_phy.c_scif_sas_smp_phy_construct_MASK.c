
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_9__ {int smp_phy_list; } ;
struct TYPE_10__ {TYPE_1__ smp_device; } ;
struct TYPE_12__ {TYPE_2__ protocol_device; } ;
struct TYPE_11__ {int list_element; TYPE_4__* owning_device; int phy_identifier; } ;
typedef TYPE_3__ SCIF_SAS_SMP_PHY_T ;
typedef TYPE_4__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(
   SCIF_SAS_SMP_PHY_T * VAR_0,
   SCIF_SAS_REMOTE_DEVICE_T * VAR_1,
   U8 VAR_2
)
{
   FUNC_0(VAR_0, 0, sizeof(SCIF_SAS_SMP_PHY_T));

   VAR_0->phy_identifier = VAR_2;
   VAR_0->owning_device = VAR_1;

   FUNC_1((VAR_0), (&VAR_0->list_element));


   FUNC_2(
      (&VAR_1->protocol_device.smp_device.smp_phy_list),
      (&VAR_0->list_element)
   );
}
