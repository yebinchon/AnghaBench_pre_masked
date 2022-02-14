
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_tx_status {int ts_finaltsi; void* ts_rate; } ;
struct ath_hal {int dummy; } ;
struct ar9300_txc {int ds_ctl14; } ;


 struct ar9300_txc* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ath_hal*,void*) ;

void
FUNC_3(struct ath_hal *VAR_4, void *VAR_5, struct ath_tx_status *VAR_6)
{
    struct ar9300_txc *VAR_7 = FUNC_0(VAR_5);

    switch (VAR_6->ts_finaltsi) {
    case 0:
        VAR_6->ts_rate = FUNC_1(VAR_7->ds_ctl14, VAR_0);
        break;
    case 1:
        VAR_6->ts_rate = FUNC_1(VAR_7->ds_ctl14, VAR_1);
        break;
    case 2:
        VAR_6->ts_rate = FUNC_1(VAR_7->ds_ctl14, VAR_2);
        break;
    case 3:
        VAR_6->ts_rate = FUNC_1(VAR_7->ds_ctl14, VAR_3);
        break;
    }

    FUNC_2(VAR_4, VAR_6->ts_rate);
}
