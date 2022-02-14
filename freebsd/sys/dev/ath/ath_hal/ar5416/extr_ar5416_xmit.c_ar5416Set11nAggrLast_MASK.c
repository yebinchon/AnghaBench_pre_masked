
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar5416_desc {int ds_ctl6; int ds_ctl1; } ;


 struct ar5416_desc* FUNC_0 (struct ath_desc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_1(struct ath_hal *VAR_3, struct ath_desc *VAR_4)
{
 struct ar5416_desc *VAR_5 = FUNC_0(VAR_4);

 VAR_5->ds_ctl1 |= VAR_0;
 VAR_5->ds_ctl1 &= ~VAR_1;
 VAR_5->ds_ctl6 &= ~VAR_2;
}
