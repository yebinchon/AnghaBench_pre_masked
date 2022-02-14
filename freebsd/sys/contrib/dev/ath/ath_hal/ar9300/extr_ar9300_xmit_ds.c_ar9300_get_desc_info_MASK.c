
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_3__ {int rxstatus_offset; int rxstatus_numwords; int rxctl_offset; int rxctl_numwords; int txstatus_offset; int txstatus_numwords; int txctl_offset; int txctl_numwords; } ;
typedef TYPE_1__ HAL_DESC_INFO ;


 int FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (struct ath_hal*) ;
 int FUNC_4 (struct ath_hal*) ;
 int FUNC_5 (struct ath_hal*) ;
 int FUNC_6 (struct ath_hal*) ;
 int FUNC_7 (struct ath_hal*) ;

void
FUNC_8(struct ath_hal *VAR_0, HAL_DESC_INFO *VAR_1)
{
    VAR_1->txctl_numwords = FUNC_4(VAR_0);
    VAR_1->txctl_offset = FUNC_5(VAR_0);
    VAR_1->txstatus_numwords = FUNC_6(VAR_0);
    VAR_1->txstatus_offset = FUNC_7(VAR_0);

    VAR_1->rxctl_numwords = FUNC_0(VAR_0);
    VAR_1->rxctl_offset = FUNC_1(VAR_0);
    VAR_1->rxstatus_numwords = FUNC_2(VAR_0);
    VAR_1->rxstatus_offset = FUNC_3(VAR_0);
}
