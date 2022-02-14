
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar9300_txc {int ds_ctl11; } ;


 struct ar9300_txc* FUNC_0 (struct ath_desc*) ;
 int VAR_0 ;

void
FUNC_1(struct ath_hal *VAR_1, struct ath_desc *VAR_2,
                                                  u_int VAR_3)
{
    struct ar9300_txc *VAR_4 = FUNC_0(VAR_2);

    if (VAR_3) {
        VAR_4->ds_ctl11 |= VAR_0;
    } else {
        VAR_4->ds_ctl11 &= ~VAR_0;
    }
}
