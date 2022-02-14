
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dummy; } ;
typedef enum xgbe_mode { ____Placeholder_xgbe_mode } xgbe_mode ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_6,
     enum xgbe_mode *VAR_7)
{
 unsigned int VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_1, VAR_0);
 if ((VAR_8 & VAR_3) == VAR_2)
  *VAR_7 = VAR_4;
 else
  *VAR_7 = VAR_5;
}
