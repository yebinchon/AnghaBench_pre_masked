
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {scalar_t__ pe_firpwr; scalar_t__ pe_rrssi; scalar_t__ pe_height; scalar_t__ pe_prssi; scalar_t__ pe_inband; int pe_blockradar; int pe_en_relstep_check; int pe_usefir128; int pe_enmaxrssi; int pe_enrelpwr; scalar_t__ pe_relpwr; scalar_t__ pe_relstep; scalar_t__ pe_maxlen; scalar_t__ pe_enabled; } ;
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
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*,int ,int ) ;
 int FUNC_2 (struct ath_hal*,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int ,scalar_t__) ;
 int FUNC_4 (struct ath_hal*,int ,int ) ;
 int FUNC_5 (struct ath_hal*,int ,int ) ;
 int FUNC_6 (scalar_t__,int ) ;

void
FUNC_7(struct ath_hal *VAR_17, HAL_PHYERR_PARAM *VAR_18)
{
 uint32_t VAR_19;
 VAR_19 = FUNC_2(VAR_17, VAR_0);

 if (VAR_18->pe_firpwr != VAR_16) {
  VAR_19 &= ~VAR_2;
  VAR_19 |= FUNC_6(VAR_18->pe_firpwr, VAR_2);
 }
 if (VAR_18->pe_rrssi != VAR_16) {
  VAR_19 &= ~VAR_6;
  VAR_19 |= FUNC_6(VAR_18->pe_rrssi, VAR_6);
 }
 if (VAR_18->pe_height != VAR_16) {
  VAR_19 &= ~VAR_3;
  VAR_19 |= FUNC_6(VAR_18->pe_height, VAR_3);
 }
 if (VAR_18->pe_prssi != VAR_16) {
  VAR_19 &= ~VAR_5;
  VAR_19 |= FUNC_6(VAR_18->pe_prssi, VAR_5);
 }
 if (VAR_18->pe_inband != VAR_16) {
  VAR_19 &= ~VAR_4;
  VAR_19 |= FUNC_6(VAR_18->pe_inband, VAR_4);
 }
 if (VAR_18->pe_enabled)
  VAR_19 |= VAR_1;
 else
  VAR_19 &= ~ VAR_1;

 if (FUNC_0(VAR_17)) {

  if (VAR_18->pe_blockradar == 1)
   FUNC_4(VAR_17, VAR_7,
       VAR_8);
  else
   FUNC_1(VAR_17, VAR_7,
       VAR_8);

  if (VAR_18->pe_en_relstep_check == 1)
   FUNC_4(VAR_17, VAR_7,
       VAR_11);
  else
   FUNC_1(VAR_17, VAR_7,
       VAR_11);

  if (VAR_18->pe_usefir128 == 1)
   FUNC_4(VAR_17, VAR_7,
       VAR_15);
  else
   FUNC_1(VAR_17, VAR_7,
       VAR_15);

  if (VAR_18->pe_enmaxrssi == 1)
   FUNC_4(VAR_17, VAR_7,
       VAR_9);
  else
   FUNC_1(VAR_17, VAR_7,
       VAR_9);

  if (VAR_18->pe_enrelpwr == 1)
   FUNC_4(VAR_17, VAR_7,
       VAR_10);
  else
   FUNC_1(VAR_17, VAR_7,
       VAR_10);

  if (VAR_18->pe_relpwr != VAR_16)
   FUNC_3(VAR_17, VAR_7,
       VAR_13, VAR_18->pe_relpwr);

  if (VAR_18->pe_relstep != VAR_16)
   FUNC_3(VAR_17, VAR_7,
       VAR_14, VAR_18->pe_relstep);

  if (VAR_18->pe_maxlen != VAR_16)
   FUNC_3(VAR_17, VAR_7,
       VAR_12, VAR_18->pe_maxlen);
 }

 FUNC_5(VAR_17, VAR_0, VAR_19);
}
