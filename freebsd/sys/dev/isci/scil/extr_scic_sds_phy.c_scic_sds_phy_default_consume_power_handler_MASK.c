
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int state_machine; } ;
struct TYPE_6__ {TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef TYPE_2__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

SCI_STATUS FUNC_3(
   SCIC_SDS_PHY_T *VAR_2
)
{
   FUNC_0((
      FUNC_1(VAR_2),
      VAR_0,
      "SCIC Phy 0x%08x given unexpected permission to consume power while in state %d\n",
      VAR_2,
      FUNC_2(&VAR_2->parent.state_machine)
   ));

   return VAR_1;
}
