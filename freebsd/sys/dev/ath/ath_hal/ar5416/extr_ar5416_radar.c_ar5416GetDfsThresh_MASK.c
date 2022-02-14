
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int pe_firpwr; int pe_extchannel; int pe_usefir128; int pe_blockradar; int pe_enmaxrssi; int pe_enabled; int pe_enrelpwr; int pe_en_relstep_check; void* pe_maxlen; void* pe_relstep; void* pe_relpwr; void* pe_inband; void* pe_prssi; void* pe_height; void* pe_rrssi; } ;
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
 int VAR_17 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (struct ath_hal*,int ) ;

void
FUNC_2(struct ath_hal *VAR_18, HAL_PHYERR_PARAM *VAR_19)
{
 uint32_t VAR_20, VAR_21;

 VAR_20 = FUNC_1(VAR_18, VAR_0);

 VAR_21 = FUNC_0(VAR_20,VAR_2);
 VAR_21 |= 0xFFFFFF80;
 VAR_19->pe_firpwr = VAR_21;
 VAR_19->pe_rrssi = FUNC_0(VAR_20, VAR_6);
 VAR_19->pe_height = FUNC_0(VAR_20, VAR_3);
 VAR_19->pe_prssi = FUNC_0(VAR_20, VAR_5);
 VAR_19->pe_inband = FUNC_0(VAR_20, VAR_4);


 VAR_20 = FUNC_1(VAR_18, VAR_7);
 VAR_19->pe_relpwr = FUNC_0(VAR_20, VAR_12);
 VAR_19->pe_relstep = FUNC_0(VAR_20, VAR_14);
 VAR_19->pe_maxlen = FUNC_0(VAR_20, VAR_9);

 VAR_19->pe_extchannel = !! (FUNC_1(VAR_18, VAR_16) &
     VAR_17);

 VAR_19->pe_usefir128 = !! (FUNC_1(VAR_18, VAR_7) &
     VAR_15);
 VAR_19->pe_blockradar = !! (FUNC_1(VAR_18, VAR_7) &
     VAR_8);
 VAR_19->pe_enmaxrssi = !! (FUNC_1(VAR_18, VAR_7) &
     VAR_10);
 VAR_19->pe_enabled = !!
     (FUNC_1(VAR_18, VAR_0) & VAR_1);
 VAR_19->pe_enrelpwr = !! (FUNC_1(VAR_18, VAR_7) &
     VAR_11);
 VAR_19->pe_en_relstep_check = !! (FUNC_1(VAR_18, VAR_7) &
     VAR_13);
}
