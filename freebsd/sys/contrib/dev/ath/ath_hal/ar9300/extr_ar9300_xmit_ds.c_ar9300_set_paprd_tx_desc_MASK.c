
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal {int dummy; } ;
struct ar9300_txc {int ds_ctl12; } ;


 struct ar9300_txc* FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;

void
FUNC_2(struct ath_hal *VAR_1, void *VAR_2, int VAR_3)
{
    struct ar9300_txc *VAR_4 = FUNC_0(VAR_2);

    VAR_4->ds_ctl12 |= FUNC_1((1 << VAR_3), VAR_0);
}
