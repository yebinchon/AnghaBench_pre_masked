
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int state_machine; } ;
struct TYPE_7__ {scalar_t__ protocol; TYPE_1__ parent; int owning_port; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_2__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static
void FUNC_4(
   SCI_BASE_OBJECT_T *VAR_4
)
{
   SCIC_SDS_PHY_T * VAR_5;
   VAR_5 = (SCIC_SDS_PHY_T *)VAR_4;

   FUNC_1(VAR_5, VAR_2);




   FUNC_2(VAR_5->owning_port, VAR_5, VAR_0);

   if (VAR_5->protocol == VAR_1)
   {
      FUNC_3(VAR_5);
   }
   else
   {


      FUNC_0(
         &VAR_5->parent.state_machine,
         VAR_3
      );
   }
}
