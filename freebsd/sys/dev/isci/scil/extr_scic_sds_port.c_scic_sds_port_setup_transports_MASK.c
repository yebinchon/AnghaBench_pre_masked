
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_3__ {int active_phy_mask; int * phy_table; } ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1(
   SCIC_SDS_PORT_T * VAR_1,
   U32 VAR_2
)
{
   U8 VAR_3;

   for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   {
      if (VAR_1->active_phy_mask & (1 << VAR_3))
      {
         FUNC_0(VAR_1->phy_table[VAR_3], VAR_2);
      }
   }
}
