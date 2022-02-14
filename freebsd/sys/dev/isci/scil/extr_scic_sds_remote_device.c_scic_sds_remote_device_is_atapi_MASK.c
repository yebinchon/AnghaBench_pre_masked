
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int sector_count; int lba_low; int lba_mid; int lba_high; int device; } ;
struct TYPE_13__ {TYPE_6__ signature_fis; } ;
struct TYPE_9__ {int attached_stp_target; } ;
struct TYPE_10__ {TYPE_1__ bits; } ;
struct TYPE_11__ {TYPE_2__ u; } ;
struct TYPE_12__ {int owning_port; scalar_t__ is_direct_attached; TYPE_3__ target_protocols; } ;
typedef TYPE_4__ SCIC_SDS_REMOTE_DEVICE_T ;
typedef int SCIC_SDS_PHY_T ;
typedef TYPE_5__ SCIC_SATA_PHY_PROPERTIES_T ;
typedef TYPE_6__ SATA_FIS_REG_D2H_T ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_5__*) ;
 int * FUNC_1 (int ) ;

BOOL FUNC_2(
   SCIC_SDS_REMOTE_DEVICE_T * VAR_2
)
{
   if (!VAR_2->target_protocols.u.bits.attached_stp_target)
      return VAR_0;
   else if (VAR_2->is_direct_attached)
   {
      SCIC_SDS_PHY_T * VAR_3;
      SCIC_SATA_PHY_PROPERTIES_T VAR_4;
      SATA_FIS_REG_D2H_T * VAR_5;
      VAR_3 = FUNC_1(VAR_2->owning_port);
      FUNC_0(VAR_3, &VAR_4);


      VAR_5 = &(VAR_4.signature_fis);

      if ( (VAR_5->sector_count == 0x01)
          && (VAR_5->lba_low == 0x01)
          && (VAR_5->lba_mid == 0x14)
          && (VAR_5->lba_high == 0xEB)
          && ( (VAR_5->device & 0x5F) == 0x00)
         )
      {

         return VAR_1;
      }
      else
         return VAR_0;
   }
   else
   {

      return VAR_0;
   }
}
