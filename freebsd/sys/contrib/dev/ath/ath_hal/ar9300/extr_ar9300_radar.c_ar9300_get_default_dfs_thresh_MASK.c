
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_3__ {int pe_maxlen; int pe_relstep; int pe_relpwr; int pe_inband; int pe_prssi; int pe_height; int pe_rrssi; int pe_firpwr; } ;
typedef TYPE_1__ HAL_PHYERR_PARAM ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

HAL_BOOL
FUNC_0(struct ath_hal *VAR_9, HAL_PHYERR_PARAM *VAR_10)
{

    VAR_10->pe_firpwr = VAR_1;
    VAR_10->pe_rrssi = VAR_8;
    VAR_10->pe_height = VAR_2;
    VAR_10->pe_prssi = VAR_5;


    VAR_10->pe_inband = VAR_3;
    VAR_10->pe_relpwr = VAR_6;
    VAR_10->pe_relstep = VAR_7;
    VAR_10->pe_maxlen = VAR_4;
    return (VAR_0);
}
