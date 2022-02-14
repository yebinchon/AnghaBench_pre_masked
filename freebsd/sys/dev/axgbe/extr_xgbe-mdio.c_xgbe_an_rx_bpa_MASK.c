
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dummy; } ;
typedef enum xgbe_rx { ____Placeholder_xgbe_rx } xgbe_rx ;
typedef enum xgbe_an { ____Placeholder_xgbe_an } xgbe_an ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,int ,scalar_t__) ;
 int FUNC_1 (struct xgbe_prv_data*,int*) ;
 int FUNC_2 (struct xgbe_prv_data*,int*) ;
 scalar_t__ FUNC_3 (struct xgbe_prv_data*) ;

__attribute__((used)) static enum xgbe_an FUNC_4(struct xgbe_prv_data *VAR_5,
       enum xgbe_rx *VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;


 VAR_8 = FUNC_0(VAR_5, VAR_2, VAR_1 + 1);


 VAR_7 = FUNC_3(VAR_5) ? 0x80 : 0x20;
 if (!(VAR_8 & VAR_7))
  return VAR_3;


 VAR_9 = FUNC_0(VAR_5, VAR_2, VAR_0);
 VAR_10 = FUNC_0(VAR_5, VAR_2, VAR_1);

 return ((VAR_9 & VAR_4) ||
  (VAR_10 & VAR_4))
        ? FUNC_2(VAR_5, VAR_6)
        : FUNC_1(VAR_5, VAR_6);
}
