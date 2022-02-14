
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dummy; } ;
typedef enum xgbe_rx { ____Placeholder_xgbe_rx } xgbe_rx ;
typedef enum xgbe_an { ____Placeholder_xgbe_an } xgbe_an ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int*) ;
 int FUNC_2 (struct xgbe_prv_data*,int*) ;

__attribute__((used)) static enum xgbe_an FUNC_3(struct xgbe_prv_data *VAR_4,
       enum xgbe_rx *VAR_5)
{
 unsigned int VAR_6, VAR_7;


 VAR_6 = FUNC_0(VAR_4, VAR_2, VAR_1);
 VAR_7 = FUNC_0(VAR_4, VAR_2, VAR_0);

 return ((VAR_6 & VAR_3) ||
  (VAR_7 & VAR_3))
        ? FUNC_2(VAR_4, VAR_5)
        : FUNC_1(VAR_4, VAR_5);
}
