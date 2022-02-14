
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_3__ {int pe_blockradar; int pe_enmaxrssi; int pe_enrelpwr; scalar_t__ pe_en_relstep_check; scalar_t__ pe_usefir128; scalar_t__ pe_maxlen; scalar_t__ pe_relstep; scalar_t__ pe_relpwr; int pe_inband; int pe_prssi; int pe_height; int pe_rrssi; int pe_firpwr; } ;
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
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;

HAL_BOOL
FUNC_1(struct ath_hal *VAR_14, HAL_PHYERR_PARAM *VAR_15)
{

 if (FUNC_0(VAR_14)) {
  VAR_15->pe_firpwr = VAR_6;
  VAR_15->pe_rrssi = VAR_13;
  VAR_15->pe_height = VAR_7;
  VAR_15->pe_prssi = VAR_10;
  VAR_15->pe_inband = VAR_8;
  VAR_15->pe_relpwr = VAR_11;
  VAR_15->pe_relstep = VAR_12;
  VAR_15->pe_maxlen = VAR_9;
  VAR_15->pe_usefir128 = 0;
  VAR_15->pe_blockradar = 1;
  VAR_15->pe_enmaxrssi = 1;
  VAR_15->pe_enrelpwr = 1;
  VAR_15->pe_en_relstep_check = 0;
 } else {
  VAR_15->pe_firpwr = VAR_1;
  VAR_15->pe_rrssi = VAR_5;
  VAR_15->pe_height = VAR_2;
  VAR_15->pe_prssi = VAR_4;
  VAR_15->pe_inband = VAR_3;
  VAR_15->pe_relpwr = 0;
  VAR_15->pe_relstep = 0;
  VAR_15->pe_maxlen = 0;
  VAR_15->pe_usefir128 = 0;
  VAR_15->pe_blockradar = 0;
  VAR_15->pe_enmaxrssi = 0;
  VAR_15->pe_enrelpwr = 0;
  VAR_15->pe_en_relstep_check = 0;
 }

 return (VAR_0);
}
