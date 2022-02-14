
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ all; } ;
struct TYPE_14__ {TYPE_1__ u; } ;
struct TYPE_15__ {TYPE_2__ protocols; } ;
struct TYPE_16__ {TYPE_3__ identify_address_frame_buffer; } ;
struct TYPE_17__ {TYPE_4__ sas; } ;
struct TYPE_21__ {scalar_t__ protocol; TYPE_5__ phy_type; } ;
struct TYPE_18__ {int stp_target; } ;
struct TYPE_19__ {TYPE_6__ bits; scalar_t__ all; } ;
struct TYPE_20__ {TYPE_7__ u; } ;
typedef TYPE_8__ SCI_SAS_IDENTIFY_ADDRESS_FRAME_PROTOCOLS_T ;
typedef TYPE_9__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_9__*) ;

void FUNC_2(
   SCIC_SDS_PHY_T *VAR_3,
   SCI_SAS_IDENTIFY_ADDRESS_FRAME_PROTOCOLS_T * VAR_4
)
{
   FUNC_0((
      FUNC_1(VAR_3),
      VAR_0,
      "scic_sds_phy_get_attached_phy_protocols(this_phy:0x%x, protocols:0x%x[0x%x])\n",
      VAR_3, VAR_4, VAR_4->u.all
   ));

   VAR_4->u.all = 0;

   if (VAR_3->protocol == VAR_1)
   {
      VAR_4->u.all =
         VAR_3->phy_type.sas.identify_address_frame_buffer.protocols.u.all;
   }
   else if (VAR_3->protocol == VAR_2)
   {
      VAR_4->u.bits.stp_target = 1;
   }
}
