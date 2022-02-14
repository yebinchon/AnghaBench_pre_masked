
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {scalar_t__ tx_pause; } ;


 int FUNC_0 (struct xgbe_prv_data*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_2(struct xgbe_prv_data *VAR_0)
{

 if (VAR_0->tx_pause)
  FUNC_1(VAR_0);
 else
  FUNC_0(VAR_0);

 return 0;
}
