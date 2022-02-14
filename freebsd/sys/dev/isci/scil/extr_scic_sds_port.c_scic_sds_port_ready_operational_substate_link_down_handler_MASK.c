
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ active_phy_mask; } ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;
typedef int SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static
void FUNC_3(
   SCIC_SDS_PORT_T *VAR_2,
   SCIC_SDS_PHY_T *VAR_3
)
{
   FUNC_1(VAR_2, VAR_3, VAR_1);




   if (VAR_2->active_phy_mask == 0)
   {
      FUNC_0(
         FUNC_2(VAR_2),
         VAR_0
      );
   }
}
