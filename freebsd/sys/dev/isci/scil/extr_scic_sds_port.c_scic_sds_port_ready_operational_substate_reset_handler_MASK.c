
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_5__ {int state_machine; } ;
struct TYPE_6__ {TYPE_1__ parent; int not_ready_reason; int timer_handle; int ** phy_table; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_PORT_T ;
typedef TYPE_2__ SCIC_SDS_PORT_T ;
typedef int SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,size_t) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_5(
   SCI_BASE_PORT_T * VAR_6,
   U32 VAR_7
)
{
   SCI_STATUS VAR_8 = VAR_2;
   U32 VAR_9;
   SCIC_SDS_PORT_T * VAR_10 = (SCIC_SDS_PORT_T *)VAR_6;
   SCIC_SDS_PHY_T * VAR_11 = VAR_3;



   for (
         VAR_9 = 0;
            (VAR_9 < VAR_4)
         && (VAR_11 == VAR_3);
         VAR_9++
       )
   {
      VAR_11 = VAR_10->phy_table[VAR_9];

      if (
            (VAR_11 != VAR_3)
         && !FUNC_3(VAR_10, VAR_11)
         )
      {

         VAR_11 = VAR_3;
      }
   }


   if (VAR_11 != VAR_3)
   {
      VAR_8 = FUNC_2(VAR_11);

      if (VAR_8 == VAR_5)
      {
         FUNC_1(
            FUNC_4(VAR_10),
            VAR_10->timer_handle,
            VAR_7
         );

         VAR_10->not_ready_reason = VAR_0;

         FUNC_0(
            &VAR_10->parent.state_machine,
            VAR_1
         );
      }
   }

   return VAR_8;
}
