
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar5210_desc {int ds_ctl0; } ;


 struct ar5210_desc* FUNC_0 (struct ath_desc*) ;
 int VAR_0 ;

void
FUNC_1(struct ath_hal *VAR_1, struct ath_desc *VAR_2)
{
 struct ar5210_desc *VAR_3 = FUNC_0(VAR_2);

 VAR_3->ds_ctl0 |= VAR_0;
}
