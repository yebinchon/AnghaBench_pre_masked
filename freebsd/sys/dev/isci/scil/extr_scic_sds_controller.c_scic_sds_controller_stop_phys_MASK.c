
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_6__ {int phy_index; } ;
struct TYPE_5__ {TYPE_3__* phy_table; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;

SCI_STATUS FUNC_3(
   SCIC_SDS_CONTROLLER_T *VAR_6
)
{
   U32 VAR_7;
   SCI_STATUS VAR_8;
   SCI_STATUS VAR_9;

   VAR_8 = VAR_5;

   for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
   {
      VAR_9 = FUNC_2(&VAR_6->phy_table[VAR_7]);

      if (
              (VAR_9 != VAR_5)
           && (VAR_9 != VAR_3)
         )
      {
         VAR_8 = VAR_2;

         FUNC_0((
            FUNC_1(VAR_6),
            VAR_0 | VAR_1,
            "Controller stop operation failed to stop phy %d because of status %d.\n",
            VAR_6->phy_table[VAR_7].phy_index, VAR_9
         ));
      }
   }

   return VAR_8;
}
