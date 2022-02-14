
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar5416_desc {int ds_ctl2; int ds_ctl3; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 struct ar5416_desc* FUNC_0 (struct ath_desc const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;

HAL_BOOL
FUNC_2(struct ath_hal *VAR_9, const struct ath_desc *VAR_10, int *VAR_11, int *VAR_12)
{
 const struct ar5416_desc *VAR_13 = FUNC_0(VAR_10);

 VAR_11[0] = FUNC_1(VAR_13->ds_ctl3, VAR_5);
 VAR_11[1] = FUNC_1(VAR_13->ds_ctl3, VAR_6);
 VAR_11[2] = FUNC_1(VAR_13->ds_ctl3, VAR_7);
 VAR_11[3] = FUNC_1(VAR_13->ds_ctl3, VAR_8);

 VAR_12[0] = FUNC_1(VAR_13->ds_ctl2, VAR_1);
 VAR_12[1] = FUNC_1(VAR_13->ds_ctl2, VAR_2);
 VAR_12[2] = FUNC_1(VAR_13->ds_ctl2, VAR_3);
 VAR_12[3] = FUNC_1(VAR_13->ds_ctl2, VAR_4);

 return VAR_0;
}
