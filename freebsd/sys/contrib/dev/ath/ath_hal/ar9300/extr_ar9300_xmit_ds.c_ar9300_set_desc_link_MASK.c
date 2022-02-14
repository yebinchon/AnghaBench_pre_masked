
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal {int dummy; } ;
struct ar9300_txc {int ds_ctl10; int ds_link; } ;


 struct ar9300_txc* FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (struct ar9300_txc*) ;

void
FUNC_2(struct ath_hal *VAR_1, void *VAR_2, u_int32_t VAR_3)
{
    struct ar9300_txc *VAR_4 = FUNC_0(VAR_2);

    VAR_4->ds_link = VAR_3;





    VAR_4->ds_ctl10 &= ~VAR_0;
    VAR_4->ds_ctl10 |= FUNC_1(VAR_4);
}
