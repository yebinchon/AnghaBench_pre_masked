
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_prv_data {TYPE_1__* netdev; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_5(struct xgbe_prv_data *VAR_1)
{
 FUNC_0("-->xgbe_restart_dev\n");


 if ((VAR_1->netdev->if_drv_flags & VAR_0) == 0)
  return;

 FUNC_4(VAR_1);

 FUNC_2(VAR_1);
 FUNC_1(VAR_1);

 FUNC_3(VAR_1);

 FUNC_0("<--xgbe_restart_dev\n");
}
