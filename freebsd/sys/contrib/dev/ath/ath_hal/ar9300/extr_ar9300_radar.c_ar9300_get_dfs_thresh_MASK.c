
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int pe_firpwr; int pe_enabled; int pe_enrelpwr; int pe_en_relstep_check; void* pe_maxlen; void* pe_relstep; void* pe_relpwr; void* pe_inband; void* pe_prssi; void* pe_height; void* pe_rrssi; } ;
typedef TYPE_1__ HAL_PHYERR_PARAM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (struct ath_hal*,int ) ;

void
FUNC_2(struct ath_hal *VAR_14, HAL_PHYERR_PARAM *VAR_15)
{
    u_int32_t VAR_16, VAR_17;

    VAR_16 = FUNC_1(VAR_14, VAR_0);
    VAR_17 = FUNC_0(VAR_16, VAR_2);
    VAR_17 |= ~(VAR_2 >> VAR_3);
    VAR_15->pe_firpwr = VAR_17;
    VAR_15->pe_rrssi = FUNC_0(VAR_16, VAR_7);
    VAR_15->pe_height = FUNC_0(VAR_16, VAR_4);
    VAR_15->pe_prssi = FUNC_0(VAR_16, VAR_6);
    VAR_15->pe_inband = FUNC_0(VAR_16, VAR_5);
    VAR_15->pe_enabled = !! FUNC_0(VAR_16, VAR_1);

    VAR_16 = FUNC_1(VAR_14, VAR_8);

    VAR_15->pe_relpwr = FUNC_0(VAR_16, VAR_11);
    VAR_15->pe_enrelpwr = !! (VAR_16 & VAR_10);

    VAR_15->pe_relstep = FUNC_0(VAR_16, VAR_13);
    VAR_15->pe_en_relstep_check = !! (VAR_16 & VAR_12);

    VAR_15->pe_maxlen = FUNC_0(VAR_16, VAR_9);
}
