
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int link; scalar_t__ autoneg; } ;
struct xgbe_prv_data {int dev_state; TYPE_1__ phy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_7(struct xgbe_prv_data *VAR_6)
{
 unsigned int VAR_7, VAR_8;

 if (FUNC_2(VAR_4, &VAR_6->dev_state)) {
  VAR_6->phy.link = 0;
  goto adjust_link;
 }

 VAR_8 = (VAR_6->phy.autoneg == VAR_0);




 VAR_7 = FUNC_0(VAR_6, VAR_1, VAR_2);
 VAR_7 = FUNC_0(VAR_6, VAR_1, VAR_2);
 VAR_6->phy.link = (VAR_7 & VAR_3) ? 1 : 0;

 if (VAR_6->phy.link) {
  if (VAR_8 && !FUNC_5(VAR_6)) {
   FUNC_3(VAR_6);
   return;
  }

  FUNC_6(VAR_6);

  if (FUNC_2(VAR_5, &VAR_6->dev_state))
   FUNC_1(VAR_5, &VAR_6->dev_state);
 } else {
  if (FUNC_2(VAR_5, &VAR_6->dev_state)) {
   FUNC_3(VAR_6);

   if (VAR_8)
    return;
  }

  FUNC_6(VAR_6);
 }

adjust_link:
 FUNC_4(VAR_6);
}
