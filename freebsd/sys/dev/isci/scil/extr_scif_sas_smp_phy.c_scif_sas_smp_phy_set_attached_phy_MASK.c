
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_7__ {int smp_device; } ;
struct TYPE_10__ {TYPE_1__ protocol_device; } ;
struct TYPE_8__ {TYPE_3__* attached_phy; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
typedef int SCI_STATUS ;
typedef TYPE_3__ SCIF_SAS_SMP_PHY_T ;
typedef TYPE_4__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

SCI_STATUS FUNC_1(
   SCIF_SAS_SMP_PHY_T * VAR_2,
   U8 VAR_3,
   SCIF_SAS_REMOTE_DEVICE_T * VAR_4
)
{

   SCIF_SAS_SMP_PHY_T * VAR_5 =
      (SCIF_SAS_SMP_PHY_T *)FUNC_0(
          VAR_3,
          &VAR_4->protocol_device.smp_device);

   if (VAR_5 != ((void*)0))
   {
      VAR_2->u.attached_phy = VAR_5;
      VAR_5->u.attached_phy = VAR_2;

      return VAR_1;
   }

   return VAR_0;
}
