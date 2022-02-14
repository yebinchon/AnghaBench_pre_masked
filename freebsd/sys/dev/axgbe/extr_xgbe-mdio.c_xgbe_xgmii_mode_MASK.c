
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* set_xgmii_speed ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {int * serdes_dfe_tap_ena; int * serdes_dfe_tap_cfg; int * serdes_pq_skew; int * serdes_blwc; int * serdes_tx_amp; int * serdes_cdr_rate; TYPE_1__ hw_if; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,unsigned int) ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_3 (struct xgbe_prv_data*,int ,int ,int ) ;
 int FUNC_4 (struct xgbe_prv_data*,int ,int ,int ) ;
 int FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (struct xgbe_prv_data*) ;
 int FUNC_7 (struct xgbe_prv_data*) ;
 int FUNC_8 (struct xgbe_prv_data*) ;
 int FUNC_9 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_10(struct xgbe_prv_data *VAR_24)
{
 unsigned int VAR_25;


 FUNC_6(VAR_24);


 VAR_24->hw_if.set_xgmii_speed(VAR_24);


 VAR_25 = FUNC_0(VAR_24, VAR_7, VAR_6);
 VAR_25 &= ~VAR_9;
 VAR_25 |= VAR_8;
 FUNC_1(VAR_24, VAR_7, VAR_6, VAR_25);

 VAR_25 = FUNC_0(VAR_24, VAR_7, VAR_3);
 VAR_25 &= ~VAR_5;
 VAR_25 |= VAR_4;
 FUNC_1(VAR_24, VAR_7, VAR_3, VAR_25);

 FUNC_7(VAR_24);


 FUNC_9(VAR_24);

 FUNC_4(VAR_24, VAR_17, VAR_2, VAR_22);
 FUNC_4(VAR_24, VAR_17, VAR_19, VAR_23);
 FUNC_4(VAR_24, VAR_17, VAR_10, VAR_21);

 FUNC_4(VAR_24, VAR_17, VAR_1,
      VAR_24->serdes_cdr_rate[VAR_20]);
 FUNC_4(VAR_24, VAR_17, VAR_18,
      VAR_24->serdes_tx_amp[VAR_20]);
 FUNC_3(VAR_24, VAR_15, VAR_0,
      VAR_24->serdes_blwc[VAR_20]);
 FUNC_3(VAR_24, VAR_13, VAR_11,
      VAR_24->serdes_pq_skew[VAR_20]);
 FUNC_3(VAR_24, VAR_14, VAR_12,
      VAR_24->serdes_dfe_tap_cfg[VAR_20]);
 FUNC_2(VAR_24, VAR_16,
        VAR_24->serdes_dfe_tap_ena[VAR_20]);

 FUNC_8(VAR_24);
}
