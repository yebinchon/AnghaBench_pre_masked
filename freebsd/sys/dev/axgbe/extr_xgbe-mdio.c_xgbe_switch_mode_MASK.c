
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {scalar_t__ speed_set; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xgbe_prv_data*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 scalar_t__ FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_4(struct xgbe_prv_data *VAR_1)
{

 if (FUNC_2(VAR_1)) {
  if (VAR_1->speed_set == VAR_0)
   FUNC_1(VAR_1);
  else
   FUNC_0(VAR_1);
 } else {
  FUNC_3(VAR_1);
 }
}
