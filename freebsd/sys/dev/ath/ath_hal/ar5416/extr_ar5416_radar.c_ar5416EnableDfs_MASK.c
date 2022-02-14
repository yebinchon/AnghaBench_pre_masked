
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {scalar_t__ pe_firpwr; scalar_t__ pe_rrssi; scalar_t__ pe_height; scalar_t__ pe_prssi; scalar_t__ pe_inband; int pe_enabled; int pe_usefir128; int pe_enmaxrssi; int pe_blockradar; scalar_t__ pe_relstep; scalar_t__ pe_relpwr; int pe_en_relstep_check; int pe_enrelpwr; scalar_t__ pe_maxlen; int pe_extchannel; } ;
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
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (struct ath_hal*,int ,int ) ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (struct ath_hal*,int ,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int ) ;
 int FUNC_4 (scalar_t__,int ) ;

void
FUNC_5(struct ath_hal *VAR_20, HAL_PHYERR_PARAM *VAR_21)
{
 uint32_t VAR_22;

 VAR_22 = FUNC_1(VAR_20, VAR_0);

 if (VAR_21->pe_firpwr != VAR_19) {
  VAR_22 &= ~VAR_3;
  VAR_22 |= FUNC_4(VAR_21->pe_firpwr, VAR_3);
 }
 if (VAR_21->pe_rrssi != VAR_19) {
  VAR_22 &= ~VAR_7;
  VAR_22 |= FUNC_4(VAR_21->pe_rrssi, VAR_7);
 }
 if (VAR_21->pe_height != VAR_19) {
  VAR_22 &= ~VAR_4;
  VAR_22 |= FUNC_4(VAR_21->pe_height, VAR_4);
 }
 if (VAR_21->pe_prssi != VAR_19) {
  VAR_22 &= ~VAR_6;
  VAR_22 |= FUNC_4(VAR_21->pe_prssi, VAR_6);
 }
 if (VAR_21->pe_inband != VAR_19) {
  VAR_22 &= ~VAR_5;
  VAR_22 |= FUNC_4(VAR_21->pe_inband, VAR_5);
 }


 VAR_22 |= VAR_2;
 FUNC_3(VAR_20, VAR_0, VAR_22);


 if (VAR_21->pe_enabled == 1)
  FUNC_2(VAR_20, VAR_0, VAR_1);
 else if (VAR_21->pe_enabled == 0)
  FUNC_0(VAR_20, VAR_0, VAR_1);

 if (VAR_21->pe_usefir128 == 1)
  FUNC_2(VAR_20, VAR_8, VAR_16);
 else if (VAR_21->pe_usefir128 == 0)
  FUNC_0(VAR_20, VAR_8, VAR_16);

 if (VAR_21->pe_enmaxrssi == 1)
  FUNC_2(VAR_20, VAR_8, VAR_11);
 else if (VAR_21->pe_enmaxrssi == 0)
  FUNC_0(VAR_20, VAR_8, VAR_11);

 if (VAR_21->pe_blockradar == 1)
  FUNC_2(VAR_20, VAR_8, VAR_9);
 else if (VAR_21->pe_blockradar == 0)
  FUNC_0(VAR_20, VAR_8, VAR_9);

 if (VAR_21->pe_relstep != VAR_19) {
  VAR_22 = FUNC_1(VAR_20, VAR_8);
  VAR_22 &= ~VAR_15;
  VAR_22 |= FUNC_4(VAR_21->pe_relstep, VAR_15);
  FUNC_3(VAR_20, VAR_8, VAR_22);
 }
 if (VAR_21->pe_relpwr != VAR_19) {
  VAR_22 = FUNC_1(VAR_20, VAR_8);
  VAR_22 &= ~VAR_13;
  VAR_22 |= FUNC_4(VAR_21->pe_relpwr, VAR_13);
  FUNC_3(VAR_20, VAR_8, VAR_22);
 }

 if (VAR_21->pe_en_relstep_check == 1)
  FUNC_2(VAR_20, VAR_8,
      VAR_14);
 else if (VAR_21->pe_en_relstep_check == 0)
  FUNC_0(VAR_20, VAR_8,
      VAR_14);

 if (VAR_21->pe_enrelpwr == 1)
  FUNC_2(VAR_20, VAR_8,
      VAR_12);
 else if (VAR_21->pe_enrelpwr == 0)
  FUNC_0(VAR_20, VAR_8,
      VAR_12);

 if (VAR_21->pe_maxlen != VAR_19) {
  VAR_22 = FUNC_1(VAR_20, VAR_8);
  VAR_22 &= ~VAR_10;
  VAR_22 |= FUNC_4(VAR_21->pe_maxlen, VAR_10);
  FUNC_3(VAR_20, VAR_8, VAR_22);
 }






 if (VAR_21->pe_extchannel == 1)
  FUNC_2(VAR_20, VAR_17, VAR_18);
 else if (VAR_21->pe_extchannel == 0)
  FUNC_0(VAR_20, VAR_17, VAR_18);
}
