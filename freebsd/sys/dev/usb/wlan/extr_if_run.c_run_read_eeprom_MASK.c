
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct ieee80211com {int* ic_macaddr; } ;
struct run_softc {int mac_ver; int freq; int leds; int* led; int rf_rev; int ntxchains; int nrxchains; int patch_dac; int ext_5ghz_lna; int ext_2ghz_lna; int calib_2ghz; int calib_5ghz; int rfswitch; int* txpow20mhz; int* rssi_2ghz; int txmixgain_2ghz; int* lna; int* rssi_5ghz; int txmixgain_5ghz; void** txpow40mhz_5ghz; void** txpow40mhz_2ghz; int sc_dev; TYPE_2__* rf; TYPE_1__* bbp; int sc_srom_read; struct ieee80211com sc_ic; } ;
typedef int int8_t ;
struct TYPE_4__ {int val; int reg; } ;
struct TYPE_3__ {int val; int reg; } ;


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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_0 (struct run_softc*,int,char*,int,...) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_3 (struct run_softc*) ;
 int FUNC_4 (struct run_softc*,int ,int*) ;
 int FUNC_5 (struct run_softc*) ;
 int FUNC_6 (struct run_softc*,int,int*) ;

__attribute__((used)) static int
FUNC_7(struct run_softc *VAR_40)
{
 struct ieee80211com *VAR_41 = &VAR_40->sc_ic;
 int8_t VAR_42, VAR_43;
 uint32_t VAR_44;
 uint16_t VAR_45;
 int VAR_46, VAR_47, VAR_48;


 VAR_40->sc_srom_read = VAR_38;
 if (VAR_40->mac_ver >= 0x3070) {
  FUNC_4(VAR_40, VAR_19, &VAR_44);
  FUNC_0(VAR_40, VAR_35, "EFUSE_CTRL=0x%08x\n", VAR_44);
  if ((VAR_44 & VAR_22) || VAR_40->mac_ver == 0x3593)
   VAR_40->sc_srom_read = VAR_39;
 }


 FUNC_6(VAR_40, VAR_17, &VAR_45);
 FUNC_0(VAR_40, VAR_35,
     "EEPROM rev=%d, FAE=%d\n", VAR_45 >> 8, VAR_45 & 0xff);


 FUNC_6(VAR_40, VAR_9, &VAR_45);
 VAR_41->ic_macaddr[0] = VAR_45 & 0xff;
 VAR_41->ic_macaddr[1] = VAR_45 >> 8;
 FUNC_6(VAR_40, VAR_10, &VAR_45);
 VAR_41->ic_macaddr[2] = VAR_45 & 0xff;
 VAR_41->ic_macaddr[3] = VAR_45 >> 8;
 FUNC_6(VAR_40, VAR_11, &VAR_45);
 VAR_41->ic_macaddr[4] = VAR_45 & 0xff;
 VAR_41->ic_macaddr[5] = VAR_45 >> 8;

 if (VAR_40->mac_ver < 0x3593) {

  for (VAR_48 = 0; VAR_48 < 10; VAR_48++) {
   FUNC_6(VAR_40, VAR_1 + VAR_48, &VAR_45);
   VAR_40->bbp[VAR_48].val = VAR_45 & 0xff;
   VAR_40->bbp[VAR_48].reg = VAR_45 >> 8;
   FUNC_0(VAR_40, VAR_35,
       "BBP%d=0x%02x\n", VAR_40->bbp[VAR_48].reg, VAR_40->bbp[VAR_48].val);
  }
  if (VAR_40->mac_ver >= 0x3071) {

   for (VAR_48 = 0; VAR_48 < 10; VAR_48++) {
    FUNC_6(VAR_40, VAR_23 + VAR_48,
       &VAR_45);
    VAR_40->rf[VAR_48].val = VAR_45 & 0xff;
    VAR_40->rf[VAR_48].reg = VAR_45 >> 8;
    FUNC_0(VAR_40, VAR_35, "RF%d=0x%02x\n",
        VAR_40->rf[VAR_48].reg, VAR_40->rf[VAR_48].val);
   }
  }
 }


 FUNC_6(VAR_40, (VAR_40->mac_ver != 0x3593) ? VAR_4 :
     VAR_24, &VAR_45);
 VAR_40->freq = ((VAR_45 & 0xff) != 0xff) ? VAR_45 & 0xff : 0;
 FUNC_0(VAR_40, VAR_35, "EEPROM freq offset %d\n",
     VAR_40->freq & 0xff);

 FUNC_6(VAR_40, (VAR_40->mac_ver != 0x3593) ? VAR_4 :
     VAR_25, &VAR_45);
 if (VAR_45 >> 8 != 0xff) {

  VAR_40->leds = VAR_45 >> 8;
  FUNC_6(VAR_40, (VAR_40->mac_ver != 0x3593) ? VAR_5 :
      VAR_26, &VAR_40->led[0]);
  FUNC_6(VAR_40, (VAR_40->mac_ver != 0x3593) ? VAR_6 :
      VAR_27, &VAR_40->led[1]);
  FUNC_6(VAR_40, (VAR_40->mac_ver != 0x3593) ? VAR_7 :
      VAR_28, &VAR_40->led[2]);
 } else {

  VAR_40->leds = 0x01;
  VAR_40->led[0] = 0x5555;
  VAR_40->led[1] = 0x2221;
  VAR_40->led[2] = 0x5627;
 }
 FUNC_0(VAR_40, VAR_35,
     "EEPROM LED mode=0x%02x, LEDs=0x%04x/0x%04x/0x%04x\n",
     VAR_40->leds, VAR_40->led[0], VAR_40->led[1], VAR_40->led[2]);


 if (VAR_40->mac_ver == 0x5390 || VAR_40->mac_ver ==0x5392)
  FUNC_6(VAR_40, 0x00, &VAR_45);
 else
  FUNC_6(VAR_40, VAR_0, &VAR_45);

 if (VAR_45 == 0xffff) {
  FUNC_2(VAR_40->sc_dev,
      "invalid EEPROM antenna info, using default\n");
  if (VAR_40->mac_ver == 0x3572) {

   VAR_40->rf_rev = VAR_21;
   VAR_40->ntxchains = 2;
   VAR_40->nrxchains = 2;
  } else if (VAR_40->mac_ver >= 0x3070) {

   VAR_40->rf_rev = VAR_20;
   VAR_40->ntxchains = 1;
   VAR_40->nrxchains = 1;
  } else {

   VAR_40->rf_rev = VAR_18;
   VAR_40->ntxchains = 1;
   VAR_40->nrxchains = 2;
  }
 } else {
  if (VAR_40->mac_ver == 0x5390 || VAR_40->mac_ver ==0x5392) {
   VAR_40->rf_rev = VAR_45;
   FUNC_6(VAR_40, VAR_0, &VAR_45);
  } else
   VAR_40->rf_rev = (VAR_45 >> 8) & 0xf;
  VAR_40->ntxchains = (VAR_45 >> 4) & 0xf;
  VAR_40->nrxchains = VAR_45 & 0xf;
 }
 FUNC_0(VAR_40, VAR_35, "EEPROM RF rev=0x%04x chains=%dT%dR\n",
     VAR_40->rf_rev, VAR_40->ntxchains, VAR_40->nrxchains);


 FUNC_6(VAR_40, VAR_2, &VAR_45);
 FUNC_0(VAR_40, VAR_35, "EEPROM CFG 0x%04x\n", VAR_45);

 if ((VAR_45 >> 8) != 0xff)
  VAR_40->patch_dac = (VAR_45 >> 15) & 1;
 if ((VAR_45 & 0xff) != 0xff) {
  VAR_40->ext_5ghz_lna = (VAR_45 >> 3) & 1;
  VAR_40->ext_2ghz_lna = (VAR_45 >> 2) & 1;

  VAR_40->calib_2ghz = VAR_40->calib_5ghz = (VAR_45 >> 1) & 1;

  VAR_40->rfswitch = VAR_45 & 1;
 }


 if (VAR_40->mac_ver == 0x3593)
  FUNC_5(VAR_40);
 else
  FUNC_3(VAR_40);


 FUNC_6(VAR_40, VAR_3, &VAR_45);
 VAR_42 = VAR_43 = 0;
 if ((VAR_45 & 0xff) != 0xff && (VAR_45 & 0x80)) {
  VAR_42 = VAR_45 & 0xf;
  if (!(VAR_45 & 0x40))
   VAR_42 = -VAR_42;
 }
 VAR_45 >>= 8;
 if ((VAR_45 & 0xff) != 0xff && (VAR_45 & 0x80)) {
  VAR_43 = VAR_45 & 0xf;
  if (!(VAR_45 & 0x40))
   VAR_43 = -VAR_43;
 }
 FUNC_0(VAR_40, VAR_35 | VAR_37,
     "power compensation=%d (2GHz), %d (5GHz)\n", VAR_42, VAR_43);

 for (VAR_46 = 0; VAR_46 < 5; VAR_46++) {
  uint32_t VAR_49;

  FUNC_6(VAR_40, VAR_12 + VAR_46 * 2, &VAR_45);
  VAR_49 = VAR_45;
  FUNC_6(VAR_40, VAR_12 + VAR_46 * 2 + 1, &VAR_45);
  VAR_49 |= (uint32_t)VAR_45 << 16;

  VAR_40->txpow20mhz[VAR_46] = VAR_49;
  VAR_40->txpow40mhz_2ghz[VAR_46] = FUNC_1(VAR_49, VAR_42);
  VAR_40->txpow40mhz_5ghz[VAR_46] = FUNC_1(VAR_49, VAR_43);

  FUNC_0(VAR_40, VAR_35 | VAR_37,
      "ridx %d: power 20MHz=0x%08x, 40MHz/2GHz=0x%08x, "
      "40MHz/5GHz=0x%08x\n", VAR_46, VAR_40->txpow20mhz[VAR_46],
      VAR_40->txpow40mhz_2ghz[VAR_46], VAR_40->txpow40mhz_5ghz[VAR_46]);
 }


 FUNC_6(VAR_40, (VAR_40->mac_ver != 0x3593) ? VAR_13 :
     VAR_31, &VAR_45);
 VAR_40->rssi_2ghz[0] = VAR_45 & 0xff;
 VAR_40->rssi_2ghz[1] = VAR_45 >> 8;
 FUNC_6(VAR_40, (VAR_40->mac_ver != 0x3593) ? VAR_15 :
     VAR_33, &VAR_45);
 if (VAR_40->mac_ver >= 0x3070) {
  if (VAR_40->mac_ver == 0x3593) {
   VAR_40->txmixgain_2ghz = 0;
   VAR_40->rssi_2ghz[2] = VAR_45 & 0xff;
  } else {




   if ((VAR_45 & 0xff) != 0xff)
    VAR_40->txmixgain_2ghz = VAR_45 & 0x7;
  }
  FUNC_0(VAR_40, VAR_35, "tx mixer gain=%u (2GHz)\n",
      VAR_40->txmixgain_2ghz);
 } else
  VAR_40->rssi_2ghz[2] = VAR_45 & 0xff;
 if (VAR_40->mac_ver == 0x3593)
  FUNC_6(VAR_40, VAR_30, &VAR_45);
 VAR_40->lna[2] = VAR_45 >> 8;

 FUNC_6(VAR_40, (VAR_40->mac_ver != 0x3593) ? VAR_14 :
     VAR_32, &VAR_45);
 VAR_40->rssi_5ghz[0] = VAR_45 & 0xff;
 VAR_40->rssi_5ghz[1] = VAR_45 >> 8;
 FUNC_6(VAR_40, (VAR_40->mac_ver != 0x3593) ? VAR_16 :
     VAR_34, &VAR_45);
 if (VAR_40->mac_ver == 0x3572) {




  if ((VAR_45 & 0xff) != 0xff)
   VAR_40->txmixgain_5ghz = VAR_45 & 0x7;
  FUNC_0(VAR_40, VAR_35, "tx mixer gain=%u (5GHz)\n",
      VAR_40->txmixgain_5ghz);
 } else
  VAR_40->rssi_5ghz[2] = VAR_45 & 0xff;
 if (VAR_40->mac_ver == 0x3593) {
  VAR_40->txmixgain_5ghz = 0;
  FUNC_6(VAR_40, VAR_30, &VAR_45);
 }
 VAR_40->lna[3] = VAR_45 >> 8;

 FUNC_6(VAR_40, (VAR_40->mac_ver != 0x3593) ? VAR_8 :
     VAR_29, &VAR_45);
 VAR_40->lna[0] = VAR_45 & 0xff;
 VAR_40->lna[1] = VAR_45 >> 8;


 if (VAR_40->lna[2] == 0 || VAR_40->lna[2] == 0xff) {
  FUNC_0(VAR_40, VAR_35,
      "invalid LNA for channel group %d\n", 2);
  VAR_40->lna[2] = VAR_40->lna[1];
 }
 if (VAR_40->lna[3] == 0 || VAR_40->lna[3] == 0xff) {
  FUNC_0(VAR_40, VAR_35,
      "invalid LNA for channel group %d\n", 3);
  VAR_40->lna[3] = VAR_40->lna[1];
 }


 for (VAR_47 = 0; VAR_47 < 3; VAR_47++) {
  if (VAR_40->rssi_2ghz[VAR_47] < -10 || VAR_40->rssi_2ghz[VAR_47] > 10) {
   FUNC_0(VAR_40, VAR_35 | VAR_36,
       "invalid RSSI%d offset: %d (2GHz)\n",
       VAR_47 + 1, VAR_40->rssi_2ghz[VAR_47]);
   VAR_40->rssi_2ghz[VAR_47] = 0;
  }
  if (VAR_40->rssi_5ghz[VAR_47] < -10 || VAR_40->rssi_5ghz[VAR_47] > 10) {
   FUNC_0(VAR_40, VAR_35 | VAR_36,
       "invalid RSSI%d offset: %d (5GHz)\n",
       VAR_47 + 1, VAR_40->rssi_5ghz[VAR_47]);
   VAR_40->rssi_5ghz[VAR_47] = 0;
  }
 }
 return (0);
}
