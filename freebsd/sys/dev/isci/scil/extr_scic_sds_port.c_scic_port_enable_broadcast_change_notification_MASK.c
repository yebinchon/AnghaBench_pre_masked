
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t U8 ;
typedef int U32 ;
struct TYPE_2__ {int ** phy_table; } ;
typedef scalar_t__ SCI_PORT_HANDLE_T ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;
typedef int SCIC_SDS_PHY_T ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(
   SCI_PORT_HANDLE_T VAR_1
)
{
   SCIC_SDS_PORT_T * VAR_2 = (SCIC_SDS_PORT_T *)VAR_1;
   SCIC_SDS_PHY_T * VAR_3;
   U32 VAR_4;
   U8 VAR_5;


   for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   {
      VAR_3 = VAR_2->phy_table[VAR_5];
      if ( VAR_3 != ((void*)0))
      {
         VAR_4 = FUNC_0(VAR_3);


         FUNC_1(VAR_3, VAR_4);
      }
   }
}
