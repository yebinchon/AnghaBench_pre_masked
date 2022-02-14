
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_7__ {TYPE_1__* state_handlers; } ;
struct TYPE_6__ {int (* frame_handler ) (TYPE_2__*,int ) ;} ;
typedef int SCI_STATUS ;
typedef TYPE_2__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;

SCI_STATUS FUNC_3(
   SCIC_SDS_PHY_T *VAR_1,
   U32 VAR_2
)
{
   FUNC_0((
      FUNC_1(VAR_1),
      VAR_0,
      "scic_sds_phy_frame_handler(this_phy:0x%08x, frame_index:%d)\n",
      VAR_1, VAR_2
   ));

   return VAR_1->state_handlers->frame_handler(VAR_1, VAR_2);
}
