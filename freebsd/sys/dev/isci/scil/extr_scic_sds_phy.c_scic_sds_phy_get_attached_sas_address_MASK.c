
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


struct TYPE_10__ {int low; int high; } ;
struct TYPE_11__ {TYPE_1__ sas_address; } ;
struct TYPE_12__ {TYPE_2__ identify_address_frame_buffer; } ;
struct TYPE_13__ {TYPE_3__ sas; } ;
struct TYPE_15__ {TYPE_4__ phy_type; } ;
struct TYPE_14__ {int low; int high; } ;
typedef TYPE_5__ SCI_SAS_ADDRESS_T ;
typedef TYPE_6__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_6__*) ;

void FUNC_2(
   SCIC_SDS_PHY_T *VAR_1,
   SCI_SAS_ADDRESS_T *VAR_2
)
{
   FUNC_0((
      FUNC_1(VAR_1),
      VAR_0,
      "scic_sds_phy_get_attached_sas_address(0x%x, 0x%x) enter\n",
      VAR_1, VAR_2
   ));

   VAR_2->high
      = VAR_1->phy_type.sas.identify_address_frame_buffer.sas_address.high;
   VAR_2->low
      = VAR_1->phy_type.sas.identify_address_frame_buffer.sas_address.low;
}
