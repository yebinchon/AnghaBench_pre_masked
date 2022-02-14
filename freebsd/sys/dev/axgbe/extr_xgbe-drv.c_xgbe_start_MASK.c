
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_phy_if {int (* phy_start ) (struct xgbe_prv_data*) ;int (* phy_stop ) (struct xgbe_prv_data*) ;} ;
struct xgbe_hw_if {int (* exit ) (struct xgbe_prv_data*) ;int (* enable_rx ) (struct xgbe_prv_data*) ;int (* enable_tx ) (struct xgbe_prv_data*) ;int (* init ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {int service_work; int dev_workqueue; struct xgbe_phy_if phy_if; struct xgbe_hw_if hw_if; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (struct xgbe_prv_data*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct xgbe_prv_data*) ;
 int FUNC_9 (struct xgbe_prv_data*) ;
 int FUNC_10 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_11(struct xgbe_prv_data *VAR_0)
{
 struct xgbe_hw_if *VAR_1 = &VAR_0->hw_if;
 struct xgbe_phy_if *VAR_2 = &VAR_0->phy_if;
 int VAR_3;

 FUNC_0("-->xgbe_start\n");

 VAR_1->init(VAR_0);

 VAR_3 = VAR_2->phy_start(VAR_0);
 if (VAR_3)
  goto err_phy;

 VAR_3 = FUNC_9(VAR_0);
 if (VAR_3)
  goto err_napi;

 VAR_1->enable_tx(VAR_0);
 VAR_1->enable_rx(VAR_0);

 FUNC_8(VAR_0);

 FUNC_10(VAR_0);
 FUNC_7(VAR_0->dev_workqueue, &VAR_0->service_work);

 FUNC_0("<--xgbe_start\n");

 return 0;

err_napi:
 VAR_2->phy_stop(VAR_0);

err_phy:
 VAR_1->exit(VAR_0);

 return VAR_3;
}
