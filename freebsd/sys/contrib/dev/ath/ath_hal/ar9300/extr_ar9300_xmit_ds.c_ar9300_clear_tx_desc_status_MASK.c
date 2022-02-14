
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal {int dummy; } ;
struct ar9300_txs {scalar_t__ status8; scalar_t__ status7; scalar_t__ status6; scalar_t__ status5; scalar_t__ status4; scalar_t__ status3; scalar_t__ status2; scalar_t__ status1; } ;


 struct ar9300_txs* FUNC_0 (void*) ;

void
FUNC_1(struct ath_hal *VAR_0, void *VAR_1)
{
    struct ar9300_txs *VAR_2 = FUNC_0(VAR_1);
    VAR_2->status1 = VAR_2->status2 = 0;
    VAR_2->status3 = VAR_2->status4 = 0;
    VAR_2->status5 = VAR_2->status6 = 0;
    VAR_2->status7 = VAR_2->status8 = 0;
}
