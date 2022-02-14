
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {scalar_t__ current_state_id; } ;
struct TYPE_12__ {TYPE_10__ state_machine; } ;
struct TYPE_14__ {scalar_t__ active_phy_mask; TYPE_1__ parent; } ;
struct TYPE_13__ {scalar_t__ high; scalar_t__ low; } ;
typedef TYPE_2__ SCI_SAS_ADDRESS_T ;
typedef TYPE_3__ SCIC_SDS_PORT_T ;
typedef int SCIC_SDS_PHY_T ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_10__*,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,int *,int ,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,int *) ;

void FUNC_5(
   SCIC_SDS_PORT_T * VAR_2,
   SCIC_SDS_PHY_T * VAR_3,
   BOOL VAR_4,
   BOOL VAR_5
)
{
   SCI_SAS_ADDRESS_T VAR_6;
   SCI_SAS_ADDRESS_T VAR_7;

   FUNC_3(VAR_2, &VAR_6);
   FUNC_1(VAR_3, &VAR_7);





   if (
         (
            (VAR_7.high == VAR_6.high)
         && (VAR_7.low == VAR_6.low )
         )
         || (VAR_2->active_phy_mask == 0)
      )
   {
      FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);

      if (VAR_2->parent.state_machine.current_state_id
          == VAR_1)
      {
         FUNC_0(
            &VAR_2->parent.state_machine, VAR_0
         );
      }
   }
   else
   {
      FUNC_4(VAR_2, VAR_3);
   }
}
