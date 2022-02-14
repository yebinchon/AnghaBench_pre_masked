
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwi_txpower {int silence_threshold; int multicast_enabled; int answer_pbreq; int disable_unicast_decryption; int disable_multicast_decryption; int allow_invalid_frames; int allow_beacon_and_probe_resp; int allow_mgt; int nchan; int mode; TYPE_1__* chan; int antenna; int bluetooth_coexistence; } ;
typedef struct iwi_txpower uint8_t ;
typedef struct iwi_txpower uint32_t ;
struct ieee80211com {scalar_t__ ic_opmode; int * ic_sup_rates; struct iwi_txpower* ic_macaddr; int ic_vaps; } ;
struct iwi_softc {int antenna; int bluetooth; struct ieee80211com sc_ic; } ;
struct iwi_configuration {int silence_threshold; int multicast_enabled; int answer_pbreq; int disable_unicast_decryption; int disable_multicast_decryption; int allow_invalid_frames; int allow_beacon_and_probe_resp; int allow_mgt; int nchan; int mode; TYPE_1__* chan; int antenna; int bluetooth_coexistence; } ;
struct ieee80211vap {struct iwi_txpower* iv_myaddr; } ;
struct TYPE_2__ {int chan; int power; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct iwi_softc*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct ieee80211vap* FUNC_2 (int *) ;
 int FUNC_3 () ;
 struct iwi_txpower FUNC_4 (int ) ;
 int FUNC_5 (struct iwi_softc*,int ,struct iwi_txpower*,int) ;
 int FUNC_6 (struct iwi_softc*,int *,int ,int ) ;
 int FUNC_7 (struct iwi_txpower) ;
 int FUNC_8 (struct iwi_txpower*,int ,int) ;

__attribute__((used)) static int
FUNC_9(struct iwi_softc *VAR_15)
{
 struct ieee80211com *VAR_16 = &VAR_15->sc_ic;
 struct ieee80211vap *VAR_17 = FUNC_2(&VAR_16->ic_vaps);
 struct iwi_configuration VAR_18;
 struct iwi_txpower VAR_19;
 uint8_t *VAR_20;
 uint32_t VAR_21;
 int VAR_22, VAR_23;

 FUNC_1(VAR_15);

 VAR_20 = VAR_17 ? VAR_17->iv_myaddr : VAR_16->ic_macaddr;
 FUNC_0(("Setting MAC address to %6D\n", VAR_20, ":"));
 VAR_22 = FUNC_5(VAR_15, VAR_8, VAR_20,
     VAR_0);
 if (VAR_22 != 0)
  return VAR_22;

 FUNC_8(&VAR_18, 0, sizeof VAR_18);
 VAR_18.bluetooth_coexistence = VAR_15->bluetooth;
 VAR_18.silence_threshold = 0x1e;
 VAR_18.antenna = VAR_15->antenna;
 VAR_18.multicast_enabled = 1;
 VAR_18.answer_pbreq = (VAR_16->ic_opmode == VAR_3) ? 1 : 0;
 VAR_18.disable_unicast_decryption = 1;
 VAR_18.disable_multicast_decryption = 1;
 if (VAR_16->ic_opmode == VAR_4) {
  VAR_18.allow_invalid_frames = 1;
  VAR_18.allow_beacon_and_probe_resp = 1;
  VAR_18.allow_mgt = 1;
 }
 FUNC_0(("Configuring adapter\n"));
 VAR_22 = FUNC_5(VAR_15, VAR_6, &VAR_18, sizeof VAR_18);
 if (VAR_22 != 0)
  return VAR_22;
 if (VAR_16->ic_opmode == VAR_3) {
  VAR_19.mode = VAR_11;
  VAR_19.nchan = 11;
  for (VAR_23 = 0; VAR_23 < 11; VAR_23++) {
   VAR_19.chan[VAR_23].chan = VAR_23 + 1;
   VAR_19.chan[VAR_23].power = VAR_14;
  }
  FUNC_0(("Setting .11b channels tx power\n"));
  VAR_22 = FUNC_5(VAR_15, VAR_9, &VAR_19, sizeof VAR_19);
  if (VAR_22 != 0)
   return VAR_22;

  VAR_19.mode = VAR_12;
  FUNC_0(("Setting .11g channels tx power\n"));
  VAR_22 = FUNC_5(VAR_15, VAR_9, &VAR_19, sizeof VAR_19);
  if (VAR_22 != 0)
   return VAR_22;
 }

 VAR_22 = FUNC_6(VAR_15, &VAR_16->ic_sup_rates[VAR_2],
     VAR_12, VAR_13);
 if (VAR_22 != 0)
  return VAR_22;

 VAR_22 = FUNC_6(VAR_15, &VAR_16->ic_sup_rates[VAR_1],
     VAR_10, VAR_13);
 if (VAR_22 != 0)
  return VAR_22;

 VAR_21 = FUNC_4(FUNC_3());
 FUNC_0(("Setting initialization vector to %u\n", FUNC_7(VAR_21)));
 VAR_22 = FUNC_5(VAR_15, VAR_7, &VAR_21, sizeof VAR_21);
 if (VAR_22 != 0)
  return VAR_22;


 FUNC_0(("Enabling adapter\n"));
 return FUNC_5(VAR_15, VAR_5, ((void*)0), 0);
}
