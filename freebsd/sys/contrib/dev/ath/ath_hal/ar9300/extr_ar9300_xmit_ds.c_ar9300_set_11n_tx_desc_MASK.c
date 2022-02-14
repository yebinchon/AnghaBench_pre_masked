
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ath_hal_9300 {scalar_t__ ah_tx_power_index_offset; } ;
struct ath_hal {int dummy; } ;
struct ar9300_txc {int ds_ctl11; int ds_ctl12; int ds_ctl17; scalar_t__ ds_ctl22; scalar_t__ ds_ctl21; scalar_t__ ds_ctl20; int ds_ctl19; scalar_t__ ds_ctl18; } ;
typedef int HAL_PKT_TYPE ;
typedef int HAL_KEY_TYPE ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 struct ar9300_txc* FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

void
FUNC_6(
    struct ath_hal *VAR_28,
    void *VAR_29,
    u_int VAR_30,
    HAL_PKT_TYPE VAR_31,
    u_int VAR_32,
    u_int VAR_33,
    HAL_KEY_TYPE VAR_34,
    u_int VAR_35)
{
    struct ar9300_txc *VAR_36 = FUNC_1(VAR_29);
    struct ath_hal_9300 *VAR_37 = FUNC_0(VAR_28);

    FUNC_2(FUNC_5(VAR_31));
    FUNC_2(FUNC_4(VAR_34));

    VAR_32 += VAR_37->ah_tx_power_index_offset;
    if (VAR_32 > 63) {
        VAR_32 = 63;
    }
    VAR_36->ds_ctl11 =
        (VAR_30 & VAR_6)
      | (VAR_35 & VAR_26 ? VAR_15 : 0)
      | FUNC_3(VAR_32, VAR_16)
      | (VAR_35 & VAR_25 ? VAR_14 : 0)
      | (VAR_35 & VAR_17 ? VAR_0 : 0)
      | (VAR_33 != VAR_27 ? VAR_2 : 0)
      | (VAR_35 & VAR_22 ? VAR_11 : 0);

    VAR_36->ds_ctl12 =
        (VAR_33 != VAR_27 ? FUNC_3(VAR_33, VAR_1) : 0)
      | FUNC_3(VAR_31, VAR_7)
      | (VAR_35 & VAR_23 ? VAR_12 : 0)
      | (VAR_35 & VAR_20 ? VAR_8 : 0)
      | (VAR_35 & VAR_19 ? VAR_5 : 0)
      | (VAR_35 & VAR_18 ? VAR_4 : 0);

    VAR_36->ds_ctl17 =
        FUNC_3(VAR_34, VAR_3) | (VAR_35 & VAR_21 ? VAR_9 : 0);

    VAR_36->ds_ctl18 = 0;
    VAR_36->ds_ctl19 = VAR_13;


    if (VAR_35 & VAR_24) {
        VAR_36->ds_ctl12 |= VAR_10;
        VAR_36->ds_ctl19 &= ~VAR_13;
    }





    VAR_36->ds_ctl20 = 0;
    VAR_36->ds_ctl21 = 0;
    VAR_36->ds_ctl22 = 0;
}
