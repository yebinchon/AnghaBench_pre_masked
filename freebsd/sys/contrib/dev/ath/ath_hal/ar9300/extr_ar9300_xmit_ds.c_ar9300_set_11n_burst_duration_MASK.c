
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar9300_txc {int ds_ctl13; } ;


 struct ar9300_txc* FUNC_0 (struct ath_desc*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct ath_hal *VAR_1, struct ath_desc *VAR_2,
    u_int VAR_3)
{
    struct ar9300_txc *VAR_4 = FUNC_0(VAR_2);

    VAR_4->ds_ctl13 &= ~VAR_0;
    VAR_4->ds_ctl13 |= FUNC_1(VAR_3, VAR_0);
}
