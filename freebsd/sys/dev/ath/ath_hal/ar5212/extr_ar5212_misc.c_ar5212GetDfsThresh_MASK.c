
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int pe_firpwr; int pe_enabled; int pe_relpwr; int pe_relstep; int pe_maxlen; int pe_usefir128; int pe_blockradar; int pe_enmaxrssi; int pe_enrelpwr; int pe_en_relstep_check; int pe_extchannel; void* pe_inband; void* pe_prssi; void* pe_height; void* pe_rrssi; } ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (struct ath_hal*,int ) ;

void
FUNC_3(struct ath_hal *VAR_17, HAL_PHYERR_PARAM *VAR_18)
{
 uint32_t VAR_19,VAR_20;

 VAR_19 = FUNC_2(VAR_17, VAR_1);

 VAR_20 = FUNC_1(VAR_19,VAR_3);
 VAR_20 |= 0xFFFFFF80;
 VAR_18->pe_firpwr = VAR_20;
 VAR_18->pe_rrssi = FUNC_1(VAR_19, VAR_7);
 VAR_18->pe_height = FUNC_1(VAR_19, VAR_4);
 VAR_18->pe_prssi = FUNC_1(VAR_19, VAR_6);
 VAR_18->pe_inband = FUNC_1(VAR_19, VAR_5);
 VAR_18->pe_enabled = !! (VAR_19 & VAR_2);

 VAR_18->pe_relpwr = 0;
 VAR_18->pe_relstep = 0;
 VAR_18->pe_maxlen = 0;
 VAR_18->pe_usefir128 = 0;
 VAR_18->pe_blockradar = 0;
 VAR_18->pe_enmaxrssi = 0;
 VAR_18->pe_enrelpwr = 0;
 VAR_18->pe_en_relstep_check = 0;
 VAR_18->pe_extchannel = VAR_0;

 if (FUNC_0(VAR_17)) {
  VAR_19 = FUNC_2(VAR_17, VAR_8);
  VAR_18->pe_relpwr = !! FUNC_1(VAR_19, VAR_14);
  VAR_18->pe_relstep = !! FUNC_1(VAR_19, VAR_15);
  VAR_18->pe_maxlen = !! FUNC_1(VAR_19, VAR_13);

  VAR_18->pe_usefir128 = !! (VAR_19 & VAR_16);
  VAR_18->pe_blockradar = !! (VAR_19 & VAR_9);
  VAR_18->pe_enmaxrssi = !! (VAR_19 & VAR_10);
  VAR_18->pe_enrelpwr = !! (VAR_19 & VAR_11);
  VAR_18->pe_en_relstep_check =
      !! (VAR_19 & VAR_12);
 }
}
