
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar9300_txc {int ds_ctl12; unsigned int ds_ctl17; } ;


 struct ar9300_txc* FUNC_0 (struct ath_desc*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_1 (int ,unsigned int) ;

void
FUNC_2(struct ath_hal *VAR_3, struct ath_desc *VAR_4,
  u_int VAR_5)
{
    struct ar9300_txc *VAR_6 = FUNC_0(VAR_4);
    unsigned int VAR_7;

    VAR_6->ds_ctl12 |= (VAR_0 | VAR_1);





    VAR_7 = VAR_6->ds_ctl17;
    VAR_7 &= ~VAR_2;
    VAR_7 |= FUNC_1(VAR_5, VAR_2);
    VAR_6->ds_ctl17 = VAR_7;
}
