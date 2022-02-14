
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t U8 ;
struct TYPE_5__ {int * phy_table; } ;
typedef int SCI_STATUS ;
typedef int * SCI_PHY_HANDLE_T ;
typedef TYPE_1__* SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;

SCI_STATUS FUNC_4(
   SCI_CONTROLLER_HANDLE_T VAR_4,
   U8 VAR_5,
   SCI_PHY_HANDLE_T * VAR_6
)
{
   SCIC_SDS_CONTROLLER_T *VAR_7;
   VAR_7 = (SCIC_SDS_CONTROLLER_T *)VAR_4;

   FUNC_2((
      FUNC_3(VAR_4),
      VAR_0,
      "scic_controller_get_phy_handle(0x%x, 0x%x, 0x%x) enter\n",
      VAR_4, VAR_5, VAR_6
   ));

   if (VAR_5 < FUNC_0(VAR_7->phy_table))
   {
      *VAR_6 = &VAR_7->phy_table[VAR_5];

      return VAR_3;
   }

   FUNC_1((
      FUNC_3(VAR_7),
      VAR_1 | VAR_0,
      "Controller:0x%x PhyId:0x%x invalid phy index\n",
      VAR_7, VAR_5
   ));

   return VAR_2;
}
