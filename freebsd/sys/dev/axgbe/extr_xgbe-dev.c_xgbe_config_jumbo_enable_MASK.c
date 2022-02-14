
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,unsigned int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = (FUNC_1(VAR_3->netdev) > VAR_2) ? 1 : 0;

 FUNC_0(VAR_3, VAR_1, VAR_0, VAR_4);
}
