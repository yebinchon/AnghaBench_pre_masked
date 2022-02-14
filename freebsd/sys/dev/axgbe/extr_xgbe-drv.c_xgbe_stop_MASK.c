
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_phy_if {int (* phy_stop ) (struct xgbe_prv_data*) ;} ;
struct xgbe_hw_if {int (* exit ) (struct xgbe_prv_data*) ;int (* disable_rx ) (struct xgbe_prv_data*) ;int (* disable_tx ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {int dev_workqueue; struct xgbe_phy_if phy_if; struct xgbe_hw_if hw_if; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct xgbe_prv_data*) ;
 int FUNC_7 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_8(struct xgbe_prv_data *VAR_0)
{
 struct xgbe_hw_if *VAR_1 = &VAR_0->hw_if;
 struct xgbe_phy_if *VAR_2 = &VAR_0->phy_if;

 FUNC_0("-->xgbe_stop\n");

 FUNC_7(VAR_0);
 FUNC_5(VAR_0->dev_workqueue);

 VAR_1->disable_tx(VAR_0);
 VAR_1->disable_rx(VAR_0);

 FUNC_6(VAR_0);

 VAR_2->phy_stop(VAR_0);

 VAR_1->exit(VAR_0);

 FUNC_0("<--xgbe_stop\n");
}
