
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int fec_ability; } ;
typedef enum xgbe_rx { ____Placeholder_xgbe_rx } xgbe_rx ;
typedef enum xgbe_an { ____Placeholder_xgbe_an } xgbe_an ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,int ,scalar_t__) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,scalar_t__,unsigned int) ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int ,int) ;
 int FUNC_3 (struct xgbe_prv_data*) ;

__attribute__((used)) static enum xgbe_an FUNC_4(struct xgbe_prv_data *VAR_14,
     enum xgbe_rx *VAR_15)
{
 unsigned int VAR_16, VAR_17, VAR_18;

 *VAR_15 = VAR_13;


 if (!FUNC_3(VAR_14))
  return VAR_10;


 VAR_16 = FUNC_0(VAR_14, VAR_2, VAR_0 + 2);
 VAR_17 = FUNC_0(VAR_14, VAR_2, VAR_1 + 2);

 VAR_18 = FUNC_0(VAR_14, VAR_3, VAR_6);
 VAR_18 &= ~(VAR_4 | VAR_5);
 if ((VAR_16 & 0xc000) && (VAR_17 & 0xc000))
  VAR_18 |= VAR_14->fec_ability;

 FUNC_1(VAR_14, VAR_3, VAR_6, VAR_18);


 VAR_18 = FUNC_0(VAR_14, VAR_3, VAR_7);
 if (VAR_18 & VAR_11) {
  FUNC_2(VAR_14, VAR_9, VAR_8, 1);

  VAR_18 |= VAR_12;
  FUNC_1(VAR_14, VAR_3, VAR_7,
       VAR_18);

  FUNC_2(VAR_14, VAR_9, VAR_8, 0);
 }

 return VAR_10;
}
