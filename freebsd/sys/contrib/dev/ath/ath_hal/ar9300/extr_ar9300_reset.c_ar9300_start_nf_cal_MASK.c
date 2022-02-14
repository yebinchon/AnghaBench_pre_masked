
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_9300 {scalar_t__ ah_chip_reset_done; int nf_tsf32; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ath_hal*,int ,int ) ;
 int FUNC_2 (struct ath_hal*) ;

__attribute__((used)) static void
FUNC_3(struct ath_hal *VAR_4)
{
    struct ath_hal_9300 *VAR_5 = FUNC_0(VAR_4);
    FUNC_1(VAR_4, VAR_0, VAR_1);
    FUNC_1(VAR_4, VAR_0, VAR_3);
    FUNC_1(VAR_4, VAR_0, VAR_2);
    FUNC_0(VAR_4)->nf_tsf32 = FUNC_2(VAR_4);
    VAR_5->ah_chip_reset_done = 0;
}
