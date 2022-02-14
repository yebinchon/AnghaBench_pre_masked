
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_6__ {int state_machine; } ;
struct TYPE_7__ {TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef TYPE_2__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;

SCI_STATUS FUNC_5(
   SCIC_SDS_PHY_T *VAR_2,
   U32 VAR_3
)
{
   FUNC_0((
      FUNC_1(VAR_2),
      VAR_0,
      "SCIC Phy 0x%08x received unexpected frame data %d while in state %d\n",
      VAR_2, VAR_3,
      FUNC_2(&VAR_2->parent.state_machine)
   ));

   FUNC_3(
      FUNC_4(VAR_2), VAR_3);

   return VAR_1;
}
