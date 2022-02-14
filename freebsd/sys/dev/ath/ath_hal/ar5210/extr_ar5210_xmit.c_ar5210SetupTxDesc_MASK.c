
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar5210_desc {scalar_t__ ds_ctl1; scalar_t__ ds_ctl0; } ;
typedef int HAL_PKT_TYPE ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 struct ar5210_desc* FUNC_0 (struct ath_desc*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;

HAL_BOOL
FUNC_4(struct ath_hal *VAR_21, struct ath_desc *VAR_22,
 u_int VAR_23,
 u_int VAR_24,
 HAL_PKT_TYPE VAR_25,
 u_int VAR_26,
 u_int VAR_27, u_int VAR_28,
 u_int VAR_29,
 u_int VAR_30,
 u_int VAR_31,
 u_int VAR_32,
 u_int VAR_33,
        u_int VAR_34,
 u_int VAR_35,
 u_int VAR_36)
{
 struct ar5210_desc *VAR_37 = FUNC_0(VAR_22);
 uint32_t VAR_38;

 (void) VAR_26;
 (void) VAR_33;

 FUNC_1(VAR_28 != 0);
 FUNC_1(FUNC_2(VAR_25));
 FUNC_1(FUNC_3(VAR_27));

 if (VAR_25 == VAR_15 || VAR_25 == VAR_16)
  VAR_38 = VAR_7;
 else
  VAR_38 = VAR_25 << 26;
 VAR_37->ds_ctl0 = (VAR_23 & VAR_6)
       | (VAR_27 << VAR_14)
       | ((VAR_24 << VAR_9) & VAR_8)
       | VAR_38
       | (VAR_31 & VAR_17 ? VAR_2 : 0)
       | (VAR_31 & VAR_18 ? VAR_13 : 0)
       | (VAR_30 ? VAR_1 : 0)
       ;
 if (VAR_29 != VAR_20) {
  VAR_37->ds_ctl1 = (VAR_29 << VAR_4) & VAR_3;
  VAR_37->ds_ctl0 |= VAR_5;
 } else
  VAR_37->ds_ctl1 = 0;
 if (VAR_31 & VAR_19) {
  VAR_37->ds_ctl0 |= VAR_10;
  VAR_37->ds_ctl1 |= (VAR_33 << VAR_12)
      & VAR_11;
 }
 return VAR_0;
}
