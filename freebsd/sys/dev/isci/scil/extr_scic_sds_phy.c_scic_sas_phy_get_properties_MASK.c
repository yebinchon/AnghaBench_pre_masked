
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int all; } ;
struct TYPE_10__ {TYPE_4__ u; } ;
struct TYPE_15__ {TYPE_1__ received_capabilities; int received_iaf; } ;
struct TYPE_11__ {int identify_address_frame_buffer; } ;
struct TYPE_12__ {TYPE_2__ sas; } ;
struct TYPE_14__ {scalar_t__ protocol; TYPE_3__ phy_type; } ;
typedef int SCI_STATUS ;
typedef int SCI_SAS_IDENTIFY_ADDRESS_FRAME_T ;
typedef scalar_t__ SCI_PHY_HANDLE_T ;
typedef TYPE_5__ SCIC_SDS_PHY_T ;
typedef TYPE_6__ SCIC_SAS_PHY_PROPERTIES_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_5__*) ;

SCI_STATUS FUNC_4(
   SCI_PHY_HANDLE_T VAR_4,
   SCIC_SAS_PHY_PROPERTIES_T * VAR_5
)
{
   SCIC_SDS_PHY_T *VAR_6;
   VAR_6 = (SCIC_SDS_PHY_T *)VAR_4;

   FUNC_0((
      FUNC_3(VAR_6),
      VAR_0,
      "scic_sas_phy_get_properties(0x%x, 0x%x) enter\n",
      VAR_6, VAR_5
   ));

   if (VAR_6->protocol == VAR_1)
   {
      FUNC_2(
         &VAR_5->received_iaf,
         &VAR_6->phy_type.sas.identify_address_frame_buffer,
         sizeof(SCI_SAS_IDENTIFY_ADDRESS_FRAME_T)
      );

      VAR_5->received_capabilities.u.all
         = FUNC_1(VAR_6);

      return VAR_3;
   }

   return VAR_2;
}
