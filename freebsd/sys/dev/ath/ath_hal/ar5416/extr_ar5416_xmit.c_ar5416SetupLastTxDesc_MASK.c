
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar5416_desc {void* ds_ctl3; void* ds_ctl2; int ds_ctl6; int ds_ctl1; } ;
struct TYPE_2__ {void* ds_ctl3; void* ds_ctl2; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 struct ar5416_desc* FUNC_0 (struct ath_desc*) ;
 TYPE_1__* FUNC_1 (struct ath_desc const*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (void*) ;

HAL_BOOL
FUNC_3(struct ath_hal *VAR_3, struct ath_desc *VAR_4,
  const struct ath_desc *VAR_5)
{
 struct ar5416_desc *VAR_6 = FUNC_0(VAR_4);

 VAR_6->ds_ctl1 &= ~VAR_1;
 VAR_6->ds_ctl6 &= ~VAR_2;






 VAR_6->ds_ctl2 = FUNC_1(VAR_5)->ds_ctl2;
 VAR_6->ds_ctl3 = FUNC_1(VAR_5)->ds_ctl3;

 return VAR_0;
}
