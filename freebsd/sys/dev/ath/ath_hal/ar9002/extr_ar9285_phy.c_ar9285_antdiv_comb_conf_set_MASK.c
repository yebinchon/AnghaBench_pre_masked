
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int main_lna_conf; int alt_lna_conf; int fast_div_bias; } ;
typedef TYPE_1__ HAL_ANT_COMB_CONFIG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ath_hal*,int ) ;
 int FUNC_1 (struct ath_hal*,int ,int) ;

void
FUNC_2(struct ath_hal *VAR_7, HAL_ANT_COMB_CONFIG *VAR_8)
{
 uint32_t VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_6);
 VAR_9 &= ~(VAR_2 |
      VAR_0 |
      VAR_4);
 VAR_9 |= ((VAR_8->main_lna_conf << VAR_3)
     & VAR_2);
 VAR_9 |= ((VAR_8->alt_lna_conf << VAR_1)
     & VAR_0);
 VAR_9 |= ((VAR_8->fast_div_bias << VAR_5)
     & VAR_4);

 FUNC_1(VAR_7, VAR_6, VAR_9);
}
