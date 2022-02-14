
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_5__ {int smp_target; int stp_target; int ssp_target; int smp_initiator; int stp_initiator; int ssp_initiator; } ;
struct TYPE_6__ {int all; TYPE_1__ bits; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
typedef TYPE_3__ SCI_SAS_IDENTIFY_ADDRESS_FRAME_PROTOCOLS_T ;
typedef int SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(
   SCIC_SDS_PHY_T *VAR_1,
   SCI_SAS_IDENTIFY_ADDRESS_FRAME_PROTOCOLS_T * VAR_2
)
{
   U32 VAR_3 = FUNC_1(VAR_1);



   if (VAR_3 & 0x2)
      VAR_2->u.bits.smp_target = 1;

   if (VAR_3 & 0x4)
      VAR_2->u.bits.stp_target = 1;

   if (VAR_3 & 0x8)
      VAR_2->u.bits.ssp_target = 1;

   if (VAR_3 & 0x200)
      VAR_2->u.bits.smp_initiator = 1;

   if ((VAR_3 & 0x400))
      VAR_2->u.bits.stp_initiator = 1;

   if (VAR_3 & 0x800)
      VAR_2->u.bits.ssp_initiator = 1;

   FUNC_0((
      FUNC_2(VAR_1),
      VAR_0,
      "scic_sds_phy_get_protocols(this_phy:0x%x, protocols:0x%x)\n",
      VAR_1, VAR_2->u.all
   ));
}
