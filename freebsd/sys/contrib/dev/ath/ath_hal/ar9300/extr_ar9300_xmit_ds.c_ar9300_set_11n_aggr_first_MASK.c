
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar9300_txc {int ds_ctl12; int ds_ctl17; } ;


 struct ar9300_txc* FUNC_0 (struct ath_desc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct ath_hal *VAR_4, struct ath_desc *VAR_5,
  u_int VAR_6, u_int VAR_7)
{
    struct ar9300_txc *VAR_8 = FUNC_0(VAR_5);

    VAR_8->ds_ctl12 |= (VAR_1 | VAR_2);

    VAR_8->ds_ctl17 &= ~VAR_0;
    VAR_8->ds_ctl17 &= ~VAR_3;

    VAR_8->ds_ctl17 |= FUNC_1(VAR_6, VAR_0);
    VAR_8->ds_ctl17 |= FUNC_1(VAR_7, VAR_3);
}
