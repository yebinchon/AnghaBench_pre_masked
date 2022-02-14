
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t U8 ;
typedef int U32 ;
struct TYPE_4__ {int * phy_table; int * port_table; int restrict_completions; } ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef int SCIC_SDS_PHY_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

SCI_STATUS FUNC_5(
   SCI_CONTROLLER_HANDLE_T VAR_5
)
{
   SCIC_SDS_CONTROLLER_T * VAR_6 = (SCIC_SDS_CONTROLLER_T*)VAR_5;
   U8 VAR_7;


   FUNC_1(VAR_6);
   FUNC_2(VAR_6);

   VAR_6->restrict_completions = VAR_0;



   for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
      FUNC_4(
         &(VAR_6->port_table[VAR_7]));




   for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7 ++)
   {
      SCIC_SDS_PHY_T * VAR_8 = &VAR_6->phy_table[VAR_7];
      U32 VAR_9 = FUNC_0(VAR_8);

      if ((VAR_9 & VAR_4) == 0)
      {


         FUNC_3(VAR_8);
      }
   }

   return VAR_3;
}
