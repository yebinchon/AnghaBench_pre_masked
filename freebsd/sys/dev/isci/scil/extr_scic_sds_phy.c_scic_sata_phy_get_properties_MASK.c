
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int is_port_selector_present; int signature_fis; } ;
struct TYPE_7__ {int signature_fis_buffer; } ;
struct TYPE_8__ {TYPE_1__ sata; } ;
struct TYPE_9__ {scalar_t__ protocol; TYPE_2__ phy_type; } ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_PHY_HANDLE_T ;
typedef TYPE_3__ SCIC_SDS_PHY_T ;
typedef TYPE_4__ SCIC_SATA_PHY_PROPERTIES_T ;
typedef int SATA_FIS_REG_D2H_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_3__*) ;

SCI_STATUS FUNC_3(
   SCI_PHY_HANDLE_T VAR_5,
   SCIC_SATA_PHY_PROPERTIES_T * VAR_6
)
{
   SCIC_SDS_PHY_T *VAR_7;
   VAR_7 = (SCIC_SDS_PHY_T *)VAR_5;

   FUNC_0((
      FUNC_2(VAR_7),
      VAR_1,
      "scic_sata_phy_get_properties(0x%x, 0x%x) enter\n",
      VAR_7, VAR_6
   ));

   if (VAR_7->protocol == VAR_2)
   {
      FUNC_1(
         &VAR_6->signature_fis,
         &VAR_7->phy_type.sata.signature_fis_buffer,
         sizeof(SATA_FIS_REG_D2H_T)
      );


      VAR_6->is_port_selector_present = VAR_0;

      return VAR_4;
   }

   return VAR_3;
}
