
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ mode_type; } ;
struct TYPE_14__ {TYPE_1__ controller; } ;
struct TYPE_15__ {TYPE_2__ sds1; } ;
struct TYPE_17__ {scalar_t__ phy_startup_timer_pending; size_t next_phy_to_start; TYPE_4__* phy_table; TYPE_3__ oem_parameters; } ;
struct TYPE_16__ {int phy_index; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_4__ SCIC_SDS_PHY_T ;
typedef TYPE_5__ SCIC_SDS_CONTROLLER_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;

SCI_STATUS FUNC_7(
   SCIC_SDS_CONTROLLER_T *VAR_8
)
{
   SCI_STATUS VAR_9;

   VAR_9 = VAR_6;

   if (VAR_8->phy_startup_timer_pending == VAR_0)
   {
      if (VAR_8->next_phy_to_start == VAR_5)
      {


         if (FUNC_3(VAR_8) == VAR_7)
         {
            FUNC_5(
               VAR_8, VAR_6
            );
         }
      }
      else
      {
         SCIC_SDS_PHY_T * VAR_10;

         VAR_10 = &VAR_8->phy_table[VAR_8->next_phy_to_start];

         if (
               VAR_8->oem_parameters.sds1.controller.mode_type
            == VAR_3
            )
         {
            if (FUNC_6(VAR_10) == VAR_4)
            {
               VAR_8->next_phy_to_start++;






               return FUNC_7(VAR_8);
            }
         }

         VAR_9 = FUNC_2(VAR_10);

         if (VAR_9 == VAR_6)
         {
            FUNC_4(VAR_8);
         }
         else
         {
            FUNC_0((
               FUNC_1(VAR_8),
               VAR_1 | VAR_2,
               "Controller stop operation failed to stop phy %d because of status %d.\n",
               VAR_8->phy_table[VAR_8->next_phy_to_start].phy_index,
               VAR_9
            ));
         }

         VAR_8->next_phy_to_start++;
      }
   }

   return VAR_9;
}
