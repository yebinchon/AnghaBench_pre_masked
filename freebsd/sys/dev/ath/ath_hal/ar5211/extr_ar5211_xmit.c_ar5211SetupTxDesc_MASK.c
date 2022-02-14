
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar5211_desc {int ds_ctl1; scalar_t__ ds_ctl0; } ;
typedef int HAL_PKT_TYPE ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 struct ar5211_desc* FUNC_0 (struct ath_desc*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;

HAL_BOOL
FUNC_4(struct ath_hal *VAR_18, struct ath_desc *VAR_19,
 u_int VAR_20,
 u_int VAR_21,
 HAL_PKT_TYPE VAR_22,
 u_int VAR_23,
 u_int VAR_24, u_int VAR_25,
 u_int VAR_26,
 u_int VAR_27,
 u_int VAR_28,
 u_int VAR_29,
 u_int VAR_30,
 u_int VAR_31,
 u_int VAR_32,
 u_int VAR_33)
{
 struct ar5211_desc *VAR_34 = FUNC_0(VAR_19);

 (void) VAR_21;
 (void) VAR_23;
 (void) VAR_29; (void) VAR_30;

 FUNC_1(VAR_25 != 0);
 FUNC_1(FUNC_2(VAR_22));
 FUNC_1(FUNC_3(VAR_24));


 VAR_34->ds_ctl0 = (VAR_20 & VAR_6)
       | (VAR_24 << VAR_11)
       | (VAR_27 << VAR_1)
       | (VAR_28 & VAR_12 ? VAR_2 : 0)
       | (VAR_28 & VAR_13 ? VAR_9 : 0)
       | (VAR_28 & VAR_15 ? VAR_8 : 0)
       | (VAR_28 & VAR_16 ? VAR_10 : 0)
       ;
 VAR_34->ds_ctl1 = (VAR_22 << 26)
       | (VAR_28 & VAR_14 ? VAR_7 : 0)
       ;

 if (VAR_26 != VAR_17) {
  VAR_34->ds_ctl1 |=
   (VAR_26 << VAR_4) & VAR_3;
  VAR_34->ds_ctl0 |= VAR_5;
 }
 return VAR_0;

}
